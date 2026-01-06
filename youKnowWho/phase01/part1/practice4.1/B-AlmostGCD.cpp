// link : https://atcoder.jp/contests/abc182/tasks/abc182_b
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
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    int ans = 2;
    int time = 0;

    for (int i = 2; i <= 1000; i++)
    {
        int cnt = 0;
        for (int j = 0; j <= n; j++)
            if (v[j] % i == 0)
                cnt++;

        if (cnt > time)
        {
            time = cnt;
            ans = i;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}