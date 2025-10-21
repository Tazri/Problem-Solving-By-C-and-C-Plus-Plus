// Got TLE
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

ll sz = (4 * 1e5) + 123;

int tst = 444;

vector<ll> spf;

void build_spf(ll n, vector<ll> &spf)
{
    spf.assign(n + 1, 0);
    for (ll i = 2; i <= n; i++)
        spf[i] = i;

    for (ll i = 4; i <= n; i += 2)
        spf[i] = 2;

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (spf[i] == i)
        {
            for (ll j = i * i; j <= n; j += 2 * i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

void program()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> small;
    small.reserve(3);
    ll even = 0;
    ll odd = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1)
            odd++;
        else
            even++;
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        small.push_back(b[i]);

        if (small.size() > 2)
        {
            sort(small.begin(), small.end());
            small.pop_back();
        }
    }

    ll ans = small[0] + small[1];

    if (even > 1)
    {
        cout << 0 << endl;
        return;
    }

    set<ll> st;

    for (ll i = 0; i < n; i++)
    {
        ll ai = a[i];

        while (ai > 1)
        {
            ll p = spf[ai];
            while (ai % p == 0)
                ai /= p;

            if (st.count(p))
            {
                cout << 0 << endl;
                return;
            }
            st.insert(p);
        }
    }

    vector<ll> dvrs;
    dvrs.reserve(st.size());

    for (ll si : st)
        dvrs.push_back(si);

    for (ll i = 0; i < n; i++)
    {
        if (b[i] >= ans)
            continue;

        ll ri = a[i];

        while (ri > 1)
        {
            ll pri = spf[ri];
            while (ri % pri == 0)
                ri /= pri;
            st.erase(st.find(pri));
        }

        ll ai = a[i];
        if (spf[ai] == ai)
        {
            for (ll mp : dvrs)
            {
                if (mp == ai)
                    continue;
                ll should = ai + (mp - (ai % mp));
                ll t = should - ai;
                ll cost = t * b[i];

                ans = min(ans, cost);
            }
        }
        else
        {
            for (ll mp : st)
            {
                ll should = ai + (mp - (ai % mp));
                ll t = should - ai;
                ll cost = t * b[i];

                ans = min(ans, cost);
            }
        }

        if (st.lower_bound(ai) != st.end())
        {
            ll lp = *st.lower_bound(ai);

            ll should = ai + (lp - (ai % lp));
            ll t = should - ai;
            ll cost = t * b[i];

            ans = min(ans, cost);
        }

        ll add = a[i];
        while (add > 1)
        {
            ll p = spf[add];
            while (add % p == 0)
                add /= p;
            st.insert(p);
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    build_spf(sz, spf);
    ll t;
    cin >> t;

    while (t--)
        program();

    return 0;
}