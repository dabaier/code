#include <iostream>
using namespace std;
int main ()
{
int a,b,c,d;


cin>>a;
b=a+2000;

c=a+2010;
d=b;

while (d<c)
{
if(d%4==0)
cout<<d<<endl;;
d++;
}



return 0;
}
