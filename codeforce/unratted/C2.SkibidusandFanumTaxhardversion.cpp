// link : https://codeforces.com/problemset/problem/2065/C2
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
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(b.begin(), b.end(), [](int a, int b)
         { return a < b; });

    a[n - 1] = max(a[n - 1], b[m - 1] - a[n - 1]);

    int i = n - 2;
    while (i >= 0)
    {
        int mx = a[i + 1] + a[i];
        int bj;
        int left = 0;
        int right = m - 1;
        int isFound = false;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (b[mid] > mx)
            {
                right = mid - 1;
                continue;
            }

            isFound = true;
            bj = b[mid];
            left = mid + 1;
        }

        if (isFound)
        {
            if (a[i] > a[i + 1])
            {

                a[i] = bj - a[i];
            }
            else
            {
                a[i] = max(a[i], bj - a[i]);
            }
        }
        else
        {
            if (a[i] <= a[i + 1])
            {
                i--;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }

        i--;
    }

    cout << "YES" << endl;
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
4 4
2 3 1 10
1 2 9 12

0 6 8 10
*/