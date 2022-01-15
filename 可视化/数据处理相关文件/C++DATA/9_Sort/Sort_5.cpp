#include<iostream>
using namespace std;
void fun(int a, int b, int c
)
{
      int z,n;
    if (a>=b)
    		z=a,n=b;
    		else z=b,n=a;
    if(z>=c)
    	{
    		if(c>n)
    		cout<<n<<' '<<c<<' '<<z;
    		else cout<<c<<' '<<n<<' '<<z;
    	}
    	else cout<<n<<' '<<z<<' '<<c;

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    fun(a,b,c);
    return 0;
}


