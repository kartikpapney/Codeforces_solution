#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int arr[5][5], temp, ans = INT_MIN;
    int p[5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<5; i++)
    {
        p[i] = i;
    }
    do
    {
        temp = arr[p[0]][p[1]] + arr[p[2]][p[3]] + arr[p[1]][p[0]] + arr[p[3]][p[2]] +  // 01234
                arr[p[1]][p[2]] + arr[p[2]][p[1]] + arr[p[3]][p[4]] + arr[p[4]][p[3]] + // 1234
                arr[p[2]][p[3]] + arr[p[3]][p[2]] +                                     // 234
                arr[p[3]][p[4]] + arr[p[4]][p[3]] ;                                     // 34

        if(temp > ans)
        {
            ans = temp;
        }
    }
    while(next_permutation(p, p+5));
    cout << ans;
    return 0;
}
