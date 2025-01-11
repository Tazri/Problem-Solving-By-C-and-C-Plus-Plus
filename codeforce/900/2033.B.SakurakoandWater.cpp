// link : https://codeforces.com/problemset/problem/2033/B
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

void test()
{
    int n;

    cin >> n;

    if (n == 1)
    {
        int ni;
        cin >> ni;

        if (ni >= 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ni * -1 << endl;
        }
        return;
    }

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = vector<int>(n);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    int minNum = 0;

    // main diagnal
    for (int i = 0; i < n; i++)
    {
        minNum = min(minNum, arr[i][i]);
    }

    if (minNum < 0)
    {
        ans += (minNum * -1);
    }

    // now add the upper diagnal
    int d;

    d = n - 1;
    for (int c = 1; c < n; c++)
    {
        minNum = 0;
        // traverse the diagnal
        for (int r = 0; r < d; r++)
        {
            minNum = min(minNum, arr[r][c + r]);
        }

        if (minNum < 0)
        {
            ans += (minNum * -1);
        }
        d--;
    }

    d = n - 1;
    for (int r = 1; r < n; r++)
    {
        minNum = 0;
        // traverse the diagnal
        for (int c = 0; c < d; c++)
        {
            minNum = min(minNum, arr[r + c][c]);
        }

        if (minNum < 0)
        {
            ans += (minNum * -1);
        }
        d--;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}