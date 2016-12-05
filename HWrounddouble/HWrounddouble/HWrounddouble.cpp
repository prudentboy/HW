#include <iostream>

using namespace std;

int main()
{
	double ipt;
	while(cin >> ipt)
	{
		if(ipt - (int)ipt < 0.5)
			cout << (int)ipt;
		else
			cout << (int)ipt + 1;
		cout << endl;
	}
	return 0;
}