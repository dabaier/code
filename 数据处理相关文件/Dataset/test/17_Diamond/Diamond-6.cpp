#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i;
	for(i=1;i<=n;i++)
	{
	for (int j=1;j<=(2*n-1);j++)
		{
            if (j>n-i && j<n+i)
			{  
				cout<<"*";  
						}   
            else
			{  
                cout<<" ";  
            }  
        }  
        cout<<endl;  
}
for (i=n-1;i>= 1;i--)
{
	for (int j=1;j<=(2*n-1);j++)
	{  
            if (j>n-i && j<n+i)
			{  
				cout<<"*";  
            }   
            else 
			{  
				cout<<" ";  
            }  
        }  
        cout<<endl;
}
return 0;
}

