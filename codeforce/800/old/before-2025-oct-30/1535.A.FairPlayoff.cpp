// link : https://codeforces.com/problemset/problem/1535/A
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
    vector<int> v(4);

    for (int i = 0; i < 4; i++)
        cin >> v[i];

    vector<int> t(2);

    t[0] = max(v[0], v[1]);
    t[1] = max(v[2], v[3]);
    sort(v.rbegin(), v.rend());
    sort(t.rbegin(), t.rend());

    for (int i = 0; i < 2; i++)
    {
        if (t[i] != v[i])
        {
            cout << "NO" << endl;
            return;
        }
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