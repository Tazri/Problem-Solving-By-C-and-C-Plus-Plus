// link : https://codeforces.com/problemset/problem/1779/A
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

bool allLightenUp(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
            return true;
    }

    return false;
}

void program()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (allLightenUp(s))
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'R' && s[i - 1] == 'L')
        {
            cout << i << endl;
            return;
        }
    }

    cout << -1 << endl;
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