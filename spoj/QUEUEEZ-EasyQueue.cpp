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

#define endl "\n"

void program()
{
    int n;
    cin >> n;

    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int type;

        cin >> type;

        if (type == 1)
        {
            int v;
            cin >> v;
            q.push(v);
        }
        else if (type == 2)
        {
            if (q.empty())
                continue;
            q.pop();
        }
        else if (type == 3)
        {
            if (q.empty())
                cout << "Empty!" << endl;
            else
                cout << q.front() << endl;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}