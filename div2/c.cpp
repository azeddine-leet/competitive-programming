#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long l;
typedef unsigned long ul;
typedef double d;
typedef long double ld;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define REP(i,s,e) for (int i = s; i <= e; ++i) 
#define RREP(i,s,e) for (int i = s; i >= e; --i)
#define vi vector<int>
#define vl vector<l>
#define vll vector<ll>
#define pi  pair<int,int>
#define F first
#define S second
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}
//#define _IO
int     main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifdef _IO
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int t = 0;
	
	cin >> t;
	while (t--)
	{
		int n, k = 1, i = 1, j, best;
		string s, s1;
		cin >> n;
		cin >> s;
		for (i = 0; i < n; ++i)
		{
			best = 0;
			for (j = 0; j < n ; j++)
			{
				if (s[j + i]  > s[j])
					break;
				else if (s[j + i]  < s[j])
					best = 1;
			}
			if (best)
			{
				s1 = s.substr(i, n) + s.substr(0, i);
				//cout << s1 << endl;
				if (s1 < s)
					k =  i + 1 ;
			}
		}
		cout << s1 << endl;
		cout << k  << endl;
	}
	return 0;
}


