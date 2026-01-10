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

#define int ll

void program()
{
    int n;
    cin >> n;
    int cnt = 0;
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        int vi;
        cin >> vi;
        mp[vi]++;
        cnt += (i - mp[vi]);
    }
    cout << cnt << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}