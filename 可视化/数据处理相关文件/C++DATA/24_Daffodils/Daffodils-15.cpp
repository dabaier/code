#include <iostream>
#include <cmath>
using namespace std;
int main ()
{ int i=100,f;
while (i<=999)
{
  if (i==pow((i/100),3)+pow((i/10-i/100*10),3)+pow((i-i/10*10),3))
  {
    f=i;
	cout<<f<<" ";
  }
  i=i+1;
}
  return 0;
}
