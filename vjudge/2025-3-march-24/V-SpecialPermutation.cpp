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
    int n, a, b;
    cin >> n >> a >> b;
    int h = (n / 2) - 1;
    int lc = n - a; // left can
    int rc = n - (n - b) - 1;

    if (a < b)
    {
        lc--;
        rc--;
    }

    if (lc < h || rc < h)
    {
        cout << -1 << endl;
        return;
    }

    cout << a;
    int p = n;
    for (int i = 0; i < h; i++)
    {
        if (p == b)
        {
            i--;
            p--;
            continue;
        }
        cout << " " << p;
        p--;
    }

    cout << " " << b;
    p = 1;
    for (int i = 0; i < h; i++)
    {
        if (p == a)
        {
            i--;
            p++;
            continue;
        }
        cout << " " << p;
        p++;
    }
    cout << endl;
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