#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	unsigned int x,y;
	cin >> x >> y;
	for ( int i=min(x,y); i>=1; i--)
	{
		if(x%i==0 && y%i==0){
			cout << i;
	 		break;
		}
		
	}
	return 0;
}
