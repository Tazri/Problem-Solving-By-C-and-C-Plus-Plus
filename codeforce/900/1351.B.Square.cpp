// link : https://codeforces.com/problemset/problem/1351/B
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
    int a1, a2;
    int b1, b2;

    cin >> a1 >> a2;
    cin >> b1 >> b2;
    int amx, amn;
    int bmx, bmn;
    amx = max(a1, a2);
    amn = min(a1, a2);
    bmx = max(b1, b2);
    bmn = min(b1, b2);

    if (amx != bmx)
    {
        cout << "NO" << endl;
        return;
    }

    if (amn + bmn != amx)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}