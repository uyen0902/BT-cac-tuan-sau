#include <iostream>
using namespace std;

struct Point
{
    int x, y;
    Point(){};
    Point(int _x, int _y): x(_x), y(_y){};
};

void print(const Point& t)
{
    cout << "(" << t.x << "," << t.y << ")";
}

int main()
{
    Point u(9,2);
    cout << &u << endl << &u.x << endl << &u.y << endl;
    return 0;
}
/* nhan xet: dia chi cua bien x (bien duoc khai bao truoc trong Point)
co cung dia chi voi bien Point, bien y (bien duoc khai bao sau trong Point)
co dia chi cach 4 bytes( 1 int ) voi bien x. */

