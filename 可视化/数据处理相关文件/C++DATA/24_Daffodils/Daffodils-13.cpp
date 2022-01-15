#include <iostream>
using namespace std;
int main()
{
int a,b,c,d;
for(a=100;a<1000;a++)
{
b=a/100;
c=a/10-b*10;
d=a%10;




if(a==b*b*b+c*c*c+d*d*d)
cout<<a<<" ";
}
cout<<endl;

return 0;



}

