#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double a;
	cin >> a;
	double max = a, min =a;
	for (int i=1; i<=n-1; i++)
	{
		cin >> a;
		if(a>max) max=a;
		if(a<min) min=a;
	}
	cout << "max: " << max << "," << " min: " << min;
	return 0;
}

