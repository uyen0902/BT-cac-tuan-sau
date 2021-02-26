# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
    int n;
    double TD = 0, THS = 0;
    cout << "Tong so mon hoc can tinh DTB: ";
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        double D, HS;
        cout << "Diem mon hoc " << i << ": ";
        cin >> D;
        if (D<0 || D>10)
        {
            cout << "Nhap lai diem mon hoc " << i << "(trong khoang tu 0,0...10,0): ";
            cin >> D;
        }
        cout << "He so mon hoc " << i << ": ";
        cin >> HS ;
        TD += D*HS;
        THS += HS;
    }
    cout << "====================\n";
    cout << "Tong so he so: " << THS << endl;
    cout << fixed << setprecision(2) << "Diem trung binh cua " << n << " mon hoc: " << TD/THS;
    return 0;
}
