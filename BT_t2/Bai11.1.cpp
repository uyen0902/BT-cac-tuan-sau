#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Min, Max, Step_size;
	cin >> Min >> Max >> Step_size;
	for ( int i=Min; i<=Max; i+=Step_size)
	{
		double do_C, do_K;
		do_C = (i*1.0 - 32)*5/9;
		do_K = do_C + 273.15;
		cout << fixed << setprecision(2) << i << "\t" << do_C << "\t" << do_K << endl;
	}
	return 0;
}
