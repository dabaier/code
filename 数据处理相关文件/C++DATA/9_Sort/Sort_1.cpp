#include<iostream>
using namespace std;
void fun(int a,int b,int c
)
{
    if(a>b)
    {
     if(b>c) cout<<a<<" "<<b<<" "<<c;
     else if(c>a) cout<<c<<" "<<a<<" "<<b;
     else cout<<a<<" "<<c<<" "<<b;
    }
    if(a<b)
    {
     if(c>b) cout<<c<<" "<<b<<" "<<a;
     else if(c<a) cout<<b<<" "<<a<<" "<<c;
     else cout<<b<<" "<<c<<" "<<a;
    }

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    fun(a,b,c);
    return 0;
}

