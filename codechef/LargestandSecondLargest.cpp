// link : https://www.codechef.com/problems/LARGESECOND
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
    vector<int> unique;
    vector<bool> mp(1e3 + 1, false);
    unique.reserve(n);

    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (mp[ai] == false)
        {
            unique.push_back(ai);
            mp[ai] = true;
        }
        mx = max(mx, ai);
    }

    int sum = mx;
    int d = mx;
    mx = -1;

    for (int ui : unique)
    {
        if (ui == d)
            continue;

        mx = max(mx, ui);
    }

    sum += mx;
    cout << sum << endl;
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