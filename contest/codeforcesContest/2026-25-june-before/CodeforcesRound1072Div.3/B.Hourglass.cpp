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
    int s, k, m;
    cin >> s >> k >> m;

    if (s <= k)
    {
        cout << max(s - (m % k), 0) << endl;
        return;
    }

    int time = m / k;
    int rm = m % k;

    if (time % 2 == 0)
        cout << s - rm << endl;
    else
        cout << k - rm << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}