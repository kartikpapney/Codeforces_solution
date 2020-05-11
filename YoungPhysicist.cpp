#include <iostream>
using namespace std;
int main()
{
	short int n, i;
	short int A[3] = {0};
	cin >> n;
 
	while(n--)
	{
		int x, y, z;
		cin >> x >> y >> z;
		A[0]+=x;
		A[1]+=y;
		A[2]+=z;
	}
 
	for(i=0; i<2; i++)
	{
		if(A[i] != 0)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
 
}
