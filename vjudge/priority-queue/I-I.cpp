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

struct Hardle
{
    int left, right, jump;
};

struct Power
{
    int pos, value;
};

void program()
{
    int n, m, l;
    cin >> n >> m >> l;

    vector<Hardle> h(n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i].left >> h[i].right;
        h[i].jump = h[i].right - h[i].left + 2;
    }

    vector<Power> p(m);

    for (int i = 0; i < m; i++)
    {
        cin >> p[i].pos >> p[i].value;
    }

    priority_queue<int> pq;

    int pi = 0;
    int power = 1;
    for (int i = 0; i < n; i++)
    {
        while (pi < m && p[pi].pos < h[i].left)
        {
            pq.push(p[pi].value);
            pi++;
        }

        if (power >= h[i].jump)
            continue;

        while (pq.size() > 0 && power < h[i].jump)
        {
            power += pq.top();
            pq.pop();
        }

        if (power < h[i].jump)
        {
            cout << -1 << endl;
            return;
        }
    }

    while (pi < m)
    {
        pq.push(p[pi].value);
        pi++;
    }

    int ans = m - pq.size();

    cout << ans << endl;
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