// link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

int main()
{
    optimize();
    fraction();
    const double PI = 3.141592653589793;
    double r;
    cin >> r;

    double area = PI * r * r;
    double peri = 2 * PI * r;
    cout << area << " " << peri << endl;
    return 0;
}