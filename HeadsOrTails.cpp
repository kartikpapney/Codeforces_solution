#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <set>
using namespace std;

int main() 
{
    int x, y, a, b, count=0;
    cin >> x >> y >> a >> b;
    if(x > b)
    {

        
        for(int i=a; i<=x; i++)
        {
            for(int j=b; j<=y; j++)
            {
                if(i>j)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
        for(int i=a; i<=x; i++)
        {
            for(int j=b; j<=y; j++)
            {
                if(i>j)
                {
                    cout << i << " " << j << endl;
                }
            }
        }
    }
    else
    {
        cout << 0;
    }
    
	return 0;
}
