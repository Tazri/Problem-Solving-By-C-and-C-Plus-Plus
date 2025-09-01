// link : https://codeforces.com/problemset/problem/313/B
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
    string s;
    cin >> s;
    vector<int> zo(s.size() + 1, 0);
    vector<int> freq(s.size() + 1, 0);
    freq[0] = 0;
    zo[0] = 0;

    for (int i = 0, zi = 1; i < s.size(); i++, zi++)
    {
        if (i == s.size() - 1)
        {
            zo[zi] = 0;
            continue;
        }

        if (s[i] == s[i + 1])
            zo[zi] = 1;
        else
            zo[zi] = 0;
    }

    for (int i = 1; i <= s.size(); i++)
    {
        freq[i] = freq[i - 1] + zo[i];
    }

    int m;
    cin >> m;

    while (m--)
    {
        int l, r;
        cin >> l >> r;
        r--;

        int ans = freq[r] - freq[l - 1];

        cout << ans << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}