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

struct Hurdle
{
    int left;
    int right;
    int jump;
};

struct Power
{
    int pos;
    int value;
};

void program()
{
    int L, n, m;
    cin >> n >> m >> L;

    vector<Hurdle> hurdles;
    hurdles.reserve(n);

    for (int i = 0; i < n; i++)
    {
        Hurdle h;
        cin >> h.left >> h.right;

        h.jump = h.right - h.left + 2;
        hurdles.push_back(h);
    }
    vector<Power> powerUps(m);
    for (int i = 0; i < m; i++)
    {
        cin >> powerUps[i].pos >> powerUps[i].value;
    }

    priority_queue<int> pq;

    int pi = 0;
    int power = 1;
    for (int i = 0; i < n; i++)
    {

        while (pi < m && powerUps[pi].pos < hurdles[i].left)
        {
            pq.push(powerUps[pi].value);
            pi++;
        }

        if (power >= hurdles[i].jump)
            continue;

        while (power < hurdles[i].jump && pq.size() > 0)
        {
            power += pq.top();
            pq.pop();
        }

        if (power < hurdles[i].jump)
        {
            cout << -1 << endl;
            return;
        }
    }

    while (pi < m)
    {
        pq.push(powerUps[pi].value);
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
