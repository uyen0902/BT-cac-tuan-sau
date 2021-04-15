#include <iostream>
using namespace std;

struct Point
{
    double x, y;
    Point(){};
    Point(double _x, double _y): x(_x), y(_y){};
};

void print(const Point& t)
{
    cout << "(" << t.x << "," << t.y << ")";
}

Point mid_point(const Point& m, const Point& n)
{
    Point mid;
    mid.x = (m.x+n.x)/2;
    mid.y = (m.y+n.y)/2;
    return mid;
}

int main()
{
    Point u(9,2);
    Point v(29,92);
    Point w = mid_point(u,v);
    print(w);
    return 0;
}
