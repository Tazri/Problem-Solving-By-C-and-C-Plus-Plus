// linK:  https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
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

bool isPossible(vector<int> &v, string t, string &p, int n)
{

    for (int i = 0; i <= n; i++)
    {
        t[v[i]] = '_';
    }

    int pi = 0;
    int ti = 0;
    while (pi < p.size() && ti < t.size())
    {
        if (t[ti] == p[pi])
        {
            pi++;
            ti++;
        }
        else
        {
            ti++;
        }
    }

    return pi >= p.size();
}

void program()
{
    string t, p;
    cin >> t >> p;
    int n = t.size();
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }

    int l = 0;
    int r = n - 1;
    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (isPossible(v, t, p, mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans + 1 << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}