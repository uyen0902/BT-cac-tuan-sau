#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int tmp;
	int s=0;
	tmp = n;
	while (tmp != 0){
		s += tmp % 10;
		tmp /= 10;
	}
	cout << s;
	return 0;
}
