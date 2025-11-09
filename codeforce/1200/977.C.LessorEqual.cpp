// link: https://codeforces.com/problemset/problem/977/C
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    sort(v.begin(), v.end());

    if (k == 0)
    {
        if (v[0] == 1)
            cout << -1 << endl;
        else
            cout << 1 << endl;
        return;
    }

    int x = v[k - 1];

    if (k < v.size() && v[k] == x)
    {
        cout << -1 << endl;
        return;
    }
    cout << x << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}