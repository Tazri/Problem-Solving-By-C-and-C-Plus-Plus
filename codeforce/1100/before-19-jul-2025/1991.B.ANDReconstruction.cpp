// link : https://codeforces.com/problemset/problem/1991/B
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

int count(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n >>= 1;
    }

    return cnt;
}

void program()
{
    int n;
    cin >> n;
    vector<int> b(n);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }

    vector<int> a(n);

    for (int i = n - 2; i >= 0; i--)
    {
        int bi = b[i];
        int ni = a[i + 1];
        int cnt = count(bi);

        int m = 1;

        for (int t = 0; t < cnt; t++, m <<= 1)
        {
            int bit = b[i] & m;

            if (bit == 0)
                continue;

            a[i] |= m;
            a[i + 1] |= m;
        }
    }

    // check
    for (int i = 0; i < n - 1; i++)
    {
        int bi = a[i] & a[i + 1];

        if (bi != b[i])
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << a[0];
    for (int i = 1; i < n; i++)
        cout << " " << a[i];
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