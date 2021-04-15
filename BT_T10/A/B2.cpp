#include <iostream>
using namespace std;

struct Point
{
    int x, y;
    Point(){};
    Point(int _x, int _y): x(_x), y(_y){};
};

void print_1(const Point& t)
{
    cout << "(" << t.x << "," << t.y << ")" << endl;;
    cout << &t << endl;
}

void print_2(const Point t)
{
    cout << "(" << t.x << "," << t.y << ")" << endl;;
    cout << &t << endl;
}

int main()
{
    Point u(9,2);
    cout << "Dia chi cua u: " << &u << endl;
    print_1(u);
    cout << endl;
    print_2(u);
    return 0;
}

