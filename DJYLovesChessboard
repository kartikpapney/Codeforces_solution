#include <iostream>
#include <string>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    char arr[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<n; j++)
            {
                if(j%2==0 && arr[i][j]=='.')
                {
                    cout << 'B';
                }
                else if(j%2!=0 && arr[i][j] == '.')
                {
                    cout << 'W';
                }
                else
                {
                    cout << '-';
                }
            }
        }
        else
        {
            for(int j=0; j<n; j++)
            {
                if(j%2==0 && arr[i][j]=='.')
                {
                    cout << 'W';
                }
                else if(j%2!=0 && arr[i][j] == '.')
                {
                    cout << 'B';
                }
                else
                {
                    cout << '-';
                }
                
            }
        }
        cout << endl;
        
    }
}
