#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std ;
const double Eps = 1e-3 ; int i ;//以下的mark都是记录状态
struct Node{ int mark ; double xa, ya, xb, yb ; } I[5] ; // 0 = inexist, 1 = exist*1, 2 = exist*2 ;
//此处我的Node存的实际上是两个点，即一个一元二次方程的两个解。
struct Line{ int mark ; double k, b ; double x, y ; }L[12] ; //0 : // x-axis, 1: // y-axis, 2: // normal ;
struct Circle{
    int mark ; // 1 : circle ; 0 : Line ;
    double x, y, r ;
    double A, B, C, D, E ;
    Circle friend operator -(const Circle &A, const Circle &B){
        return (Circle){0, A.x - B.x, A.y - B.y, A.r - B.r, A.A - B.A, A.B - B.B, A.C - B.C, A.D - B.D, A.E - B.E} ;
    }
}C[10] ;
double ansx, ansy ; bool check ;

inline bool Comp(Node A, Node B){ return A.mark < B.mark ; }
inline double get_x(Line A, Line B){ return A.mark == 0 ? A.x : B.x ; } //which is (x = k) ;
inline double get_y(Line A, Line B){ return A.mark == 1 ? A.y : B.y ; } //which is (y = k) ;
inline bool equal(double x, double y){ return (x - y <= Eps) && (x - y >= -Eps) ; }
inline double disa(Node A, Node B){ return sqrt((A.xa - B.xa) * (A.xa - B.xa) + (A.ya - B.ya) * (A.ya - B.ya)); }//第一个点之间的距离
inline double disb(Node A, Node B){ return sqrt((A.xb - B.xb) * (A.xb - B.xb) + (A.yb - B.yb) * (A.yb - B.yb)); }//第二个点之间的距离
//呃……我承认两个dis写的很麻烦……但是好像也没什么很简单的法子
inline Node Line_inter(Line A, Line B){//斜截式直线求交点（之前写的直接copy过来的）
    if (A.mark == B.mark && (A.mark == 1 || A.mark == 0) ) return (Node){0, 0, 0, 0, 0} ;
    if ((A.mark == 1 && B.mark == 0) || (A.mark == 0 && B.mark == 1)) return (Node){1, get_x(A, B), get_y(A, B), 0, 0} ;
    if (A.mark == 1 && B.mark == 2) return (Node){1, (A.y - B.b) / B.k, A.y, 0, 0} ;
    if (A.mark == 2 && B.mark == 1) return (Node){1, (B.y - A.b) / A.k, B.y, 0, 0} ;
    if (A.mark == 2 && B.mark == 0) return (Node){1, B.x, B.x * A.k + A.b, 0, 0} ;
    if (A.mark == 0 && B.mark == 2) return (Node){1, A.x, A.x * B.k + B.b, 0, 0} ;
    return (Node){1, (A.b - B.b) / (B.k - A.k), (A.b - B.b) / (B.k - A.k) * A.k + A.b, 0, 0} ;  
}
inline Node get_inter (Circle A, Circle B){//“生成曲线”求交点
    if ((A.mark == 0 && B.mark) || (A.mark && B.mark == 0)){//一条是直线，一个是圆
        if (!A.mark) {Circle C ; C = A, A = B, B = C ;} // B is a line ;
        double a = 1 + (B.C / B.D) * (B.C / B.D), del ;
        double c = A.E - B.E * A.D / B.D + B.E * B.E /((B.D) * (B.D)) ;
        double b = (A.C - B.C * A.D / B.D + 2 * B.C * B.E /((B.D) * (B.D)) ) ; 
        if ((del = (b * b - 4 * a * c)) < -Eps) return (Node){0, 0, 0, 0, 0} ; 
        // printf("%lf %lf %lf %lf\n", a, b, c, del) ;
        double xa =  (-b + sqrt(del)) / (2 * a), xb = (-b - sqrt(del)) / (2 * a) ;
        double ya = -B.C / B.D * xa - B.E / B.D, yb = -B.C / B.D * xb - B.E / B.D ; 
        // cout << "-----------------" << xa << " " << ya << " " << xb << " " << yb << endl ;
        return (Node){2, xa, ya, xb, yb} ;//此处由于误差等原因，不容易判断是否delta=0的情况，所如果delta=0直接记录两遍，不影响结果
    }
    if (!A.mark && !B.mark){
        Line La, Lb ; //两条都是直线，那么就直接转化成斜截式求。
        if (!A.C) La = (Line){1, 0, 0, 0, - A.E / A.D} ; 
        else if (!A.D) La = (Line){0, 0, 0, -A.E / A.C, 0} ; else La = (Line){2, -A.C / A.D, -A.E / A.D, 0, 0} ;
        if (!B.C) Lb = (Line){1, 0, 0, 0, - B.E / B.D} ; 
        else if (!B.D) Lb = (Line){0, 0, 0, -B.E / B.C, 0} ; else Lb = (Line){2, -B.C / B.D, -B.E / B.D, 0, 0} ;  
        return Line_inter(La, Lb) ; 
    } 
    if (A.mark && B.mark){
        Circle C = A - B ; return get_inter(C, A) ;
        //此处需要用到一点小知识，就是两个圆的交点很难求，但是我们可以通过相减求出交线来（必修二知识点），那么就直接把这条线代会第一个if里就好。
    }
}
inline Circle make_rat(Circle A, Circle B){//rat = ratio[n.]比例；比率，用来求生成曲线的函数
    double _k2 = (A.r / B.r) * (A.r / B.r) ; Circle Ans ; double t ; 
    Ans.A = Ans.B = (_k2 - 1), Ans.C = -2 * (_k2 * B.x - A.x), Ans.D = -2 * (_k2 * B.y - A.y), 
    Ans.E = (_k2 * B.x * B.x - A.x * A.x) + (_k2 * B.y * B.y - A.y * A.y), Ans.x = Ans.y = Ans.r = 0 ; 
    if (Ans.A != 0) Ans.mark = 1, t = Ans.A, Ans.A /= t, Ans.B /= t, Ans.C /= t, Ans.D /= t, Ans.E /= t ; else Ans.mark = 0 ; return Ans ;
}
inline void make_for_Ans(){//最后的结果，判断选哪个交点
    sort(I + 1, I + 3, Comp) ;//我闲的，方便一点
    if (I[1].mark <= 1) ansx = I[1].xa, ansy = I[1].ya ;
    else {
        double A1, A11, B1, B11 ;
        I[1] = get_inter(C[4], C[5]) ;
        A1 = disa(I[1], (Node){0, C[1].x, C[1].y, 0, 0}) / C[1].r ; 
        A11 = disa(I[1], (Node){0, C[3].x, C[3].y, 0, 0}) / C[3].r ;
        B1 = disb(I[1], (Node){0, 0, 0, C[1].x, C[1].y}) / C[1].r ; 
        B11 = disb(I[1], (Node){0, 0, 0, C[3].x, C[3].y}) / C[3].r ;
        if (equal(A1, A11) && !equal(B1, B11)) ansx = I[1].xa, ansy = I[1].ya ; 
        else if (!equal(A1, A11) && equal(B1, B11)) ansx = I[1].xb, ansy = I[1].yb ;
        else if (!equal(A1, A11) && !equal(B1, B11)) check = 1 ;//如果在误差范围内都不相等就说明无解。
        else {
            double Ja = sin(1 / A1), Jb = sin(1 / B1) ;//比较角的大小，通过sin来搞
            if (Ja > Jb) ansx = I[1].xa, ansy = I[1].ya ; else ansx = I[1].xb, ansy = I[1].yb ;
        }
    }
}
int main(){
    for (i = 1 ; i <= 3 ; ++ i) cin >> C[i].x >> C[i].y >> C[i].r ;
    C[4] = make_rat(C[1], C[2]), C[5] = make_rat(C[2], C[3]), C[6] = make_rat(C[3], C[1]), 
    I[1] = get_inter(C[4], C[5]), I[2] = get_inter(C[5], C[6]), I[3] = get_inter(C[4], C[6]) ; 
    /*cout << I[1].xa << " " << I[1].xb << " " << I[1].ya << " " << I[1].yb << " " << I[1].mark << endl ;
    cout << I[2].xa << " " << I[2].xb << " " << I[2].ya << " " << I[2].yb << " " << I[2].mark << endl ;
    cout << I[3].xa << " " << I[3].xb << " " << I[3].ya << " " << I[3].yb << " " << I[3].mark << endl ;*/
    if (!I[1].mark || !I[2].mark || !I[3].mark) return putchar('\n'), 0 ; make_for_Ans() ; (!check) ? printf("%.5lf %.5lf", ansx, ansy) : 1 ; return 0 ; 
}
