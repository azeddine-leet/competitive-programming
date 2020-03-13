#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string f1p1;
	string f2p2;
	string l1p1;
	string l2p2;
	cin >> f1p1 >> l1p1 >> f2p2 >> l2p2;
	(l1p1 == l2p2) ? (cout << "ARE Brothers\n" ):(cout << "NOT\n");
	return (0);
}
