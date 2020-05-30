#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, count=0, count2=0;
    cin >> n;
    string str;
    cin >> str;
    int first[n], second[n];
    for(int i=0; i<n; i++)
    {
        first[i] = str[i];
    }
    for(int i=0; i<n; i++)
    {
        second[i] = str[i+n];
    }
    sort(first, first+n);
    sort(second, second+n);
    for(int i=0; i<n; i++)
    {
        if(first[i] < second[i])
        {
            count++;
        }
        else if(first[i] > second[i])
        {
            count2++;
        }
    }
    if(count==n || count2==n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    

}
