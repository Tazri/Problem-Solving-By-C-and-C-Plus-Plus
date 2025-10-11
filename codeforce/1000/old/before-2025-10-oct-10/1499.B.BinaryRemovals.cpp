// link : https://codeforces.com/problemset/problem/1499/B
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

    if (s.size() <= 2 || is_sorted(s.begin(), s.end()))
    {
        cout << "YES" << endl;
        return;
    }

    int oi = s.size() - 1;
    while (oi >= 0)
    {
        if (oi == 0)
            break;

        if (s[oi] == '1')
        {
            oi--;
            continue;
        }

        if (s[oi - 1] == '0')
        {
            oi--;
            break;
        }
        oi--;
    }

    // if (oi == 0)
    // {
    //     cout << "YES" << endl;
    //     return;
    // }

    int zi = 0;

    while (zi < s.size())
    {
        if (zi == s.size() - 1)
            break;

        if (s[zi] == '0')
        {
            zi++;
            continue;
        }

        if (s[zi + 1] == '1')
        {
            zi++;
            break;
        }

        zi++;
    }

    if (oi <= zi)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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