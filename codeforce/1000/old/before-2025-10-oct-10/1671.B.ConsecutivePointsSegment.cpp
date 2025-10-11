// link : https://codeforces.com/problemset/problem/1671/B
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
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    int th = 0;
    int tw = 0;

    for (int i = 1; i < n; i++)
    {
        int d = arr[i] - arr[i - 1];

        if (d > 3)
        {
            cout << "NO" << endl;
            return;
        }

        if (d == 3)
            th++;

        if (d == 2)
            tw++;

        if (th > 1)
        {
            cout << "NO" << endl;
            return;
        }

        if (tw > 2)
        {
            cout << "NO" << endl;
            return;
        }

        if (th == 1 && tw > 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    return;
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