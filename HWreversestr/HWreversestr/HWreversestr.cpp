#include <iostream>
#include <string>
using namespace std;
int main()
{
	string ipt;
	while(getline(cin,ipt))
	{
		for(int i = ipt.size() - 1; i >= 0; --i)
			cout << ipt[i];
		cout<<endl;
	}
	return 0;
}