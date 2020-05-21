#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    int arr[26] = {0};
    cin >> n;
    string str;
    cin >> str;
    vector<char>char_value;
    vector<int>char_time_repeated;
    for(int i=0; i<str.length(); i++)
    {
        arr[str[i]-97]++;
    }
    for(int i=0; i<26; i++)
    {
        if(arr[i]!=0 && arr[i]%n == 0)
        {
            char_value.push_back((i+97));
        }
        else if(arr[i]%n != 0)
        {
            cout << -1;
            return 0;
        }
    }
    for(int i=0; i<26; i++)
    {
        if(arr[i]!=0)
        {
            char_time_repeated.push_back(arr[i]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<char_value.size(); j++)
        {
            for(int k=0; k<char_time_repeated[j]/n; k++)
            {
                cout << char_value[j];
            }
        }
    }


}
