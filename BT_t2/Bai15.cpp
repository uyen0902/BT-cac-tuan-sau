  
# include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n1=1, n2=1;
    cout << n1 << " " << n2 << " ";
    while (n1+n2 <= n)
    {
        n1 += n2;
        cout << n1 << " ";
        if(n1+n2 <= n)
        {
            n2 += n1;
            cout << n2 << " " ;
        }
    }
    if(n==n1 || n==n2) cout << endl << "yes";
    else cout << endl << "no";
    return 0;
}
