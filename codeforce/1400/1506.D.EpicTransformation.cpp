// link : https://codeforces.com/problemset/problem/1506/D
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
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0, vi; i < n; cin >> vi, mp[vi]++, i++)
        ;

    priority_queue<int> pq;
    for (auto [_, cnt] : mp)
        pq.push(cnt);

    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        a--;
        b--;

        if (a)
            pq.push(a);
        if (b)
            pq.push(b);
    }

    cout << (pq.size() ? pq.top() : 0) << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}