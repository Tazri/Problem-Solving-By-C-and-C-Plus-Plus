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
    string s;
    cin >> s;

    int cnt = 0;
    bool same = false;
    bool allSame = true;
    set<char> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        if (i == 0)
        {
            cnt++;
            continue;
        }

        if (s[i] != s[i - 1])
            cnt++;

        if (s[i] == s[i - 1])
            same = true;
    }

    if (s.back() == s.front())
    {
        cout << cnt << endl;
        return;
    }

    if (st.size() >= 2 && same)
    {
        cout << cnt + 1 << endl;
        return;
    }

    cout << cnt << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}