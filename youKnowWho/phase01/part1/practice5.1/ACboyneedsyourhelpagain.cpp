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

void FILO(int n)
{
    stack<int> stk;

    while (n--)
    {
        string op;

        cin >> op;
        if (op == "IN")
        {
            int num;
            cin >> num;
            stk.push(num);
        }
        else
        {
            if (stk.empty())
                cout << "None" << endl;
            else
            {
                cout << stk.top() << endl;
                stk.pop();
            }
        }
    }
}

void FIFO(int n)
{
    queue<int> q;

    while (n--)
    {
        string op;

        cin >> op;
        if (op == "IN")
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else
        {
            if (q.empty())
                cout << "None" << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
}

void program()
{
    int n;
    string type;
    cin >> n >> type;

    if (type == "FIFO")
        FIFO(n);
    else
        FILO(n);
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