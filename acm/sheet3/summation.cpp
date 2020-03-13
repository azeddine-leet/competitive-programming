#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int  nb = 0;
    long long sum = 0, tmp = 0;
    cin >> nb;
    for (int i = 0; i < nb; i++)
    {
        cin >>  tmp;
        sum = sum + tmp;
    }
    cout << abs(sum);
   return (0); 
}
