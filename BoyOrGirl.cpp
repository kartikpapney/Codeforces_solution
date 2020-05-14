#include <iostream>
using namespace std;
int main()
{
    int count[26] = {0}, count_number=0;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        count[s[i]-97]++;
    }
    for(int i=0; i<26; i++)
    {
        if(count[i] > 0)
        {
            count_number++;
        }
    }
    if(count_number % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!";
}
