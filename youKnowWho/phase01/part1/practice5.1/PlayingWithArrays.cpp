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
    vector<int> ans(n + 1, 0);
    int num = 1;

    for (int i = 1; i <= n; ans[i] = num++, i += 2)
        ;

    for (int i = n; i >= 1; i--)
        if (ans[i] == 0)
            ans[i] = num++;

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
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