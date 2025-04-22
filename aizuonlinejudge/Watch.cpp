// link : https://onlinejudge.u-aizu.ac.jp/problems/ITP1_1_D
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

void program()
{
    int s, m, h;
    cin >> s;

    m = s / 60;
    s = s % 60;

    h = m / 60;
    m = m % 60;

    cout << h << ":" << m << ":" << s << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}