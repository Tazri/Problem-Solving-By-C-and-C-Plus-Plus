// link : https://codeforces.com/problemset/problem/1133/B
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
    vector<int> mp(100, 0);

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        ai %= k;

        if (ai == 0)
        {
            if (mp[ai] >= 1)
            {
                cnt++;
                mp[ai]--;
            }
            else
            {
                mp[ai]++;
            }
            continue;
        }

        int need = k - ai;

        if (mp[need] >= 1)
        {
            cnt++;
            mp[need]--;
        }
        else
        {
            mp[ai]++;
        }
    }

    cout << cnt * 2 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}