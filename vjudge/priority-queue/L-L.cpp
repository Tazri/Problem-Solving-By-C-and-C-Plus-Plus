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
    int left, right;
};

struct comperator
{
    bool operator()(Segment left, Segment right)
    {
        int llen = left.right - left.left + 1;
        int rlen = right.right - right.left + 1;

        if (llen > rlen)
        {
            return false;
        }

        if (llen < rlen)
        {
            return true;
        }

        if (left.left < right.left)
        {
            return false;
        }
        return true;
    }
};

void program()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);

    Segment s;
    s.left = 1;
    s.right = n;
    priority_queue<Segment, vector<Segment>, comperator> pq;

    pq.push(s);

    int num = 1;
    while (pq.size() > 0)
    {
        Segment seg = pq.top();
        pq.pop();

        if (seg.left == seg.right)
        {
            arr[seg.left] = num++;
            continue;
        }

        int len = seg.right - seg.left + 1;

        int mid;

        if (len & 1)
        {
            mid = (seg.left + seg.right) / 2;
        }
        else
        {
            mid = (seg.left + seg.right - 1) / 2;
        }

        arr[mid] = num++;
        Segment left, right;
        left.left = seg.left;
        left.right = mid - 1;
        right.left = mid + 1;
        right.right = seg.right;

        if (left.left <= left.right)
            pq.push(left);
        if (right.left <= right.right)
            pq.push(right);
    }

    cout << arr[1];
    for (int i = 2; i <= n; i++)
        cout << " " << arr[i];
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