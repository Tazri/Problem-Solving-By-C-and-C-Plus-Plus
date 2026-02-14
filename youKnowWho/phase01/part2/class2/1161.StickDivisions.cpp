// linK: https://cses.fi/problemset/task/1161/
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

#define int ll

void program()
{
    int x, n;
    cin >> x >> n;

    priority_queue<int, vector<int>, greater<int>> pq;
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        pq.push(vi);
    }

    while (pq.size() > 1)
    {
        int t1 = pq.top();
        pq.pop();
        int t2 = pq.top();
        pq.pop();
        pq.push(t1 + t2);
        cost += t1 + t2;
    }

    cout << cost << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}