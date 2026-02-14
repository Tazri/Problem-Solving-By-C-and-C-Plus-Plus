// link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
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

#define int ll

struct DS
{
    multiset<int> mt;

    void insert(int n)
    {
        mt.insert(n);
    }

    void erase(int a)
    {
        if (mt.find(a) != mt.end())
            mt.erase(mt.find(a));
    }

    int getDiff()
    {
        return abs((*mt.rbegin()) - (*mt.begin()));
    }
};

void program()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0;
    int r = 0;

    DS ds;
    int cnt = 0;

    while (l < n)
    {
        while (r == 0 || (r < n && ds.getDiff() <= k))
        {
            ds.insert(v[r]);
            r++;
        }
        int right = r - 1;
        int left = l;
        int len;

        if (ds.getDiff() <= k)
        {
            len = right - left + 1;
        }
        else
        {
            len = (right - 1) - left + 1;
        }
        cnt += len;
        ds.erase(v[l]);
        l++;
    }
    cout << cnt << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}