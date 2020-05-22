#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int main() 
{
	int n, count_negative=0, count_positive=0, i;
	cin >> n;
	int arr[n];
	stack<int> positive;
	stack<int> negative;
	stack<int> zero;
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr+n);
	for(i=0; arr[i]<0; i++)
	{
		negative.push(arr[i]);
	}
	i++;
	for(i; i<n; i++)
	{
		positive.push(arr[i]);
	}
	zero.push(0);
	if(positive.empty())
	{
		int x = negative.top();
		negative.pop();
		int y = negative.top();
		negative.pop();
		positive.push(x);
		positive.push(y);
	}
	if(negative.size()%2 == 0)
	{
		int x = negative.top();
		negative.pop();
		zero.push(x);
	}

	cout << negative.size() << " ";
	while(!negative.empty())
	{
		cout << negative.top() << " ";
		negative.pop();
	}
	cout << endl;
	cout << positive.size() << " ";
	while(!positive.empty())
	{
		cout << positive.top() << " ";
		positive.pop();
	}
	cout << endl;
	cout << zero.size() << " "; 
	while(!zero.empty())
	{
		cout << zero.top() << " ";
		zero.pop();
	}
	cout << endl;

	return 0;
}
