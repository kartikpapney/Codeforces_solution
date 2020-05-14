#include <iostream>
using namespace std;
int main()
{
    short int count = 0;
    long int arr[4];
    for(int i=0; i<4; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<4; i++)
    {
        for(int j = 0; j<4-i-1; j++)
        {
            if(arr[j+1] < arr[j])
                swap(arr[j+1], arr[j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        if(arr[i+1] == arr[i])
            count++;
    }
    cout << count;

}
