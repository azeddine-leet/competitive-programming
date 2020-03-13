#include <iostream>
#define LL long long
#define endl "\n"

using namespace std ;

int main( void )
{

#ifndef ONLINE_JUDGE
	freopen( "input.txt" , "r" , stdin ) ;
	freopen( "output.txt" , "w" , stdout ) ;
#endif // ONLINE_JUDGE

	ios_base::sync_with_stdio( false ) ;

	cin.tie( NULL ) ;

	cout.tie( NULL ) ;  

	int t ;

	cin >> t ;

	while( t-- )  {

		int n ;

		cin >> n ;

		int zero = 0 , one = 0 , minus_one = 0 , others = 0 ;

		int x ;

		while( n-- )  {

			cin >> x ;

			if( x == 0 )  zero++ ;

			else if( x == 1 )  one++ ;

			else if( x == -1 )  minus_one++ ;

			else  others++ ;

		}

		bool flag = true ;

		if( ( others > 1 ) || ( minus_one != 0 && others != 0 ) || ( one == 0 && minus_one > 1 ) )  {

			flag = false ;  

		}

		if( flag == true )  cout << "yes" << endl ;

		else  cout << "no" << endl ;  

	}

	return 0 ;

}

