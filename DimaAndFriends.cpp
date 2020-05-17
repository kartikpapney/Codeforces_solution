#include <iostream>
using namespace std;
int main()
{
    int number_of_friends, fingers, sum=0, caught=0;
    cin >> number_of_friends;
    for(int i=0; i<number_of_friends; i++)
    {
        cin >> fingers;
        sum+=fingers;
    }
    cout << 5 - (sum+4)/(number_of_friends+1) + (sum-1)/(number_of_friends+1); 
}
