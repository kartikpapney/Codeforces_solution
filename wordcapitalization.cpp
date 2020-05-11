#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	if(str[0] > 96 && str[0] < 123)
		str[0]-=32;
	cout << str << endl;
}
