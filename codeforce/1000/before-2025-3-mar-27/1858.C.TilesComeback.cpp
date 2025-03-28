// https://codeforces.com/problemset/problem/1858/C
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

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int lc = arr[0];
    int rc = arr[n - 1];
    int lcnt = 0;
    int rcnt = 0;
    int l = -1;
    int r = -1;

    if (lc != rc)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == lc)
            {
                lcnt++;
            }

            if (lcnt >= k)
            {
                l = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == rc)
            {
                rcnt++;
            }

            if (rcnt >= k)
            {
                r = i;
                break;
            }
        }

        if (l < 0 || r < 0)
        {
            cout << "NO" << endl;
            return;
        }

        if (l == n - 1 && r == 0)
        {
            cout << "YES" << endl;
            return;
        }

        if (l >= r)
        {
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
        return;
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == lc)
            cnt++;
    }

    if (cnt >= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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