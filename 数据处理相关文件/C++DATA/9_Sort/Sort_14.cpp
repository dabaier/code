#include<iostream>
using namespace std;
void fun(int x,int y,int z
)
{
    
     int  n;
    if (x>y)
    {n=x,x=y,y=n;}
    if(x>z)
    {n=x,x=z,z=n;}
    if(y>z)
    {n=z,z=y,y=n;}
    cout<<x<<" "<<y<<" "<<z;

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    fun(a,b,c);
    return 0;
}


