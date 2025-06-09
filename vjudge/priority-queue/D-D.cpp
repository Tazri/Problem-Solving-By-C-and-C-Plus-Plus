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

struct comperator
{
    bool operator()(ll left, ll right)
    {
        if (left > right)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

void program()
{
    priority_queue<ll, vector<ll>, comperator> pq;

    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;
        pq.push(ai);
    }

    ll ans = 0;
    while (pq.size() > 1)
    {
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();

        ll sum = a + b;
        ans += sum;
        pq.push(sum);
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}