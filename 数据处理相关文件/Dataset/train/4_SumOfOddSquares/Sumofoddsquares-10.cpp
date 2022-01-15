#include <iostream>
using namespace std;
int f(int n)
{
    if(n==1)
    return 1;
    else return f(n-2)+n*n;

}
int main()
{
    int n;
    cin>>n;
    if(n%2==0) cout<<0;
    else cout<<f(n);
    return 0;

    return 0;
}




