// link : https://atcoder.jp/contests/abc353/tasks/abc353_a?lang=en
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
    int ai;
    cin >> ai;

    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }

    int fi = ai;
    int ans = -1;
    for (int i = 2; i <= n; i++)
    {
        cin >> ai;

        if (ans != -1)
            continue;

        if (ai > fi)
            ans = i;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}