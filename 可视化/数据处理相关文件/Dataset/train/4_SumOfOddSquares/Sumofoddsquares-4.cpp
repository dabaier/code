#include <iostream>
using namespace std;
int f(int n)
{
    if(n==1)
    {
            	return 1;
    		}
             if(n%2==0)
             {
             	return 0;
    		 }
    		 else{int m=0;
    		 	for(;n>=1;n=n-2)
    		 	m=m+n*n;
    		 	return m;
    		 }

}
int main()
{
    int n;
    cin>>n;
     cout<<f(n);

    return 0;
}




