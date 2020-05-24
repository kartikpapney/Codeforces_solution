#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(){
    long long int max, min, count_max=0, count_min=0, ans;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        if(arr[0] == arr[i])
        {
            count_min++;
        }
        else
        {
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(arr[n-1] == arr[i])
        {
            count_max++;
        }
        else
        {
            break;
        }
        
    }
    if(count_max == n)
    {
        ans = count_max*(count_min-1)/2;
    }
    else
    {
        ans = count_max*count_min;
    }
    
    cout << (arr[n-1] - arr[0]) << " " << ans;
    return 0;
}
