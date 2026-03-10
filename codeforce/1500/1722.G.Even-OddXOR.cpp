// link : https://codeforces.com/problemset/problem/1722/G
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

int bitCount(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n >>= 1;
    }
    return cnt;
}

pair<int, int> f(int n, int x)
{
    int tmp = n;
    int cnt = bitCount(n);
    int mask = 1 << (cnt + (x - 1));
    int ans = n | mask;

    return {ans, mask};
}

int nearest(int n)
{
    if (n % 4 == 3)
        return n;

    if (n % 4 == 0)
        return n - 1;
    if (n % 4 == 1)
    {
        return n - 2;
    }

    return n - 3;
}

bool thatValid(vector<int> &v)
{
    int n = v.size() - 1;

    int oxr = 0;
    int exr = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
            oxr ^= v[i];
        else
            exr ^= v[i];
    }

    return oxr == exr;
}

void program()
{
    int n;
    cin >> n;
    int r = nearest(n);

    vector<int> even;
    vector<int> odd;

    for (int i = 1; i <= r; i++)
        if (i & 1)
            odd.push_back(i);
        else
            even.push_back(i);

    int oddCount = (n + 1) / 2;
    int evenCount = n / 2;
    int oddNeed = oddCount - odd.size();
    int evenNeed = evenCount - even.size();

    if (oddNeed)
    {
        pair<int, int> p = f(odd.back(), 1);
        odd.back() = p.first;
        odd.push_back(p.second);

        if (oddNeed >= 2)
        {
            odd.push_back(0);
        }
    }

    if (evenNeed)
    {

        pair<int, int> p = f(even.back(), 2);
        even.back() = p.first;

        even.push_back(p.second);

        if (evenNeed >= 2)
        {
            even.push_back(0);
        }
    }

    vector<int> ans;
    ans.reserve(n + 2);
    ans.push_back(1);

    int oi = 0;
    int ei = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
            ans.push_back(odd[oi++]);
        else
            ans.push_back(even[ei++]);
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
}

int32_t main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}