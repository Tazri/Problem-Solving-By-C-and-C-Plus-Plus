// link : https://codeforces.com/problemset/problem/1927/C
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
    vector<bool> amp(k + 1, false);
    vector<bool> bmp(k + 1, false);

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (ai <= k)
            amp[ai] = true;
    }

    for (int i = 0; i < m; i++)
    {
        int bi;
        cin >> bi;

        if (bi <= k)
            bmp[bi] = true;
    }

    int bl = k / 2;
    int al = k / 2;

    for (int i = 1; i <= k; i++)
    {
        if (amp[i] == false && bmp[i] == false)
        {
            cout << "NO" << endl;
            return;
        }
        else if (amp[i] && bmp[i])
        {
            continue;
        }
        else if (amp[i])
        {
            if (al <= 0)
            {
                cout << "NO" << endl;
                return;
            }
            al--;
        }
        else
        {
            if (bl <= 0)
            {
                cout << "NO" << endl;
                return;
            }
            bl--;
        }
    }

    cout << "YES" << endl;
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