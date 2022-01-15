#include <iostream>
using namespace std;
int f(int n)
{
    if(n==1)
    cout<<"0"<<endl;
    else n=n+(n-2)(n-2);
    return n;

}
int main()
{
    int n;
    cin>>n;
    n=n+f(n);
    cout<<n<<endl;

    return 0;
}




