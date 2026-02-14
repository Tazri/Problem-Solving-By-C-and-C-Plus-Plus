// link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
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

    for (int &ai : a)
        cin >> ai;
    for (int &bi : b)
        cin >> bi;

    int ai = 0;
    int bi = 0;

    vector<int> ans;
    ans.reserve(m);
    while (ai < n || bi < m)
        if (ai < n && bi < m)
        {
            if (a[ai] < b[bi])
                ai++;
            else
            {
                ans.push_back(ai);
                bi++;
            }
        }
        else if (ai < n)
            ai++;
        else
        {
            ans.push_back(n);
            bi++;
        }

    for (int i = 0; i < m; i++)
        cout << ans[i] << " \n"[i == m - 1];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}