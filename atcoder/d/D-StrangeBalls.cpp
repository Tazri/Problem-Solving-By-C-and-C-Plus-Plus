// link : https://atcoder.jp/contests/abc240/tasks/abc240_d?lang=en
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

struct Ball
{
    int number, time;
};

void program()
{
    int n;
    cin >> n;
    stack<Ball> stk;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        cnt++;
        if (stk.empty())
        {
            Ball b;
            b.number = ai;
            b.time = 1;
            stk.push(b);
        }
        else
        {
            Ball top = stk.top();

            if (top.number == ai)
            {
                top.time++;
                stk.pop();
                stk.push(top);
            }
            else
            {
                Ball newBall;
                newBall.number = ai;
                newBall.time = 1;
                stk.push(newBall);
            }
        }

        Ball top = stk.top();

        if (top.number == top.time)
        {
            cnt -= top.time;
            stk.pop();
        }

        cout << cnt << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}