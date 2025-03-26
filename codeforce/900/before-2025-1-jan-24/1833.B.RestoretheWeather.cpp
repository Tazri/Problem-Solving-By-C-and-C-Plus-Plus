// link : https://codeforces.com/problemset/problem/1833/B
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

void test()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> ai(n);
    vector<int> bi(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ai[i] = i;
        bi[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    // sort bi and bi
    sort(ai.begin(), ai.end(), [&a](int ai, int bi)
         { return a[ai] < a[bi]; });

    sort(bi.begin(), bi.end(), [&b](int ai, int bi)
         { return b[ai] < b[bi]; });

    // now construct the answer
    for (int i = 0; i < n; i++)
    {
        ans[ai[i]] = b[bi[i]];
    }

    // print the ans
    cout << ans[0];
    for (int i = 1; i < n; i++)
    {
        cout << " " << ans[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}