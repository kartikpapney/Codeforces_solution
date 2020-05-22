#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main() {

	int n, m, min_price = 0, max_price = 0;
	cin >> n >> m;
	int arr[m], arr2[m];
	int x, y;
	x = y = n;
	for(int i=0; i<m; i++)
	{
		int z;
		cin >> z;
		arr[i] = arr2[i] = z;
	}
	sort(arr, arr+m);
	while(x--)
	{
		for(int i=m-1; i>=0; i--)
		{
			if(arr[i] > 0)
			{
				max_price+=arr[i];
				arr[i]--;
				break;
			}
		}
		sort(arr, arr+m);
	}
	sort(arr2, arr2+m);
	while(y--)
	{
		for(int i=0; i<m; i++)
		{
			if(arr2[i] > 0)
			{
				min_price+=arr2[i];
				arr2[i]--;
				break;
			}
		}
		sort(arr2, arr2+m);
	}
	cout << max_price << " " << min_price << endl;

	return 0;
}
