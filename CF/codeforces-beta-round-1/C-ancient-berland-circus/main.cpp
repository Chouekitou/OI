#include <iostream>
#include <fstream>
#include <cmath>
const double EPS=1E-2;    
using namespace std;

double x4,x2,x3,y4,y2,y3;
double len1,len2,len3,p,s,mr;
double cos1,cos2,cos3,gcd,ssize,sum,pi;

double getGcd(double a,double b) {
    if(fabs(b)<EPS)
        return a;
    if(fabs(a)<EPS)
        return b;
    return getGcd(b,fmod(a,b));
}

double calcCos(double mr,double len){
    return (2.0*(mr*mr)-len*len)/(2.0*mr*mr);
}

double calcLen(double a,double b,double c,double d){
    return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}

int main(){
    pi=3.141592653589793238462643383279;
    // ios::sync_with_stdio(0);
    // freopen("main.in", "mr", stdin);
    cin>>x4>>y4;
    cin>>x2>>y2;
    cin>>x3>>y3;
    len1=calcLen(x4,y4,x2,y2);
    len2=calcLen(x2,y2,x3,y3);
    len3=calcLen(x3,y3,x4,y4);
    p=(len1+len2+len3)/2.0;
    s=sqrt(p*(p-len1)*(p-len2)*(p-len3));
    mr=(len1*len2*len3)/(4.0*s);
    cos1=calcCos(mr,len1);
    cos2=calcCos(mr,len2);
    cos3=calcCos(mr,len3);
    gcd=getGcd(acos(cos1),getGcd(acos(cos2),2 * pi - acos(cos1) - acos(cos2)));
    
    ssize=(mr*mr*sin(gcd))/2.0;
    sum=ssize*(pi/gcd)*2.0;
    // cout<<sum<<endl;
    printf("%.7lf",sum);
    return 0;
}