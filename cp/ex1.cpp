#include <bits/stdc++.h>
using namespace std;
// types
typedef long long ll;
typedef unsigned long long ull;
typedef long l;
typedef unsigned long ul;
typedef double d;
typedef long double ld;
// loops
#define rep(i,n) for (int i = 0; i < n; ++i)
#define repr(i,n) for (int i = n; i >= 0; --i)
#define REP(i,k,n) for (int i = k; i < n; ++i) 
#define REPR(i,k,n) for (int i = k; i > n; --i)
// exp
#define vi vector<int>
#define vl vector<l>
#define vll vector<ll>
template <typename T>
void read (T &num)
{
    bool            neg;
    register int    c;
    num = 0;
    c = getchar();
    if (c == '-')neg = true,c = getchar();
    for (; c >= '0' && c <= '9'; c= getchar())num = num * 10 + c - '0';
    if (neg)num *= -1;
}
void read (int &num)
{
    bool            neg;
    int c;
    num = 0;
    c = getchar();
    if (c == '-')neg = true,c = getchar();
    for (; c >= '0' && c <= '9'; c= getchar())num = num * 10 + c - '0';
    if (neg)num *= -1;
}
int     main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	string s;
	int n = 0, minus = 0, plus = 0;
	cin >> n;
	cin >> s;
	for (int i = 0; i < s.length(); i ++)
	{
		if (s[i] == 'L')
			minus ++;
		else if (s[i] == 'R')
			plus ++;		
	}
	cout << (plus + minus + 1) ;
    return 0;
}