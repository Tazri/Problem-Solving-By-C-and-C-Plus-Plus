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
    int n, k;
    cin >> n >> k;

    int cnt = 0;
    while (n--)
    {
        int t;
        cin >> t;
        if (t % k == 0)
            cnt++;
    }

    cout << cnt << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}