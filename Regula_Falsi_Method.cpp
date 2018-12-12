///False Position Method;
#include<bits/stdc++.h>
using namespace std;
#define MAX_ITER 1000000

double func(double x){
    return x*x*x - 2*x - 5;
}

void regulaFalsi(double a,double b)
{
   if(func(a)*func(b)>=0)
   {
       cout<<"Incorrect a,b";
       return;
   }
   double c=a;
   for(int i=0;i<MAX_ITER;i++)
   {
       c=((a*func(b)-b*func(a))/(func(b)-func(c)));
       if(func(c)==0){
        break;
       }
       else if(func(a)*func(c)<0){
        b=c;
       }
       else{
        a=c;
       }

   }
   cout<<"Approximate Root= "<<c<<endl;
}

int main()
{
    double a,b;
    cin>>a;
    cin>>b;
    regulaFalsi(a,b);
    return 0;
}
