#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
	float n, x, y;
	cin >> n >> x >> y;
	if( ceil(n*y/100) > x)
	{
		cout << ceil(n*y/100) - x;
	}
	else
	{
		cout << 0;
	}
	
	return 0;
}
