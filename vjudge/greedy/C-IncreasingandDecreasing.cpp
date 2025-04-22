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
    int x, y, n;
    cin >> x >> y >> n;

    int d = ((n - 1) * n) / 2;

    if (y - d < x)
    {
        cout << -1 << endl;
        return;
    }

    cout << x;

    int l = n - 2;
    d = (l * (l + 1)) / 2;
    int start = y - d;
    int inc = n - 2;
    for (int i = 0; i < n - 2; i++)
    {
        cout << " " << start;
        start += inc;
        inc--;
    }
    cout << " " << y << endl;
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