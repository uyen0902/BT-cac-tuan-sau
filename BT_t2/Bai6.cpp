  
# include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count=1;
    for (int i=0; i<n; i++)
    {
        for (int j=count; j<=n; j++)
            cout << j << " ";
        for (int k=1; k<count; k++)
            cout << k << " ";
        count++;
        cout << endl;
    }
    return 0;
}
