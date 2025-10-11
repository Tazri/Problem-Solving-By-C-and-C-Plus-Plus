// link : https://codeforces.com/problemset/problem/2034/B
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
    int n, m, k;

    cin >> n >> m >> k;
    vector<bool> arr(n + 1);
    arr[0] = true;

    for (int i = 1; i <= n; i++)
    {
        char ch;
        cin >> ch;
        if (ch == '0')
        {
            arr[i] = false;
        }
        else
        {
            arr[i] = true;
        }
    }

    int op = 0;

    int i = 1;
    while (i <= n)
    {
        if (arr[i])
        {
            i++;
            continue;
        }

        int j = i + m - 1;

        if (j > n)
        {
            break;
        }

        if (arr[j])
        {
            i = j + 1;
            continue;
        }

        bool ok = false;

        for (; i <= j; i++)
        {
            if (arr[i])
            {
                ok = true;
                break;
            }
        }

        if (ok)
        {
            continue;
        }

        // make true from j
        int l = j + k - 1;
        l = min(l, n);

        i = l + 1;
        op++;
    }

    cout << op << endl;
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