#include<iostream>
#include<string>

using namespace std;
void ReverseStr(string &str, int begin, int end)
{
	char tmp;
	while(begin < end)
	{
		tmp = str[begin];
		str[begin] = str[end];
		str[end] = tmp;
		++begin;
		--end;
	}
}
int main()
{
	string ipt;
	while(getline(cin, ipt))
	{
		ReverseStr(ipt, 0, ipt.size() - 1);
		int begin = 0, end = 0, i = 0;
		while(i != ipt.size())
		{
			if(ipt[i] == ' ')
			{
				end = i - 1;
				ReverseStr(ipt, begin, end);
				begin = i + 1;
			}
			++i;
		}
		end = i - 1;
		ReverseStr(ipt, begin, end);
		cout << ipt << endl;
	}
	return 0;
}