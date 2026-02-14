// link: https://cses.fi/problemset/task/2216/
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
    vector<int> mp(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        mp[num] = i;
    }

    int round = 1;
    for (int i = 2; i <= n; i++)
    {
        if (mp[i - 1] > mp[i])
            round++;
    }

    cout << round << endl;
}

int32_t main()
{
    optimize();

    program();
    return 0;
}