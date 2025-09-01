// link : https://toph.co/p/coloring
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction(v)               \
    cout.unsetf(ios::floatfield); \
    cout.precision(v);            \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    double p;
    cin >> p;
    double pi = acos(-1);
    double a = p / 3;
    double area = (sqrt(3) / 4) * (a * a);
    double side = (2 * sqrt(3) * a) - (3 * a);
    double r = side / 2;
    double circle_area = pi * r * r;

    cout << area - circle_area << endl;
}

int main()
{
    optimize();
    fraction(10);
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}