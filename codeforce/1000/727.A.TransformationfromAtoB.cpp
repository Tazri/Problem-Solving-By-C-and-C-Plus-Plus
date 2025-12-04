// link : https://codeforces.com/problemset/problem/727/A
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

vector<ll> steps;
ll a, b;
bool isReach = false;
set<ll> visited;

void dfs()
{
    if (isReach)
    {
        return;
    }

    if (steps.back() == b)
    {
        isReach = true;
        return;
    }

    ll back = steps.back();
    ll w1 = (back * 10) + 1;
    ll w2 = back * 2;

    if (w1 <= b && !(visited.count(w1)))
    {
        steps.push_back(w1);
        visited.insert(w1);
        dfs();
        if (isReach)
            return;
        steps.pop_back();
    }

    if (w2 <= b && !(visited.count(w2)))
    {
        steps.push_back(w2);
        visited.insert(w2);
        dfs();
        if (isReach)
            return;
        steps.pop_back();
    }
}

void program()
{
    cin >> a >> b;
    steps.push_back(a);
    dfs();

    if (isReach)
    {
        cout << "YES" << endl;
        cout << steps.size() << endl;
        for (ll i = 0; i < steps.size(); i++)
            cout << steps[i] << " \n"[i == steps.size() - 1];
    }

    else
        cout << "NO" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}