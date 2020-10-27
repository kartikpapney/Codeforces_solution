#include <bits/stdc++.h>
#define loop(i,j,n) for(int i=(j);i<((int)n);++i)

using namespace std;


int main()
{
   int n, k;
   cin >> n >> k;
   k = 240 - k;
   int cm = k/5;
   int count = 0;

   while(true) {
       k-=(5* (count +1));
       if(k >= 0) {
           count++;
       } else {
           break;
       }
    }
   cout << min(count, n);
}
