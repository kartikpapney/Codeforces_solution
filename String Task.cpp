#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<char> result;
    string str;
    cin >> str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' || str[i] == 'Y')
        {

        }
        else
        {
            result.push_back('.');
            if(str[i] > 64 && str[i] < 91)
                result.push_back(str[i]+32);
            else
                result.push_back(str[i]);
        }
        
    }
    for(int i=0; i<result.size(); i++)
    {
        cout << result[i];
    }
}
