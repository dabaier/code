#include <iostream>
#include <cmath>
using namespace std;
void prints(int a,int b)
{
	cout<<a<<'*'<<b<<'='<<a*b<<"  ";
}
void line(int n)
{
	int i=1;
	for(;i<=n;i++)
	prints(i,n);
}
int main()
{
    int n;
    int i=1;
    cin>>n;
    for(;i<=n;i++)
   {
	 line(i);
    cout<<endl;
   }
    
	return 0;
}


