#include <iostream>

using namespace std;

int main()
{
	int n, count = 1, S=0;
	cout << "Diem mon hoc " << count << ": ";
	cin >> n; 
	while (n>=0)
	{
		if (n>=0 && n<=10)
		{
			S += n;
			count ++;
			cout << "Diem mon hoc " << count << ": ";
			cin >> n;
		} else
		{
			cout << "Nhap lai diem mon hoc" << count << "(trong khoang tu 0...10): ";
			cin >> n;
		}
		
	}
	count --;
	cout << "So mon hoc: " << count << endl;
	cout << "Diem TB cua " << count << " mon hoc: " << S*1.0/count;
	return 0;
}

