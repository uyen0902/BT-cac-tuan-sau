#include <iostream>
using namespace std;

void in(int dau_cach, int dau_sao)
{
	for (int i = 0; i < dau_cach; i++) 
		cout << " ";
	for (int i = 0; i < dau_sao; i++)
		cout << "*";	 
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		in(n-i-1, i*2+1);
		cout << endl;
	}
	return 0;
}
