#include <iostream>
using namespace std;
int main()
{
	int y(int x);
	int a;
	cin>>a;
    cout<<y(a)<<endl;
	return 0;
}
    int y(int x)
	{ int f;
	  if (x<1)
	  {f=x;}
	  else if (x>=1&&x<10)
	  {f=2*x-2;}
	  else if (x>=10)
	  {f=3*x-11;}
	return (f);
	}
	
	
	
	
	
	
	
	
  
