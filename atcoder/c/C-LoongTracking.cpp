// link : https://atcoder.jp/contests/abc335/tasks/abc335_c?lang=en
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

struct Pos
{
    int x = 0;
    int y = 0;
};

void program()
{
    int n, q;
    cin >> n >> q;
    vector<Pos> stk;

    for (int qi = 0; qi < q; qi++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            char d;
            cin >> d;
            if (stk.empty())
            {
                Pos p;
                p.x = 0;
                p.y = 0;

                if (d == 'L')
                    p.x -= 1;
                else if (d == 'R')
                    p.x += 1;
                else if (d == 'U')
                    p.y += 1;
                else if (d == 'D')
                    p.y -= 1;

                stk.push_back(p);
            }
            else
            {
                Pos back = stk.back();
                Pos point;
                point.x = back.x;
                point.y = back.y;

                if (d == 'R')
                    point.x++;
                else if (d == 'L')
                    point.x--;
                else if (d == 'U')
                    point.y++;
                else if (d == 'D')
                    point.y--;

                stk.push_back(point);
            }
            continue;
        }

        int p;
        cin >> p;
        int delay = p - 1;

        int y = 0, x = p;

        int leftMove = min((int)stk.size(), delay);

        x -= leftMove;

        int follow = stk.size() - delay;

        int pi = follow - 1;
        if (pi < 0)
        {
            cout << x << " " << y << endl;
            continue;
        }

        x += stk[pi].x;
        y += stk[pi].y;

        cout << x << " " << y << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}