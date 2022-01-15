#include<iostream>
using namespace std;
void fun(int a,int b,int c
)
{
    int t;
     cin>>a>>b>>c;
    if(a>b)
     { t=a;
     a=b;
     b=t; }
    if(a>c)
     { t=a;
     a=c;
     c=t; }
    if(b>c)
     { t=b;
     b=c;
     c=t; }
    cout<<a<<" "<<b<<" "<<c;

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    fun(a,b,c);
    return 0;
}


