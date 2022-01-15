#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==1||n==2
)
        return 1;
    else
        n=fact(n-1)+fact(n-2);
        return n;

}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}

