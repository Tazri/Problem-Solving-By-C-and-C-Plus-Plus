// link : https://codeforces.com/contest/1526/problem/C1
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
        if (left < right)
        {
            return false;
        }
        return true;
    }
};

void program()
{
    ll n;
    cin >> n;
    ll health = 0;
    priority_queue<ll, vector<ll>, comperator> pq;
    ll cnt = 0;

    for (ll i = 0; i < n; i++)
    {
        ll p;
        cin >> p;

        if (p >= 0)
        {
            cnt++;
            health += p;
            continue;
        }

        if (health + p >= 0)
        {
            pq.push(p);
            health += p;
            cnt++;
            continue;
        }

        if (pq.size() > 0 && pq.top() < p)
        {
            ll top = pq.top();
            pq.pop();
            health -= top;
            health += p;
            pq.push(p);
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}