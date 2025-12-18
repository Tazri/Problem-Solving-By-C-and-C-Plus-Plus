// link : https://codeforces.com/problemset/problem/1992/D
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
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s = "L" + s;

    int pos = 0;
    int i = 0;
    while (pos <= n)
    {
        if (s[pos] == 'L')
        {
            if (pos + m > n)
            {
                cout << "YES" << endl;
                return;
            }

            int li = -1;
            int last = pos + m;

            for (int j = pos + 1; j <= last; j++)
            {
                if (s[j] == 'L')
                {
                    li = j;
                    break;
                }
            }

            if (li != -1)
            {
                int d = i - pos;
                if (d <= m)
                {
                    pos = li;
                    continue;
                }
            }

            int wi = -1;
            for (int j = pos; j <= last; j++)
            {
                if (s[j] == 'W')
                    wi = j;
            }

            if (wi == -1)
            {
                cout << "NO" << endl;
                return;
            }

            pos = wi;
            continue;
        }

        if (k == 0)
        {
            cout << "NO" << endl;
            return;
        }

        int last = pos + k;
        k--;

        for (int j = pos + 1; j <= last; j++, k--)
        {
            if (s[j] == 'L')
            {
                pos = j;
                break;
            }

            if (j > n)
            {
                cout << "YES" << endl;
                return;
            }

            if (k == 0)
            {
                cout << "NO" << endl;
                return;
            }

            if (s[j] == 'C')
            {
                cout << "NO" << endl;
                return;
            }
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