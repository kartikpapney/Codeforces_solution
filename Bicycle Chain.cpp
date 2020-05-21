#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count = 0;
    int max = INT_MIN;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for(int j=0; j<m; j++)
    {
        cin >> arr2[j];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=m-1; j>=0; j--)
        {
            
            if(  arr2[j]%arr[i] == 0  )
            {
                if(max < arr2[j]/arr[i])
                {
                    max = arr2[j]/arr[i];
                    count = 1;
                    break;
                }    
                else if(max == arr2[j]/arr[i])
                {
                    count++;
                }
            }

        }
    }
    cout << count;
}
