// link : https://codeforces.com/problemset/problem/1669/C
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

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 2; i < n; i += 2)
        if (v[i] % 2 != v[i - 2] % 2)
        {
            cout << "NO" << endl;
            return;
        }

    for (int i = 3; i < n; i += 2)
        if (v[i] % 2 != v[i - 2] % 2)
        {
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;
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