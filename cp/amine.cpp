#include <stdio.h>
#include <algorithm>
#include <strings.h>
using namespace std;
int main()
{
	int n, m, t, *tries, alpha_count[26];
	char *s;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &n, &m);
		for (int i = 0; i < 26; i++)
			alpha_count[i] = 0;
		tries = new int[m];
		s = new char[n + 1];
		scanf("%s", s);
		for (int i = 0; i < m; i++)
			scanf("%d", tries + i);
		sort(tries, tries + m);
		for (int i = 0, j = 0; i < n; i++)
		{
			alpha_count[s[i] - 'a'] += m + 1;
			while ((i + 1) == tries[j] && m > 0)
				m--, j++;
		}
		for (int i = 0; i < 26; i++)
			printf("%d ", alpha_count[i]);
		printf("\n");
	}
}
