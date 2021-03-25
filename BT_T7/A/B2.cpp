#include <iostream>
using namespace std;

void f1(int a[])
{
    cout << sizeof(a)/sizeof(int) << endl;
}

void f2(int a[100])
{
    cout << sizeof(a)/sizeof(int) << endl;
}

int main()
{
    int a[45];
    cout < "Kich thuoc cua mang a la: " << sizeof(a)/sizeof(int) << endl;
    f1(a);
    f2(a);
    return 0;
}
