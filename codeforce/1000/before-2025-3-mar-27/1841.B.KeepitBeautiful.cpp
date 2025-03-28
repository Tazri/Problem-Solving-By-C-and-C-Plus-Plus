// link : https://codeforces.com/problemset/problem/1841/B
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

void printOne(int n)
{
    for (int i = 0; i < n; i++)
        cout << 1;
    cout << endl;
}

void program()
{
    int n;
    cin >> n;

    vector<int> q(n);
    vector<bool> ans(n, 0);

    for (int i = 0; i < n; i++)
        cin >> q[i];

    bool isSorted = true;
    int mn = -1;
    int mi = -1;
    ans[0] = 1;
    int prev = q[0];
    for (int i = 1; i < n; i++)
    {
        if (prev <= q[i])
        {
            ans[i] = 1;
            prev = q[i];
            continue;
        }

        isSorted = false;
        if (q[0] < q[i])
        {
            ans[i] = 0;
            continue;
        }
        mn = q[i];
        mi = i;
        ans[i] = 1;
        break;
    }

    if (mi >= 0)
    {
        for (int i = mi; i < n; i++)
        {
            if (q[i] <= q[0] && q[i] >= mn)
            {
                ans[i] = 1;
                mn = q[i];
            }
            else
            {
                ans[i] = 0;
            }
        }
    }

    if (isSorted)
    {
        printOne(n);
        return;
    }

    for (int i = 0; i < n; i++)
        cout
            << ans[i];
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

/*
19
0 4 15 18 4 10 12 8 13 8 15 0 14 12 10 12 10 14 13

1111011010110000000

1111000000010000000

16
20 0 16 8 7 15 18 17 9 12 20 4 14 5 17 18
1100000000000000
1110001000100000
*/