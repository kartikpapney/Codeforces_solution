#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <set>
#include <cstring>
#include <iterator>
using namespace std;
 
void sieveOfEratosthenes(int n, set<long long int>&collection)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for(long long int p=2; p*p <=n; p++)
    {
        if(prime[p] == true)
        {
            for(long long int i=p*p; i<=n; i+=p)
            {
                prime[i] = false;
            }
        }
    }
    for(long long int p = 2; p<=n; p++)
    {
        if(prime[p])
        {
            collection.insert(p*p);
        }
    }
}
int main()
{
    set<long long int> collection;
    sieveOfEratosthenes(1000000, collection);
    set<long long int>::iterator itr;
    int n;
    cin >> n;
    long long int arr[n];
    itr = collection.end();
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(collection.find(arr[i]) != itr)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
 
 
    return 0;
}
