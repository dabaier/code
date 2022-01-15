#include<iostream>
using namespace std;
void fun(int a, int b,int c
)
{
    int max, min,z;
    	if (a > b)
    		max = a;
    	else max = b;
    	if (max < c)
     max = c;
    	if (a < b)
    		min = a;
    	else min = b;
    	if (min > c)
    	min = c;
    	if (a != min && a != max)
    		z = a;
    	if (b != min && b != max)
    		z = b;
    	if (c != min && c != max)
    		z = c;
    	cout << min << " "<<z<< " "<<max;
    ;

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    fun(a,b,c);
    return 0;
}


