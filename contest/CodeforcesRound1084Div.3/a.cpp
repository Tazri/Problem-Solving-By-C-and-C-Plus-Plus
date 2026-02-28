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

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    int mx;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            mx = v[i];

        mx = max(mx, v[i]);
    }

    int cnt = 0;

    for (int &vi : v)
        if (mx == vi)
            cnt++;

    cout << cnt << endl;
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