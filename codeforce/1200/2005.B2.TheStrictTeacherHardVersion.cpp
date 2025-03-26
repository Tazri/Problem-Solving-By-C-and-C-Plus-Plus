// link : https://codeforces.com/problemset/problem/2005/B2
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
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> tech(m);
    vector<int> query(q);

    for (int i = 0; i < m; i++)
    {
        cin >> tech[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> query[i];
    }

    sort(tech.begin(), tech.end(), [](int a, int b)
         { return a < b; });

    for (int d : query)
    {
        int left = 0;
        int right = m - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (d < tech[mid])
            {
                right = mid - 1;
            }
            else if (d > tech[mid])
            {
                left = mid + 1;
            }
            else
            {
                break;
            }
        }

        // int l = tech[l];
        // int r = tech[r];
        // cout << "left : " << l << endl;
        // cout << "right : " << r << endl;
        int pi = right;
        int ni = left;

        if (pi >= 0 && ni < m)
        {
            int prev = tech[pi];
            int next = tech[ni];

            int mid = (prev + next) / 2;

            int t1 = mid - prev;
            int t2 = next - mid;

            cout << min(t1, t2) << endl;
            continue;
        }

        if (pi < 0)
        {
            cout << tech[0] - 1 << endl;
            continue;
        }

        if (ni >= m)
        {
            cout << n - tech[m - 1] << endl;
            continue;
        }

        // cout << "d : " << d << endl;
        // cout << "pi : " << pi << endl;
        // cout << "ni : " << ni << endl;
        // cout << "........" << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
}

/**
 4 2 2
1 3
4 2

4 2 2
2 3
4 1
 */