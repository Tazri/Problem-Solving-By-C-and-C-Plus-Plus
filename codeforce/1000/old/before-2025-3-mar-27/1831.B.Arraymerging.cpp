// link : https://codeforces.com/problemset/problem/1831/B
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
    vector<int> amp((2 * n) + 1, 0);
    vector<int> bmp((2 * n) + 1, 0);

    int prev;
    int len;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (i == 0)
        {
            prev = ai;
            len = 1;
            continue;
        }

        if (ai == prev)
            len++;
        else
        {
            amp[prev] = max(amp[prev], len);
            prev = ai;
            len = 1;
        }
    }

    amp[prev] = max(amp[prev], len);

    for (int i = 0; i < n; i++)
    {
        int bi;
        cin >> bi;

        if (i == 0)
        {
            prev = bi;
            len = 1;
            continue;
        }

        if (prev == bi)
        {
            len++;
        }
        else
        {
            bmp[prev] = max(bmp[prev], len);
            prev = bi;
            len = 1;
        }
    }

    bmp[prev] = max(bmp[prev], len);

    int mx = 1;
    for (int i = 0; i < amp.size(); i++)
        mx = max(mx, amp[i] + bmp[i]);
    cout << mx << endl;
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

/*
6
2 2 1 2 2 1
2 2 1 2 2 1
*/