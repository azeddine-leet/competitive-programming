#include <bits/stdc++.h>
using namespace std;
int main()
{
	int w;
	cin >> w;
	w % 2 == 0 && w / 2 >= 2 ? cout << "YES" : cout << "NO";
	return 0;
}