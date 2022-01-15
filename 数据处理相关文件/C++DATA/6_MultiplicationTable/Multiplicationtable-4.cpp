#include<iostream>
using namespace std;
int zy(int x)
{int z;
    for(int i=1;i<=x;i++)
	{
		for(int a=1;a<=i;a++)
		{
			z=a*i;
			cout<<a<<"*"<<i<<"="<<z;
			if(a<i)
				cout<<"  ";
		}
	
		cout<<endl;
	}
	 return 0;       
}


int main()
{
	int a;
	cin>>a;
	zy(a);
	return 0;
}

