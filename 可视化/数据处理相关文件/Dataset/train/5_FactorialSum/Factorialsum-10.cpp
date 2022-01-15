#include <iostream>
using namespace std;
int fac(int n)
{
  int z;
  for(z=1;n>0;n--)
  {
   z=z*n;
  }
  return z;
}
int main()
{
 int a,b,c;
 cin>>a>>b;
 c=fac(a)+fac(b);
 cout<<c<<endl;
 return 0;

}

