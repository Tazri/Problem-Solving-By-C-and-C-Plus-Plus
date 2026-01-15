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

void program()
{
    int n;
    cin >> n;
    queue<int> q;
    while (n--)
    {
        int type, x;
        cin >> type >> x;

        if (type == 1)
        {
            q.push(x);
            continue;
        }

        if (q.front() == x)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        q.pop();
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}