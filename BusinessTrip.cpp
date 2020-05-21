#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int k, sum = 0, count = 0;
    int arr[12];
    cin >> k;
    for(int i=0; i<12; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+12);
    for(int i=11; i>=0; i--)
    {
        if(sum>=k)
        {
            break;
        }
        sum+=arr[i];
        count++;
    }
    if(sum >= k)
        cout << count;
    else
        cout << -1;


}
