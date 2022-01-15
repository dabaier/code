#include <iostream>
using namespace std;
int f(int n)
{
    if(n==1)
    return 1;
    else if (n%2==0)
    return 0;
    return f(n-2)+n*n;

}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);

    return 0;
}




