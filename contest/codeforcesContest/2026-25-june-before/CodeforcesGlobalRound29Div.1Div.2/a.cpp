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
    int x, y;
    cin >> x >> y;

    if (x == y)
        cout << -1 << endl;
    else if (x < y)
        cout << 2 << endl;
    else if (1 < y && y < x - 1)
        cout << 3 << endl;
    else
        cout << -1 << endl;
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