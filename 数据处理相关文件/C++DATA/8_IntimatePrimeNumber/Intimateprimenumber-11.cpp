#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int sushu(int);
	int n;
	cin>>n;
	int i;
	for(i=5;i<=n;i=i+2)
	{
		if(sushu(i)==1&&sushu(i-2)==1) cout<<i-2<<" "<<i<<endl;
	}
	return 0;
} 

int sushu(int n)
{
	int i,p=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0) p=0; 
	}
	return p;
}




