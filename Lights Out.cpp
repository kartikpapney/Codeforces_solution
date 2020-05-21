#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int sum = 1;
            sum+=matrix[i][j];
            if(i>0)
            {
                sum+=matrix[i-1][j];
            }
            if(i<2)
            {
                sum+=matrix[i+1][j];
            }
            if(j>0)
            {
                sum+=matrix[i][j-1];
            }
            if(j<2)
            {
                sum+=matrix[i][j+1];
            }
            if(sum%2==0)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
        cout << endl;
    }
}
