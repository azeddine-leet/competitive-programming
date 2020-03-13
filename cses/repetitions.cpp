#include <bits/stdc++.h>
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
	
	int max = INT_MIN, l = 0, i = 0;
	string s ;
	cin >> s;
	while(i < s.size())
	{
		char c = s[i];
		int j = i;
		l = 0;
		while (s[j] == c && s[j])
		{
			j++;
			l++;
		}
		if (max < l )
			max = l;
		i += l;
	}
	cout << max ;
	return 0;
}


