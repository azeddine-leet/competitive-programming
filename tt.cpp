#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	string w;
	string decor;
	int outer;
	cin >> w >> decor >> outer; cin.ignore();
	for(int i = 0; i< outer; i++)
	{
		for (int j = 0; j < ((outer*2) + w.length()+ 2); j++)
			cout << decor;
		cout << endl;
	}
	for (int i = 0; i < outer; i++)
		cout << decor ;
	cout << " " << w << " ";
	for (int i = 0; i < outer; i++)
		cout << decor ;
	cout << endl;
	for(int i = 0; i< outer; i++)
	{
		for (int j = 0; j < ((outer*2) + w.length()+ 2); j++)
			cout << decor;
		cout << endl;
	}
}
