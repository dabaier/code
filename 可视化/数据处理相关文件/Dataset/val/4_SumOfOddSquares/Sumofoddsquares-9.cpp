#include <iostream>
using namespace std;
int f(int n)
{
    if(n==1)
    return 1;
    if(n%2==0)
    return 0;
    n=n*n+f(n-2);
    return n;

}
int main()
{
    int n;
    cin>>n;
    n=f(n);
    cout<<n;

    return 0;
}




