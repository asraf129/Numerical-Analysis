///Bisection Method;
#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01
double func(double x){
    return x*x*x-2*x*x+3;
}
double c;
void bisection(double a,double b){
    if(func(a)*func(b)>=0){
        cout<<"Incorrect a,b";
        return;
    }
    c=a;
    while((b-a)>=e){
        c=(a+b)/2;
        if(func(c)==0.0){
            cout<<"Root="<<c<<endl;
            break;
        }
        else if(func(c)*func(a)<0){
            cout<<"Root="<<c<<endl;
            b=c;
        }
        else{
            cout<<"Root="<<c<<endl;
            a=c;
        }
    }
}

int main(){
    double a,b;
    cin>>a>>b;
    cout<<"the used function is x^3-2x^2+3"<<endl;
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
    bisection(a,b);
    cout<<"Approximate Root ="<<c<<endl;
    return 0;
}
