// link : https://atcoder.jp/contests/abc311/tasks/abc311_b?lang=en
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

int main()
{
    optimize();
    int n, d;
    cin >> n >> d;
    vector<bool> days(d, false);

    for (int i = 0; i < n; i++)
    {
        // count day
        for (int j = 0; j < d; j++)
        {
            char ch;
            cin >> ch;

            if (ch == 'x')
            {
                days[j] = days[j] || true;
            }
        }
    }

    int maxLen = 0;
    int len = 0;

    for (bool b : days)
    {
        if (b)
        {
            maxLen = max(maxLen, len);
            len = 0;
        }
        else
        {
            len++;
        }
    }
    maxLen = max(len, maxLen);
    cout << maxLen << endl;
    return 0;
}