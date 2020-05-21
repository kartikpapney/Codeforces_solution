#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int count =0;
    string str;
    cin >> str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == str[i+1])
        {
            count++;
            if(count >= 6)
            {
                cout << "YES";
                return 0;
            }    
        }
        else
        {
            count = 0;
        }
    }
    cout << "NO";
}
