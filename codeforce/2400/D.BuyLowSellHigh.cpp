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
    vector<ll> v(n);

    for (ll &vi : v)
        cin >> vi;

    priority_queue<ll, vector<ll>, greater<ll>> pq;

    ll profit = 0;

    for (ll &vi : v)
    {
        if (pq.empty())
        {
            pq.push(vi);
            profit -= vi;
            continue;
        }

        if (pq.top() >= vi)
        {
            pq.push(vi);
            profit -= vi;
            continue;
        }

        pq.pop();
        profit += vi;
        profit -= vi;
        profit -= vi;
        pq.push(vi);
        pq.push(vi);
    }

    while (!pq.empty())
    {
        profit += pq.top();
        pq.pop();
    }

    cout << profit << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}