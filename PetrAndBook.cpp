#include <iostream>
#include <stack>
using namespace std;

int main() {
	int number_of_pages;
    int total_covered = 0;
    int pages_covered[7];
    cin >> number_of_pages;
    for(int i=0; i<7; i++)
    {
        cin >> pages_covered[i];
    }
    int i=0;
    while(true)
    {
        total_covered += pages_covered[i%7];
        if(number_of_pages <= total_covered)
            break;
        else i++;
    }
    cout << (i%7)+1;
}
