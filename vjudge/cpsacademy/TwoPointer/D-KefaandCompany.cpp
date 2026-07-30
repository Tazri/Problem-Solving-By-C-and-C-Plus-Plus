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

struct Friend
{
    ll money;
    ll factor;
};
void program()
{
    ll n, d;
    cin >> n >> d;
    vector<Friend> v(n);

    for (Friend &vi : v)
    {
        cin >> vi.money >> vi.factor;
    }

    sort(v.begin(), v.end(), [](Friend left, Friend right)
         { return left.money < right.money; });

    ll l = 0;
    ll r = 0;
    ll sum = 0;
    ll ans = 0;
    while (r < n)
    {
        ll diff = v[r].money - v[l].money;

        if (diff < d)
        {
            sum += v[r].factor;
            ans = max(sum, ans);
            r++;
            continue;
        }

        sum -= v[l].factor;
        l++;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}