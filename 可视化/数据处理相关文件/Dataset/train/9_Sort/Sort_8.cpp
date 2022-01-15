#include<iostream>
using namespace std;
void fun(int a, int b, int c
)
{
     int m,n;
    if (a>=b)
    		m=a,n=b;
    		else m=b,n=a;
    if(m>=c)
    	{
    		if(c>n)
    		cout<<n<<' '<<c<<' '<<m;
    		else cout<<c<<' '<<n<<' '<<m;
    	}
    	else cout<<n<<' '<<m<<' '<<c;

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    fun(a,b,c);
    return 0;
}


