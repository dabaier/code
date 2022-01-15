#include <iostream>
using namespace std;
int f(int n)
{
    if(n==1)
    return 1;
    else return n;

}
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    cout<<0;else {for(int a=1,sum=0;a<=f(n);a+2){sum=sum+a*a;
    }cout<<sum;}

    return 0;
}




