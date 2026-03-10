// link : https://codeforces.com/problemset/problem/1486/C1
#include <bits/stdc++.h>

using namespace std;

int query(int l, int r)
{
    cout << "? " << l << " " << r << endl;
    cout.flush();
    int ans;
    cin >> ans;
    return ans;
}

void answer(int x)
{
    cout << "! " << x << endl;
}

struct Query
{
    int l, r, x;
    Query() {};
    Query(int l, int r)
    {
        this->l = l;
        this->r = r;
    }
    bool isInside(int i)
    {
        return l <= i && i <= r;
    }

    void doQuery()
    {
        x = query(l, r);
    }
    int getLen()
    {
        return r - l + 1;
    }
};

void program()
{
    int n;
    cin >> n;
    int l = 1;
    int r = n;
    int x = query(l, r);

    Query q;
    q.l = l;
    q.r = r;
    q.x = x;

    queue<Query> qu;
    qu.push(q);
    while (qu.size())
    {
        Query front = qu.front();
        qu.pop();

        if (front.getLen() == 2)
        {
            int x = query(front.l, front.r);
            if (front.r != x)
            {
                answer(front.r);
                return;
            }

            answer(front.l);
            return;
        }

        if (front.getLen() == 3)
        {
            int mid = front.l + 1;
            int x1 = query(front.l, mid);
            int x2 = query(mid, front.r);
            int x3 = front.x;

            for (int i = front.l; i <= front.r; i++)
            {
                if (i != x1 && i != x2 && i != x3)
                {
                    answer(i);
                    return;
                }
            }

            return;
        }

        int mid = (front.r + front.l) / 2;
        Query q1(front.l, mid), q2(mid + 1, front.r);
        Query xq;
        Query nq;
        if (q1.isInside(front.x))
        {
            xq = q1;
            nq = q2;
        }
        else
        {
            xq = q2;
            nq = q1;
        }

        xq.doQuery();
        nq.doQuery();

        if (xq.x != front.x)
        {
            qu.push(nq);
        }
        else
        {
            qu.push(xq);
        }
    }
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        program();
    return 0;
}