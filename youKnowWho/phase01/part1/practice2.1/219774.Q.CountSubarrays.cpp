// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
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

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int len = 1;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] <= v[i])
        {
            len++;
            continue;
        }

        int cnt = (len * (len + 1)) / 2;
        ans += cnt;
        len = 1;
    }

    ans += ((len * (len + 1)) / 2);

    cout << ans << endl;
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