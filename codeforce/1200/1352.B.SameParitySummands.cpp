// link : https://codeforces.com/problemset/problem/1352/B
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

    if (n < k)
    {
        cout << "NO" << endl;
        return;
    }

    // try every one
    int left = n - (k - 1);

    if (left <= 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (left & 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++)
        {
            cout << 1 << " ";
        }
        cout << left << endl;
        return;
    }

    // try two
    left = n - (2 * (k - 1));

    if (left & 1 || left <= 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (int i = 0; i < k - 1; i++)
    {
        cout << 2 << " ";
    }
    cout << left << endl;
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