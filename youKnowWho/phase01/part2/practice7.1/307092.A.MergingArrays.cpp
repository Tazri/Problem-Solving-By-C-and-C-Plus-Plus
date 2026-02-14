// link:  https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
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
    vector<int> v;
    v.reserve(n + m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int ai = 0;
    int bi = 0;

    while (ai < n || bi < m)
        if (ai < n && bi < m)
            if (a[ai] <= b[bi])
                v.push_back(a[ai++]);
            else
                v.push_back(b[bi++]);
        else if (ai < n)
            v.push_back(a[ai++]);
        else
            v.push_back(b[bi++]);

    for (int i = 0; i < n + m; i++)
        cout << v[i] << " \n"[i == n + m - 1];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}