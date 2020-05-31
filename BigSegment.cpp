#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <iterator>
using namespace std;
 
int main()
{
    int n, x, y, maxElement, minElement;
    cin >> n;
    int arr[n][2];
    multimap<int, int> mp;
    multimap<int, int> mp2;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        cin >> y;
        mp.insert(pair<int, int>(x, y));
        mp2.insert(pair<int, int>(y, x));
        arr[i][0] = x;
        arr[i][1] = y;
    }
    maxElement = mp.begin()->first;
    minElement = mp2.rbegin()->first;
    for(int i=0; i<n; i++)
    {
        if(arr[i][0] == maxElement && minElement == arr[i][1])
        {
            cout << i+1;
            return 0;
        }
    }
    cout << -1;


    return 0;
}
