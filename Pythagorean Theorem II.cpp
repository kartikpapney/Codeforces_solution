#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int sqr(int a)
{
    return a*a;
}
int main()
{
    int n, count=0, i, j;
    cin >> n;
    
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            if(sqr(i)+sqr(j)>sqr(n))
				break;
			if(sqr(sqrt(sqr(i)+sqr(j)))==sqr(i)+sqr(j))
				count++;
        }
    }
    cout << count;
}
