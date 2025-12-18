// link : https://codeforces.com/problemset/problem/1594/C
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
    char ch;
    cin >> n >> ch;

    string s;
    cin >> s;

    vector<int> v;
    vector<bool> st(n + 1, false);
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ch)
            continue;

        v.push_back(i + 1);
        st[i + 1] = true;
        if ((i + 1) % 2 == 0)
            even++;
    }

    if (v.size() == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (even == 0)
    {
        cout << 1 << endl;
        cout << 2 << endl;
        return;
    }

    if (v.back() != n)
    {
        cout << 1 << endl;
        cout << n << endl;
        return;
    }

    for (int i = 2; i <= n; i++)
    {
        bool isPossible = true;
        for (int j = i; j <= n; j += i)
        {
            if (st[j])
            {
                isPossible = false;
                break;
            }
        }

        if (isPossible)
        {
            cout << 1 << endl;
            cout << i << endl;
            return;
        }
    }

    cout << 2 << endl;
    cout << n - 1 << " " << n << endl;
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