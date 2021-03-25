#include <iostream>
#include <fstream>
using namespace std;

struct point{
    double x,y,r;
}in[4];

double k1,b1,x1,my1,k2,b2,x2,y2,tk1,tb1,tk2,tb2,x,y;

int main(){
    // ios::sync_with_stdio(0);
    for(int i=1;i<=3;i++){
        cin>>in[i].x>>in[i].y>>in[i].r;
    }
    //calc line <1,2>
    if(in[1].x==in[2].x){
        my1=in[1].y+(in[2].y-in[1].y)*(in[1].r/(in[1].r+in[2].r));
    }
    else if(in[1].y==in[2].y){
        x1=in[1].x+(in[2].x-in[1].x)*(in[1].r/(in[1].r+in[2].r));
    }
    else{
        tk1=(in[1].y-in[2].y)/(in[1].x-in[2].x);
        k1=-1/tk1;
        tb1=in[1].y-k1*in[1].x;
        x1=in[1].x+(in[2].x-in[1].x)*(in[1].r/(in[1].r+in[2].r));
        my1=in[1].y+(in[2].y-in[1].y)*(in[1].r/(in[1].r+in[2].r));
        b1=my1-k1*x1;
    }
    //calc line <1,3>
    if(in[1].x==in[3].x){
        y2=in[1].y+(in[3].y-in[1].y)*(in[1].r/(in[1].r+in[3].r));
    }
    else if(in[1].y==in[3].y){
        x2=in[1].x+(in[3].x-in[1].x)*(in[1].r/(in[1].r+in[3].r));
    }
    else{
        tk2=(in[1].y-in[3].y)/(in[1].x-in[3].x);
        tb2=in[1].y-k2*in[1].x;
        k2=-1/tk2;
        x2=in[1].x+(in[3].x-in[1].x)*(in[1].r/(in[1].r+in[3].r));
        y2=in[1].y+(in[3].y-in[1].y)*(in[1].r/(in[1].r+in[3].r));
        b2=y2-k2*x2;
    }
    if(x1&&my1){
        if(x2&&y2){
            x=(b2-b1)/(k1-k2);
            y=k1*x+b1;
        }
        else if(x2){
            x=x2;
            y=x*k1+b1;
        }
        else if(y2){
            y=y2;
            x=(y-b1)/k1;
        }
        else return 0;
    }
    else if(x1){
        if(x2&&y2){
            x=x1;
            y=k2*x+b2;
        }
        else if(x2){
            return 0;
        }
        else if(y2){
            x=x1;
            y=y2;
        }
        else return 0;
    }
    else if(my1){
        if(x2&&y2){
            y=my1;
            x=(y-b2)/k2;
        }
        else if(x2){
            x=x2;
            y=my1;
        }
        else if(y2){
            return 0;
        }
        else return 0;
    }
    else return 0;
    // cout<<x<<" "<<y;
    printf("%.5lf %.5lf",x,y);
    return 0;
}