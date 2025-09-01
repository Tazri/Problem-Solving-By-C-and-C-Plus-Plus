// link : https://cses.fi/problemset/task/1619
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
    bool operator()(int left, int right)
    {
        if (left < right)
            return false;
        return true;
    }
};

void program()
{
    int n;
    cin >> n;
    vector<pair<int, int>> c(n);

    priority_queue<int, vector<int>, comperator> pq;

    for (int i = 0; i < n; i++)
        cin >> c[i].first >> c[i].second;

    sort(c.begin(), c.end());

    int mx = 0;

    for (pair<int, int> p : c)
    {
        int arrive = p.first;
        int leave = p.second;

        while (pq.size() > 0 && pq.top() <= arrive)
        {
            pq.pop();
        }

        pq.push(leave);
        mx = max((int)pq.size(), mx);
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}