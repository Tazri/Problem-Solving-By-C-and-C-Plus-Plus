// link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415
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

void program(int n, int q, int caseno)
{
    cout << "CASE# " << caseno << ":" << endl;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);

        if (it == v.end())
        {
            cout << x << " not found" << endl;
            continue;
        }

        if (x != *it)
        {
            cout << x << " not found" << endl;
            continue;
        }

        int pos = (it - v.begin()) + 1;

        cout << x << " found at " << pos << endl;
    }
}

int32_t main()
{
    optimize();
    int n, q;
    int t = 1;
    while (true)
    {
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;
        program(n, q, t);
        t++;
    }
    return 0;
}