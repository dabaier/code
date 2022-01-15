#include<iostream>
using namespace std;
int main()
{
	int i=0,n=0,p=0;
	char a;
	cin>>a;
	do
	{
		if(a>='0'&&a<='9')
			i++;
		
		else if(a>='a'&&a<='z')
			n++;
		else if(a==' ')
			p++;

	}
	while(cin.get(a)&&a!='\n');
	cout<<n<<" "<<p<<" "<<i;

	
	return 0;
}
