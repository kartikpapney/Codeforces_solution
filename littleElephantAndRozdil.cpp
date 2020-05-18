#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned int n;
    int min = INT_MAX, position, min_count=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(min > x)
        {
            position = i+1;
            min = x;
            min_count=0;
        }
        else if(min == x)
        {
            min_count++;
        }
    }
    if(min_count == 0)
        cout << position;
    else
        cout << "Still Rozdil";
    return 0;
}
    
