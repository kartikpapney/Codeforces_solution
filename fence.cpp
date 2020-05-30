#include <iostream>
using namespace std;

int main()
{
    int n, k, sum=0, index=1, i, j, current_sum=0;
    cin >> n >> k;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(i=0; i<k; i++)
    {
        sum += arr[i];
    }
    current_sum = sum;
    i=0;
    j=k;
    while(j<n)
    {
        if(current_sum > sum+arr[j]-arr[i])
        {
            current_sum = sum+arr[j]-arr[i];
            index = i+2;
        }
        sum = sum+arr[j] - arr[i];
        i++;
        j++;
    }
    cout << index;
}
