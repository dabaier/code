#include<iostream>
using namespace std;

int fun(int i,int j){
    if(j==0||j==i)
        return 1;
    else
        return fun(i-1,j-1)+fun(i-1,j);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n+1;i++){
        for(int k=0;k<n-i;k++)
                cout<<"**";
        for(int j=0;j<=i;j++){
            cout<<fun(i,j)<<"***";
        }
        cout<<endl;
    }
    return 0;
}


