#include <iostream>
using namespace std;
int main()
{
   int n,i;
   cin>>n;
   i=2;
   for(i;i<n;i++)
   if(n%i!=0&&n%10==7)
   {
      cout<<n<<endl;
   }
    return 0;
}

