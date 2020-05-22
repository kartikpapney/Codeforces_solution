#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	int arr[n], result[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
		result[arr[i]-1] = i+1;
	}
	for(int i=0; i<n; i++)
	{
		cout << result[i] << " ";
	}
	return 0;
}
