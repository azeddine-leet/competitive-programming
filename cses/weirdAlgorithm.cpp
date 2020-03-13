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
long long n;
cin >> n;
while (n >= 1)
{
	cout << n ;
	if (n == 1)
		break;
	if (n % 2)
		n = n * 3 + 1;
	else 
		n = n / 2;
	cout << ' ';
}
	return 0;
}


