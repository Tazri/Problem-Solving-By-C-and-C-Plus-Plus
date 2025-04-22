// link : https://codeforces.com/problemset/problem/519/B
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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n - 1);
    vector<int> c(n - 2);

    for (int i = 0; i < a.size(); i++)
        cin >> a[i];

    for (int i = 0; i < b.size(); i++)
        cin >> b[i];

    for (int i = 0; i < c.size(); i++)
        cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    // try to match a and b;
    bool f = false;

    for (int i = 0; i < b.size(); i++)
    {
        if (a[i] != b[i])
        {
            f = true;
            cout << a[i] << endl;
            break;
        }
    }

    if (!f)
    {
        cout << a[a.size() - 1] << endl;
    }

    // try to match b and c
    f = false;
    for (int i = 0; i < c.size(); i++)
    {
        if (b[i] != c[i])
        {
            f = true;
            cout << b[i] << endl;
            break;
        }
    }

    if (!f)
    {
        cout << b[b.size() - 1] << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}