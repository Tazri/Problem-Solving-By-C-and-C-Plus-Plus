// link : https://codeforces.com/problemset/problem/1497/C1
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
    int n, k;
    cin >> n >> k;

    if (n == 4)
    {
        cout << 2 << " " << 1 << " " << 1 << endl;
        return;
    }

    if (n % 2 == 0)
    {
        if (n % 3 == 0)
        {
            cout << n / 3 << " " << n / 3 << " " << n / 3 << endl;
            return;
        }

        if (n % 8 == 0)
        {
            cout << n / 2 << " " << (n / 2) / 2 << " " << (n / 2) / 2 << endl;
            return;
        }

        if (((n - 2) / 2) % 2 == 0)
        {
            cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2 << endl;
            return;
        }

        cout << 4 << " " << (n - 4) / 2 << " " << (n - 4) / 2 << endl;
    }
    else
        cout << 1 << " " << (n - 1) / 2 << " " << (n - 1) / 2 << endl;
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