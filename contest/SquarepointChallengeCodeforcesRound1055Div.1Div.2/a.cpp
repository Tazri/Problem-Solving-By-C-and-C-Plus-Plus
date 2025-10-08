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
    vector<bool> mp(100 + 3, false);

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (mp[ai])
            continue;

        mp[ai] = true;
        cnt++;
    }

    cout << 2 * cnt - 1 << endl;
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