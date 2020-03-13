#include <iostream>
using namespace std;
int     main()
{
    int n = 0, tmp = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {   
        cin >> tmp;
        if (tmp < 0)
            cout <<  2;
        else if (tmp > 0)
            cout << 1;
        else if (tmp == 0)
            cout << tmp;
        if (i < n)
            cout << ' ';
        else 
            cout << endl;
    }
    return (0);   
}