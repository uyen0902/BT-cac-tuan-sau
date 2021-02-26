#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for (int i=0; i<5; i++){
		for (int j=-4; j<5; j++){
			if (abs(j) <= i) cout << "*";
			else cout << " ";
	}
		cout << endl;
			
	}
		
}

