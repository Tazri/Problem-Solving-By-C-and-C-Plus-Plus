// link : https://codeforces.com/problemset/problem/1353/D
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

struct Segment
{
    int l, r, size;
};

struct Compare
{
    bool operator()(const Segment &a, const Segment &b) const
    {
        if (a.size == b.size)
        {
            return a.l > b.l;
        }

        return a.size < b.size;
    }
};

void program()
{
    int n;
    cin >> n;
    vector<int> ans(n + 1);
    priority_queue<Segment, vector<Segment>, Compare> pq;

    Segment first;
    first.l = 1;
    first.r = n;
    first.size = n;

    int cnt = 1;
    pq.push(first);

    while (pq.size())
    {
        if (cnt > n)
            break;

        Segment seg = pq.top();
        pq.pop();

        if (seg.r == seg.l)
        {
            ans[seg.r] = cnt++;
            continue;
        }

        int sz = seg.r - seg.l + 1;

        int mid;
        if (sz & 1)
        {
            mid = (seg.l + seg.r) / 2;
        }
        else
        {
            mid = (seg.l + seg.r - 1) / 2;
        }

        ans[mid] = cnt++;

        Segment left, right;
        left.l = seg.l;
        left.r = mid - 1;
        left.size = left.r - left.l + 1;

        right.l = mid + 1;
        right.r = seg.r;
        right.size = right.r - right.l + 1;

        pq.push(left);
        pq.push(right);
    }

    cout << ans[1];
    for (int i = 2; i <= n; i++)
        cout << " " << ans[i];
    cout << endl;
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