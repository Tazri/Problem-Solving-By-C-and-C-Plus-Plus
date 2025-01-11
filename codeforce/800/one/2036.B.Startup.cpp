// links : https://codeforces.com/problemset/problem/2036/B
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

    vector<int> bottles(k + 1, 0);

    for (int i = 0; i < k; i++)
    {
        int b, c;
        cin >> b >> c;
        // cout << "b : " << b << endl;
        bottles[b] += c;
    }

    // sort it
    sort(bottles.begin(), bottles.end(), [](int a, int b)
         { return a > b; });

    // after sort
    int ans = 0;
    n = n >= k ? k : n;
    for (int i = 0; i < n; i++)
    {
        ans += bottles[i];
    }

    cout << ans << endl;
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