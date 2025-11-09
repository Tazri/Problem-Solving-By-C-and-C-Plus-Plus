// link : https://codeforces.com/problemset/problem/1512/A
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
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 3; i <= n; i++)
    {
        if (v[i] == v[i - 1] && v[i - 1] == v[i - 2])
            continue;

        if (v[i] == v[i - 1])
            cout << i - 2 << endl;
        else if (v[i] == v[i - 2])
            cout << i - 1 << endl;
        else
            cout << i << endl;
        return;
    }
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