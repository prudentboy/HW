#include <iostream>

using namespace std;

int main()
{
	int ipt;
	while(cin >> ipt)
	{
		int opt = 0;
		while(ipt)
		{
			++opt;
			ipt = ipt & (ipt - 1);
		}
		cout << opt << endl;
	}
	return 0;
}