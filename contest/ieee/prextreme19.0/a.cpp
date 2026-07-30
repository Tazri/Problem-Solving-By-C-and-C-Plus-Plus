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

struct Bottles
{
    ll mn;
    ll mx;
    Bottles()
    {
        cin >> mn >> mx;
    }
};

void program()
{
    ll n, L;
    cin >> n >> L;

    vector<Bottles> v(n);

    sort(v.begin(), v.end(), [](Bottles left, Bottles right)
         { return left.mn < right.mn; });

    for (Bottles &vi : v)
        L -= vi.mn;

    if (L == 0)
    {
        cout << v[n - 1].mn - v[0].mn << endl;
        return;
    }

    ll mx = v.back().mn;

    for (int i = 0; i < n; i++)
    {
        ll d = v[i].mx - v[i].mn;
        ll inc = mx - v[i].mn;
        ll can = min(inc, d);
        can = min(can, L);
        L -= can;
        v[i].mn += can;
    }

    if (!L)
    {
        cout << v.back().mn - v[0].mn << endl;
        return;
    }
    if (L)
    {
    }
}

int main()
{
    optimize();
    program();
    return 0;
}