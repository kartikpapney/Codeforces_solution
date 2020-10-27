#include <bits/stdc++.h>
#define loop(i,j,n) for(int i=(j);i<((int)n);++i)

using namespace std;


int main()
{
   long long int n, l;
   cin >> n;
   cin >> l;
   long long int arr[n] = {0};
   loop(i, 0, n) {
       cin >> arr[i];
   }
   sort(arr, arr+n);
   long long int max1 = INT_MIN;
   loop(i, 0, n-1) {
       max1 = max(arr[i+1] - arr[i], max1);
   }
   cout << fixed << max(max1/2.0, max(arr[0], l-arr[n-1])/1.0);
   
}
