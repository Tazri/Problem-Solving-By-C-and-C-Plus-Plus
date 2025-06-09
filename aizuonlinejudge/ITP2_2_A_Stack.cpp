// link : https://onlinejudge.u-aizu.ac.jp/problems/ITP2_2_A
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
    int n, q;
    cin >> n >> q;
    vector<stack<int>> arr(n);

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            int t, x;
            cin >> t >> x;

            arr[t].push(x);
        }
        else if (type == 1)
        {
            int t;
            cin >> t;

            if (arr[t].empty())
                continue;
            cout << arr[t].top() << endl;
        }
        else if (type == 2)
        {
            int t;
            cin >> t;
            if (arr[t].empty())
                continue;
            arr[t].pop();
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}