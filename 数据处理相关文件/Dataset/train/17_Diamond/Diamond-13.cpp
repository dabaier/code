#include <iostream>
using namespace std;
int main() 
{
	int n,i,j,w,t;
	cin>>n;
	i=n-1;
	j=1;
	while (i>=0&&j<=2*n-1)
	{
		w = i;
		t = j;
		for (i=w; i>0;i--)
			cout<<' ';
		for (j=1; j<=2*t-1;j++)
			cout<< '*';
		for (i=w;i>0;i--)
			cout<<' ';
		i=w;
		j=t;
		i--;j++;
		cout<<endl;
	}
	i=1;
	j=n-1;
	while(i>=0&&j>=1)
	{
		w=i;
		t=j;
		for (i=w;i>0;i--)
			cout<<' ';
		for (j=1; j<=2*t-1;j++)
			cout<<'*';
		for (i=w;i>0;i--)
			cout<<' ';
		i=w;
		j=t;
		i++;j--;
		cout<<endl;
	}
	cout<<endl;
	return 0;
}



