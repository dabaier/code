#include <iostream>
using namespace std;
int f(int n)
{
    if(n==1)
    return 1;
    else return n*n+f(n-2);

}
int main()
{
    int n;
    cin>>n;
    if(n%2) cout<<f(n);
    else cout<<0;

    return 0;
}




