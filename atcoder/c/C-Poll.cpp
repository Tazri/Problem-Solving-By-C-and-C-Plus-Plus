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
    ll n;
    cin >> n;
    map<string, ll> vote;

    for (ll i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        vote[name]++;
    }

    vector<pair<string, ll>> alls;
    alls.reserve(n);

    ll mx = 0;
    for (pair<string, ll> canditate : vote)
    {
        alls.push_back(canditate);
        mx = max(mx, canditate.second);
    }

    for (pair<string, ll> canditate : vote)
    {
        if (canditate.second == mx)
        {
            cout << canditate.first << endl;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}