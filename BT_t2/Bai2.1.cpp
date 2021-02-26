#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	int y;
	int s=1;
	cin >> x >> y;
	for (int i=0; i<y; i++)
		s*=x ;
	cout << s << endl;
	cout << pow(x,y);
	return 0;
}
