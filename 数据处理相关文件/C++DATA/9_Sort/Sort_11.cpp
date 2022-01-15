#include<iostream>
using namespace std;
void fun(int x,int y,int z
)
{
    if(x<y)
       if(x<z)
         if(y<z)
           {
             cout<< x<<" "<<y<<" "<<z<<" ";
           }
         else
           {
            cout<< x<<" "<<z<<" "<<y<<" ";
           }
       else
     {
       cout<< z<<" "<<x<<" "<<y<<" ";
     }
    else
      if(z<y)
    {cout<< z<<" "<<y<<" "<<x<<" ";}
    else
     if(x<z)
    {cout<<y<<" "<<x<<" "<<z<<" ";}
     else
    {cout<<y<<" "<<z<<" "<<x<<" ";}

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    fun(a,b,c);
    return 0;
}


