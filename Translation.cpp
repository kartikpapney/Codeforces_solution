#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int i;
    string str, reverse;
    cin >> str >> reverse;
    if(str.length() != reverse.length())
    {
        cout << "NO";
        return 0;
    }
    for(i=0; i<str.length() && i<reverse.length(); i++)
    {
        if(str[i] != reverse[reverse.length() - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;

}
    
