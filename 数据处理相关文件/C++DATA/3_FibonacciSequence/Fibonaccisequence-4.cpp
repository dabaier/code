#include <iostream>
using namespace std;
int fact(int n)
{
    if(n<3
)
        return 1;
    else
        fact(n)=fact(n-1)+fact(n-2);

}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}

