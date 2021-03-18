#include <iostream>
#include <cmath>
using namespace std;

int lam_tron_1(double x)
{
	double du = x - int(x);
	if(du < 5) x = floor(x);
	else x = ceil(x);
	return x;
} 

int lam_tron_2(double x)
{
	double du = x - int(x);
	if(du < 5) x = int(x);
	else x = int(x) + 1 ;
	return x;
}

int main()
{
	double x;
	cin >> x;
	cout << lam_tron_1(x) << endl << lam_tron_2(x) ;
	return 0;
}
