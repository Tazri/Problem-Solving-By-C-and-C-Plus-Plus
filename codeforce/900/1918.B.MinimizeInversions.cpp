// link: https://codeforces.com/problemset/problem/1918/B
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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> mp(n + 1);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        int ai = a[i];
        int bi = b[i];
        mp[ai] = bi;
    }

    // sort a
    sort(a.begin(), a.end(), [](int a, int b)
         { return a < b; });

    for (int i = 0; i < n; i++)
    {
        b[i] = mp[a[i]];
    }

    // print a
    cout << a[0];
    for (int i = 1; i < n; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;

    cout << b[0];
    for (int i = 1; i < n; i++)
    {
        cout << " " << b[i];
    }
    cout << endl;
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