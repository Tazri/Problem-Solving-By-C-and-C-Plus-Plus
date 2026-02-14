// link  : https://codeforces.com/problemset/problem/567/A
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
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    for (int i = 0; i < n; i++)
    {
        int l = max(abs(v[i] - v.back()), abs(v[i] - v.front()));

        int sh;

        if (i > 0 && i < n - 1)
            sh = min(abs(v[i] - v[i + 1]), abs(v[i] - v[i - 1]));
        else if (i == 0)
            sh = abs(v[i] - v[i + 1]);
        else
            sh = abs(v[i] - v[i - 1]);
        cout << sh << " " << l << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}