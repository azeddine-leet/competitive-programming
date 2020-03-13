#include <iostream>
#include <cmath>
using namespace std;
int		main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		//********** change type to long long **********
		long long num;
		//********* initialize arrays **********
		int base[32] = {0}, base1[32] = {0};
		cin >> num;
		int j = 0;
		while (num > 0){
			base[j] = num%2;
			num=num/2;
			j++;
		}
		int lop = 0;
		int l = 0;
		while(lop<32){

			if(base[lop]==1){
				base1[l]=1;
				l++;
			}
			lop++;
		}
		int dec=0;
		for(int k=0;k<l;k++){
			dec= dec+pow(2,k);

		}
		cout<<dec<<endl;
	}
	return 0;
}

