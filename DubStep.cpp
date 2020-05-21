#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int i;
    string str;
    cin >> str;
    if(str.length() == 1)
    {
        cout << str[0];
    }
    else if(str.length() == 2)
    {
        cout << str[0] << str[1];
    }
    else
    {
        for(i=0; i<str.length(); )
        {
            if(i<str.length() - 3)
            {
                if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
                {
                    i+=3;
                }
                else
                {
                    cout << str[i];
                    i++;
                    if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
                        cout << " ";
                }
                
            }
            else if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
            {
                break;
            }   
            else
            {
                while(i<str.length())
                {
                    cout << str[i];
                    i++;
                }
            }
            
            
        }
    }
    

}#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int i;
    string str;
    cin >> str;
    if(str.length() == 1)
    {
        cout << str[0];
    }
    else if(str.length() == 2)
    {
        cout << str[0] << str[1];
    }
    else
    {
        for(i=0; i<str.length(); )
        {
            if(i<str.length() - 3)
            {
                if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
                {
                    i+=3;
                }
                else
                {
                    cout << str[i];
                    i++;
                    if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
                        cout << " ";
                }
                
            }
            else if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
            {
                break;
            }   
            else
            {
                while(i<str.length())
                {
                    cout << str[i];
                    i++;
                }
            }
            
            
        }
    }
    

}
