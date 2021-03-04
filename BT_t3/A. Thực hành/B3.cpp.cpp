#include <iostream>
using namespace std;

const int row = 2;
const int column = 12;

void in_mang(char daytab[][column])
{
	for (int i=0; i<2; i++){
		for (int j=0; j<12; j++){
			cout << daytab[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	char daytab[2][12] = {
		{31,28,31,30,31,30,31,31,30,31},
  		{31,29,31,30,31,30,31,31,30,31}
	};
	in_mang(daytab);
	
	char daytab1[2][12] = {
		31,28,31,30,31,30,31,31,30,31,30,31,
		31,29,31,30,31,30,31,31,30,31,30,31
	};
	in_mang(daytab1);
	
	return 0;
	
	// char khong in ra ket qua nhu tren, de int thi in ra duoc ket qua dung
}
