// link : https://codeforces.com/problemset/problem/2067/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

bool isXAll9(int x)
{
    while (x)
    {
        int ld = x % 10;
        x /= 10;

        if (ld != 9)
        {
            return false;
        }
    }

    return true;
}

void program()
{
    int x, y;
    cin >> x >> y;

    int diff = y - x;

    if (diff == 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (isXAll9(x) && y == 1)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 9; i <= 1500; i += 9)
    {
        int d = i - 1;

        if (x - d == y)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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