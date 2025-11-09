// link : https://codeforces.com/problemset/problem/520/B
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
    int n, m;
    cin >> n >> m;

    if (n >= m)
    {
        cout << (n - m) << endl;
        return;
    }

    queue<pair<int, int>> q;
    q.push({n, 0});
    set<int> visited;
    visited.insert(n);
    while (q.size())
    {
        pair<int, int> front = q.front();
        q.pop();

        if (front.first == m)
        {
            cout << front.second << endl;
            return;
        }

        int m1 = front.first - 1;
        int m2 = front.first * 2;

        if (!visited.count(m2) && front.first <= m)
        {
            visited.insert(m2);
            q.push({m2, front.second + 1});
        }
        if (!visited.count(m1))
        {
            visited.insert(m1);
            q.push({m1, front.second + 1});
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}