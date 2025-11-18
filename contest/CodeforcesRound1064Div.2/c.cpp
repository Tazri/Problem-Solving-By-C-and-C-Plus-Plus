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

ll llMod(ll a, ll mod)
{
    return ((a % mod) + mod) % mod;
}

struct Node
{
    ll back, front;
};

vector<ll> v;
vector<Node> nodes;
void program()
{
    ll n;
    cin >> n;
    v = vector<ll>(n);
    nodes.clear();
    nodes = vector<Node>(n);

    for (ll i = 0; i < n; i++)
    {
        nodes[i].front = llMod(i + 1, n);
        nodes[i].back = llMod(i - 1, n);
    }

    vector<pair<ll, ll>> sv(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sv[i].first = v[i];
        sv[i].second = i;
    }

    sort(sv.begin(), sv.end(), [](pair<ll, ll> a, pair<ll, ll> b)
         {
             ll afront = nodes[a.second].front;
             ll amx = max(a.first,v[afront]);
             ll bfront = nodes[b.second].front;
             ll bmx = max(b.first,v[bfront]);
             
                return amx < bmx; });

    ll cost = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ll ri = sv[i].second;
        ll mx = max(v[ri], v[nodes[ri].front]);
        cost += mx;
        nodes[ri].front = nodes[ri].back;
        nodes[ri].back = nodes[ri].back;
    }

    cout << cost << endl;
}

int main()
{
    optimize();
    ll n;
    cin >> n;
    while (n--)
        program();
    return 0;
}