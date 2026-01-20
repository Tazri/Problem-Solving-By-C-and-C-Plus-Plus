// link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D
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

struct Person
{
    ll ti, zi, yi;
    Person()
    {
        cin >> ti >> zi >> yi;
    }
};

ll f(ll ti, ll zi, ll yi, ll sec)
{
    ll block = (ti * zi) + yi;
    ll bt = sec / block;
    ll ans = bt * zi;
    sec %= block;
    ans += min(zi, sec / ti);
    return ans;
}

ll m, n;
vector<Person> v;

bool isOk(ll sec)
{
    ll cnt = 0;

    for (ll i = 0; i < n; i++)
        cnt += f(v[i].ti, v[i].zi, v[i].yi, sec);

    return cnt >= m;
}
void program()
{
    cin >> m >> n;
    v = vector<Person>(n);

    ll l = 0;
    ll r = 1e9;
    ll ans = 0;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (isOk(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    vector<ll> av;
    av.reserve(n);
    for (Person p : v)
        av.push_back(f(p.ti, p.zi, p.yi, ans));

    int left = m;

    for (int i = 0; i < n; i++)
    {
        if (left == 0)
            av[i] = 0;
        else
        {
            if (av[i] <= left)
                left -= av[i];
            else
            {
                av[i] = left;
                left = 0;
            }
        }
    }

    for (ll i = 0; i < n; i++)
        cout << av[i] << " \n"[i == n - 1];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}