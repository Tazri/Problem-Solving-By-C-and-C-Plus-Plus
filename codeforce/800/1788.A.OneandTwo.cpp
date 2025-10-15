// link : https://codeforces.com/problemset/problem/1788/A
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
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        if (v[i] == 2)
            cnt++;
    }

    if (cnt == 0)
    {
        cout << 1 << endl;
        return;
    }

    if (cnt & 1)
    {
        cout << -1 << endl;
        return;
    }

    int left = 0;

    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 2)
            left++;

        int rest = cnt - left;
        if (left == rest)
        {
            cout << i << endl;
            return;
        }
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