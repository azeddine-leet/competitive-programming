#include <iostream>
using namespace std;
int	main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i ++)
	{	
		string str;
		cin >> str;
		int j = 0, ret = 0, ones = 0, zeros = 0;
		for (int k = 0; k < str.size(); k++)
		{
			if (str[k] == '0')
				zeros++;
			else if (str[k] == '1')
				ones++;
		}
		while (str[j] == '0' && j < str.size())
			j++;
		while (j < str.size())
		{
			if (str[j] == '0')
				ret++;
			else if (str[j] == '1')
				ones --;
			if (ones == 0)
				break ;
			j++;
		}
		cout << ret << endl;
	}
	return 0;
}