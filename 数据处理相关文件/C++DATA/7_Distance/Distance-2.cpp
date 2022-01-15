#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float dist(float x1, float y1, float x2, float y2)
{
	float final;
	final = sqrt(pow(x2 - x1, 2) + pow(y1 - y2, 2));
	cout << fixed << setprecision(2) << final;
	return 0;
}


int main()
	{
	float a, b,c,d;
	cin >> a >> b>>c>>d;
	dist(a, b,c,d);
	return 0;
    }









	







	

	
	









	


