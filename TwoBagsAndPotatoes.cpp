#include <iostream>
#include <string>
#include <math.h>
using namespace std;
 
int main()
{
    long long int y, k, n;
    cin >> y >> k >> n;
 
    if( k* (y/k) + k >  n)
    {
        cout << -1;
        return 0;
    }
    for(int i=k*(y/k) -y + k; i+y<=n; i+=k)
    {
        cout << i<< " ";
    }
    return 0;
}
