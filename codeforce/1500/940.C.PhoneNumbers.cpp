// linK: https://codeforces.com/problemset/problem/940/C
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
    string s;
    cin >> s;

    string charset;
    set<char> st;

    for (char ch : s)
        if (st.count(ch))
            continue;
        else
        {
            charset.push_back(ch);
            st.insert(ch);
        }

    sort(charset.begin(), charset.end());

    string t(k, charset[0]);

    if (k > n)
    {
        for (int i = 0; i < n; i++)
            t[i] = s[i];
        cout << t << endl;
        return;
    }

    int index = -1;
    for (int i = k - 1; i >= 0; i--)
    {
        if (s[i] == charset.back())
        {
            continue;
        }
        index = i;
        char rep = s[i];
        for (int ch : charset)
            if (ch > rep)
            {
                rep = ch;
                break;
            }
        t[i] = rep;
        break;
    }

    for (int i = 0; i < index; i++)
        t[i] = s[i];

    cout << t << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}