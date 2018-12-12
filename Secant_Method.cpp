#include<bits/stdc++.h>
using namespace std;
#define MAX_ITER 1000000

double func(double x)
{
    return x*x*x-2*x-5;
}

void secant(double a,double b)
{
    double c;
    for(int i=0;i<MAX_ITER;i++){
    if(func(a)*func(b)>=0)
    {
        cout<<"Incorrect a,b"<<endl;
        return;
    }
    c=a;
    c=(a*func(b)-b*func(a))/(func(b)-func(a));
    if(func(c)==0){
        break;}
    else if(func(a)*func(a)<0)
    {
        b=c;
    }
    else
        {
            a=c;
        }
    }
     cout<<"Approximate Root="<<c;
}

int main()
{
    double a,b;
    cin>>a;
    cin>>b;
    secant(a,b);
    return 0;
}
