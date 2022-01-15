#include<iostream> 
using  namespace  std; 
int prime(int n)
{
	int i=2;
	for(;i<=n;i++)
		if (n%i==0)
			break;
		if(i==n)
			return(i);
}
int  main() 
{ 
	int  n,m,i2,i3;
	cin>>m; 
	if(m%2==0)
		n=m-1;
	else n=m;
	for(i2=3,i3=5;i2<=n-2,i3<=n;i2=i2+2,i3=i3+2)
	{
		{
			if(prime(i2)+2==prime(i3)&&prime(i3)!=n)
				cout<<prime(i2)<<' '<<prime(i3)<<endl;
			if(prime(i3)==n&&prime(i2)+2==prime(i3))
				cout<<n-2<<' '<<n;
			
		}
	}
	return  0; 
} 
