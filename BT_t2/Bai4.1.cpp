#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	unsigned int x,y;
	cin >> x >> y;
	for ( int i=max(x,y); i<=x*y; i++)
	{
		if(i%x==0 && i%y==0){
			cout << i;
	 		break;
		}
		
	}
	return 0;
}
