// link : https://cses.fi/problemset/task/1621
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
    map<int, bool> mp;

    int dis = 0;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (!mp.count(ai))
        {
            dis++;
            mp[ai] = true;
        }
    }

    cout << dis << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}