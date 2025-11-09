// link : https://codeforces.com/problemset/problem/581/A
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
    int a, b;
    cin >> a >> b;
    int mn = min(a, b);
    int mx = max(a, b);

    int a1 = mn;
    mx -= mn;
    int a2 = mx / 2;

    cout << a1 << " " << a2 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}