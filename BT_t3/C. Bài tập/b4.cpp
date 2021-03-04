#include <iostream>
using namespace std;

int C(int x, int y)
{
	if(x == 0 || x == y ) return true;
	if (x == 1) return y;
	return C(x-1, y-1) + C(x, y-1);
}
int main()
{
	int n;
	cin >> n;
	for (int i=0; i<n; i++){
		for (int j=0; j<=i; j++){
			cout << C(j,i) << " ";
		}
		cout << endl;
	}
	return 0;
}
