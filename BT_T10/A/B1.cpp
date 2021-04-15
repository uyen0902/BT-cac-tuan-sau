#include <iostream>
using namespace std;

struct Point
{
    int x, y;
    Point(){};
    Point(int _x, int _y): x(_x), y(_y){};
};

void print(Point t)
{
    cout << "(" << t.x << "," << t.y << ")";
}

int main()
{
    Point u(9,2);
    print(u);
    return 0;
}
