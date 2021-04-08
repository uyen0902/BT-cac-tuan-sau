#include <iostream>
using namespace std;

void f(int xval)
{
    int x;
    x = xval;
    // in địa chỉ của x tại đây
    cout << "Dia chi cua x la: " << &x << endl;
}

void g(int yval){
    int y;
    // in địa chỉ của y tại đây
    cout << "Dia chi cua y la: " << &y << endl;
}

int main()
{
    f(7);
    g(11);
    return 0;
}
/* Nhan xet: dia chi cua x trong ham f va y trong ham g giong nhau
vi f va g deu co cung 1 kieu tra ve, cung kieu bien int la bien dia phuong dau tien
trong moi ham. */

