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

int sz = 1e5 * 100 + 12;
int mod = 1000000007;
vector<int> dp(sz, 0);

int getMod(int v, int mod)
{
    return ((v % mod) + mod) % mod;
}

void build()
{
    vector<int> coins = {25, 50, 100, 500, 1000, 2000, 5000, 10000, 20000};

    dp[0] = 1;

    for (int i = 1; i < sz; i++)
    {
        for (int c : coins)
        {
            if (i - c >= 0)
                dp[i] = (dp[i] + dp[i - c]);
            dp[i] = getMod(dp[i], mod);
        }
    }
}

void program()
{
    int n, m, a;
    cin >> n >> m >> a;

    int x = n * 100 * 53;
    int ans = dp[x];
    int mdif = abs(ans - m);
    int adif = abs(ans - a);

    if (mdif == adif)
    {
        if (mdif == 0)
        {
            cout << "TIE" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
        return;
    }
    else if (adif == 0)
    {
        cout << "Andrew" << endl;
    }
    else if (mdif == 0)
    {
        cout << "Mikel" << endl;
    }
    else if (adif < mdif)
    {
        cout << "Andrew" << endl;
    }
    else
    {
        cout << "Mikel" << endl;
    }
}

int main()
{
    optimize();
    build();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}