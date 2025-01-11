// link : https://codeforces.com/problemset/problem/268/A
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
    int n;
    cin >> n;
    vector<int> left(101, 0);
    vector<int> right(n);

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        left[l]++;
        right[i] = r;
    }

    int ans = 0;

    for (int i : right)
    {
        if (left[i])
        {
            ans += left[i];
        }
    }

    cout << ans << endl;
    return 0;
}