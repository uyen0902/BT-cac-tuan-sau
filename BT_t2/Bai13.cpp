# include <iostream>
# include <cmath>
bool check_nguyenTo(int n)
{
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0) return false;
    return true;
}
bool check_chinhPhuong(int n)
{
    int a = sqrt(n);
    if(a*a==n) return true;
    return false;
}
bool check_hoanHao(int n)
{
    int s=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0) s += i;
    }
    if(s== n) return true;
    return false;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
	
	cout << "Day so nguyen to tu 2 den " << n << ": "<< endl;;
    for (int i=2; i<=n; i++)
        if (check_nguyenTo(i)) cout << i << " ";

    cout << endl << "Day so chinh phuong tu 2 den " << n << ": " << endl;
    for (int i=2; i<=n; i++)
        if (check_chinhPhuong(i)) cout << i << " ";

    
    cout << endl <<  "Day so hoan hao tu 2 den " << n << ": " << endl;
    for (int i=2; i<=n; i++)
        if (check_hoanHao(i)) cout << i << " ";

    return 0;
}
