#include<iostream>
using namespace std;
#define N 10
int main() { int a[N],i,j,count,b;
  for ( i=0;i<N;i++ ) cin>>a[i];
  count=0;
  for ( i=0;i<N;i++ ) {
   b=1; for ( j=2;j<=i/2;j++ ) if ( a[i]%j==0&&a[i]%j!=7
	   ) {b=0;break;}
    if ( b ) { cout<<a[i]<<" "; count++; }
  }
  cout<<endl<<count<<endl;
}

