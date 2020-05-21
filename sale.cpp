#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, profit = 0;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<m; i++)
    {
        if(arr[i] >= 0)
        {
            break;
        }
        else
        {
            profit+=arr[i];
        }
        
    }
    cout << (-1)*profit << endl;


}
