#include <iostream>
using namespace std;

bool KT_doi_xung(const string &s, const string &x)
{
	for (int i=0; i< s.size()/2; i++){
		if(s[i] == x[s.size()-i-1]) return true;
	}
	return false;
}

int main()
{
	int n; 
	cin >> n;
	string password[100];
	for (int i=0; i<n; i++)
	cin >> password[i];
	
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (KT_doi_xung(password[i], password[j])){
				int l = password[i].size();
				cout << password[i].size() << " " << password[i][l/2];
			}
		}
	}
	return 0;
}
