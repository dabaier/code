#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==2||n==1
)
        return 1;
    else
         return (fact(n-1)+fact(n-2));

}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}

