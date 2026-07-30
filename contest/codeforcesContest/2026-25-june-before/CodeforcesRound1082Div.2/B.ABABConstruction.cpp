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

    string t = string(n, ' ');

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            t[i] = 'a';
        else
            t[i] = 'b';
    }

    int q = 0;
    int l = 0;
    int r = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (q == 0)
        {
            if (s[i] == '?')
            {
                q++;
                continue;
            }

            if (t[l] == t[r])
            {
                if (t[r] != s[i])
                {
                    cout << "NO" << endl;
                    return;
                }

                r--;
                continue;
            }

            if (t[l] == s[i])
                l++;
            else
                r--;
            continue;
        }

        if (s[i] == '?')
        {
            q++;
            continue;
        }

        if (s[i] == t[l] || s[i] == t[r])
        {
            if (s[i] == t[l])
            {
                r -= q;
                q = 0;
                l++;
                continue;
            }

            l += q;
            q = 0;
            r--;
            continue;
        }
        l += 1;
        q -= 1;
        r -= q;
        q = 0;
        l++;
        // cout << "q : " << q << endl;
        // cout << "l : " << l << " r : " << r << endl;
        // cout << "i : " << s[i] << endl;

        // break;
    }

    int a = 0;
    int b = 0;

    for (int i = l; i <= r; i++)
    {
        if (t[i] == 'a')
            a++;
        else
            b++;
    }

    if (a + b == q)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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