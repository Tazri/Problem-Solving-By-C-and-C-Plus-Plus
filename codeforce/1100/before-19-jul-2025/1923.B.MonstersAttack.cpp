// link : https://codeforces.com/problemset/problem/1923/B
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

struct Mon
{
    ll health, point;
};

void program()
{
    ll n, k;
    cin >> n >> k;
    vector<Mon> monster(n);
    vector<Mon> m;
    stack<Mon> left;
    queue<Mon> right;

    for (ll i = 0; i < n; i++)
        cin >> monster[i].health;

    for (ll i = 0; i < n; i++)
        cin >> monster[i].point;

    for (Mon mi : monster)
    {
        if (mi.point < 0)
        {
            mi.point *= -1;
            left.push(mi);
        }
        else
        {
            right.push(mi);
        }
    }

    while (left.size() > 0 || right.size() > 0)
    {
        if (left.size() <= 0)
        {
            m.push_back(right.front());
            right.pop();
            continue;
        }

        if (right.size() <= 0)
        {
            m.push_back(left.top());
            left.pop();
            continue;
        }

        Mon l = left.top();
        Mon r = right.front();

        if (l.point == r.point)
        {
            l.health += r.health;
            m.push_back(l);
            left.pop();
            right.pop();
        }
        else if (l.point < r.point)
        {
            m.push_back(l);
            left.pop();
        }
        else
        {
            m.push_back(r);
            right.pop();
        }
    }

    // now m is sorted....

    ll sec = 0;
    ll bullets = k;
    for (Mon mi : m)
    {
        if (mi.point - sec <= 0)
        {
            cout << "NO" << endl;
            return;
        }

        ll d = min(bullets, mi.health);

        mi.health -= d;
        bullets -= d;

        if (mi.health <= 0)
        {
            continue;
        }

        // now need bullets.
        ll take = (mi.health + k - 1) / k;
        bullets = take * k;
        sec += take;
        mi.point -= sec;

        if (mi.point <= 0)
        {
            cout << "NO" << endl;
            return;
        }

        d = min(mi.health, bullets);
        mi.health -= d;
        bullets -= d;
    }

    cout << "YES" << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}