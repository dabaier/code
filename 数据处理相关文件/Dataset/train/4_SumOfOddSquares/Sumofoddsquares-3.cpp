#include <iostream>
using namespace std;
int f(int n)
{
    if(n==1)
     return 1;
        else 
    	return 0;

}
int main()
{
    int n;
    cin>>n;
    int sum=0; 
            for(int i=1;i<=n;i=i+2)
            {
            	sum=sum+f(n%2)*i*i;
            	
    		}
            
            cout<<sum;

    return 0;
}




