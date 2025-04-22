// link : https://atcoder.jp/contests/abc321/tasks/abc321_b?lang=en
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
    int mx;
    int sum;

    cin >> sum;
    mx = sum;
    int mn = mx;

    for (int i = 0; i < n - 2; i++)
    {
        int ai;
        cin >> ai;
        mx = max(mx, ai);
        mn = min(mn, ai);
        sum += ai;
    }

    sum -= mn;
    sum -= mx;

    if (sum >= k)
    {
        cout << 0 << endl;
        return;
    }

    int need = k - sum;

    if (need > 100)
    {
        cout << -1 << endl;
        return;
    }

    if (need <= mn)
    {
        cout << 0 << endl;
        return;
    }

    if (need <= mx)
    {
        cout << need << endl;
        return;
    }

    cout << -1 << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}