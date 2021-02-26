#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for (int i=5; i>0; i--){
		for (int j=-4; j<5; j++){
			if (abs(j) < i) cout << "*";
			else cout << " ";
	}
		cout << endl;
			
	}
		
}

