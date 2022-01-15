#include<iostream>
using namespace std;
void fun(int a,int b,int c
)
{
    	if (a>=b) 
    	{
    		if (a>=c)
    		{
    			if (b>=c)
    				cout<<c<<' '<<b<<' '<<a<<endl;
    			else
    				cout<<b<<' '<<c<<' '<<a<<endl;
    		}
    		else
    		{
    			cout<<b<<' '<<a<<' '<<c<<endl;
    		}
    	}
    	else
    	{
    		if (b>=c)
    		{
    			if (a>=c)
    				cout<<c<<' '<<a<<' '<<b<<endl;
    			else
    			{
    				cout<<a<<' '<<c<<' '<<b<<endl;
    			}
    		}
    		else
    			cout<<a<<' '<<b<<' '<<c<<endl;
    	}

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    fun(a,b,c);
    return 0;
}


