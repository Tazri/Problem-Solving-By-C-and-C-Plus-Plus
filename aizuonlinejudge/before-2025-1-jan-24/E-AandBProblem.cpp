// link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A
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
    int a, b;
    cin >> a >> b;

    int divide = a / b;
    int r = a % b;
    double d = (double)a / (double)b;
    fraction();
    cout << divide << " " << r << " " << d << endl;
    return 0;
}