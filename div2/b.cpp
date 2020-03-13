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
	
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long  n, g, b;
		cin >> n >> g >> b ; 
		long long un, nb, ng;
		if (g >= n)
			{(cout << n << '\n');
			continue ;}
		un = (n % 2 == 0) ? n/2 : n/2 + 1;
		ng = g * (un/g);
		nb = (g + b) * (n - un);
		cout << ng + nb << '\n';		
	}

    return 0;
}
