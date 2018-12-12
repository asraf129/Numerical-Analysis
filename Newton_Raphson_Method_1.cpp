#include<bits/stdc++.h>
using namespace std;

double func(double x)
{
    return x*x*x-2*x-5;
}

double derivfunc(double x)
{
    return 3*x*x-2;
}

int main()
{
    double x,x1,fx,fx1,e;
    cout.precision(6);
    cout.setf(ios::fixed);
    cout<<"X1=";
    cin>>x1;
    cout<<"EPSILON=";
    cin>>e;
    cout<<"{x}"<<"    "<<"{x1}"<<"    "<<"{x1-x}"<<endl;
    do{
        x=x1;
        fx=func(x);
        fx1=derivfunc(x);
        x1=x-(fx/fx1);
        cout<<x<<"    "<<x1<<"    "<<(x1-x)<<endl;
    }while((x1-x)>=e);
    cout<<"Root="<<x1;
    return 0;
}
