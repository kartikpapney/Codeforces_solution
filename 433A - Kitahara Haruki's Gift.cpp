 #include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main()
{
    int n, count100=0, count200, baaki_100, baaki_200;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 100)
        {
            count100++;
        }
    }
    count200 = n-count100;
    baaki_100 = count100%2;
    baaki_200 = count200%2;
    if(baaki_100 != 0)
    {
        cout << "NO";
    }
    else if(baaki_100 == 0 && baaki_200 == 0)
    {
        cout << "YES";
    } 
    else if(baaki_200 != 0 && count100 >=2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}
