#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pinf LLONG_MAX
#define ninf LLONG_MIN
#define countBit(x) (int)__builtin_popcount(x)
#define lsb(x) (int)__builtin_ctzll(x)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl '\n'
#define PI acos(-1.0)
#define lcm(a, b) (a / __gcd(a, b) * b)
#define MOD 1000000007LL
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

void BarikSolution()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    int totalSum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        totalSum += v[i];
    }

    vector<int> prefixSum(n + 1);
    prefixSum[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        prefixSum[i] = v[i] + prefixSum[i - 1];
    }

    bool flag = false;
    int left = -1;
    int right = -1;

    for (int l = 1; l < n - 1; l++)
    {
        int leftSum = prefixSum[l];
        for (int r = l + 1; r <= n - 1; r++)
        {
            int middSum = prefixSum[r] - prefixSum[l];
            int rightSum = totalSum - (leftSum + middSum);

            int m1 = leftSum % 3;
            int m2 = middSum % 3;
            int m3 = rightSum % 3;

            if ((m1 != m2 && m2 != m3 && m3 != m1) || (m1 == m2 && m2 == m3))
            {
                cout << l << " " << r << endl;
                return;
            }
        }
    }
    cout << 0 << " " << 0 << endl;
}

signed main()
{
    fastio;

    /* amr main logic */
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        BarikSolution();
    }

    return 0;
}
