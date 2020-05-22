#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
using namespace std;

int main() 
{
    int n, k, sum=0;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    if(sum%k==0)
    {
        cout << abs(sum)/k;
    }
    else
    {
        cout << (abs(sum)/k)+1;
    }
    

	return 0;
}
