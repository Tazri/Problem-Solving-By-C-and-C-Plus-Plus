// link: https://codeforces.com/problemset/problem/500/A
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
    int n, t;
    cin >> n >> t;
    vector<int> v(n + 1, 0);

    for (int i = 1; i < n; i++)
        cin >> v[i];

    int i = 1;
    while (i <= n)
    {
        if (i == t)
        {
            cout << "YES" << endl;
            return;
        }

        i = i + v[i];
        if (i == t)
        {
            cout << "YES" << endl;
            return;
        }
        if (i == n)
            break;
    }

    cout << "NO" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}