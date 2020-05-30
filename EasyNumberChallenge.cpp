#include <iostream>
using namespace std;

int arr[1000000];
int main()
{
    int a, b, c ,m, i, j, k;
    int sum = 0;
    cin >> a >> b >> c;
    m = a*b*c;
    for(i = 1; i <= m; i++)
    {
        for(j = i; j <= m; j += i)
            arr[j]++;
    }
    for(i=1; i<=a; i++)
    {
        for(j=1; j<=b; j++)
        {
            for(k=1; k<=c; k++)
            {
                sum+= arr[i*j*k];
                sum=sum%1073741824;
            }
        }
    }
    cout << sum;
}
