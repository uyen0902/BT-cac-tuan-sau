#include <iostream>
#include <cmath>
using namespace std;

long long DecToBin( int n)
{
	long long nhiPhan = 0;
	int p = 0;
	while(n>0){
		nhiPhan += (n%2)*pow(10,p);
		p++;
		n /= 2;
	}
	return nhiPhan;
}

int BinToDec(long long n)
{
	int p = 0;
	int thapPhan = 0;
	while (n>0){
		thapPhan += (n%10)*pow(2,p);
		p++;
		n /= 10;
	}
	return thapPhan;
	
} 

int main()
{
	int n; 
	cin >> n;
	cout << DecToBin(n) << endl << BinToDec(DecToBin(n));
	return 0;
}
