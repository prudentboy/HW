#include <iostream>
using namespace std;
int main()
{
	int ipt;
	bool hash[10];
	while(cin >> ipt)
	{
		for(int i = 0; i < 10; ++i)
			hash[i] = true;
		int opt = 0;
		while(ipt)
		{
			if(hash[ipt % 10])
			{
				opt *= 10;
				opt += (ipt % 10);
				hash[ipt % 10] = false;
			}
			ipt /= 10;
		}
		cout << opt <<endl;
	}
	return 0;
}