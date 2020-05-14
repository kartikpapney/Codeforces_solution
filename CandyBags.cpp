#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n*n/2];
    for(int i=0; i<(n*n)/2; i++)
    {
        arr[i] = n*n - (i);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            cout << i*(n/2)+j+1 << " " << arr[i*(n/2)+j] << " ";
        }
        cout << endl;
    }
}
