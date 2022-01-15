#include <iostream>
using namespace std;
int f(int n)
{
    if(n==1)
    return 1;
    else
    n=f(n-2)+n*n;
    return n;

}
int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
    n=f(n);
    cout<<n<<endl;
    }
    else
    cout<<"0"<<endl;

    return 0;
}




