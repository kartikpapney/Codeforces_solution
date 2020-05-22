#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <set>
using namespace std;

int main() 
{
    int n, input;
    cin >> n;
    set<int>arr;
    for(int i=0; i<n; i++)
    {
        cin >> input;
        if(input<=n)
            arr.insert(input);
    }
    cout << n-arr.size();

	return 0;
}
