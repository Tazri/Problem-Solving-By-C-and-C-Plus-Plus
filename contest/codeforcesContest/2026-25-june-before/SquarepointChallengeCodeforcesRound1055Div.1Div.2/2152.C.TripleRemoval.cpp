// link : https://codeforces.com/contest/2152/problem/C
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

struct Query
{
    int i, left, right;
    bool hasDouble = false;
};

void program()
{
    int n, k;
    cin >> n >> k;
    vector<int> one(n + 1);
    vector<int> zero(n + 1);
    vector<int> v(n + 1);
    vector<int> ans(k + 1);
    multiset<int> mt;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i])
            one[i]++;
        else
            zero[i]++;

        if (i != 0)
        {
            one[i] += one[i - 1];
            zero[i] += zero[i - 1];
        }

        if (i > 1)
        {
            if (v[i] == v[i - 1])
                mt.insert(i - 1);
        }
    }

    while (k--)
    {
        int l, r;
        cin >> l >> r;

        int cntZero = zero[r] - zero[l - 1];
        int cntOne = one[r] - one[l - 1];

        if (cntOne % 3 != 0 || cntZero % 3 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        int can = (cntZero / 3) + (cntOne / 3);

        auto it = mt.lower_bound(l);

        if (it == mt.end())
        {
            cout << can + 1 << endl;
            continue;
        }
        // cout << "l : " << l << " r : " << r << endl;
        // cout << "it : " << *it << endl;

        int lt = *it;
        int rt = lt + 1;
        if (l <= lt && rt <= r)
            cout << can << endl;
        else
            cout << can + 1 << endl;
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