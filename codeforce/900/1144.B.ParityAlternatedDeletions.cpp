// link: https://codeforces.com/problemset/problem/1144/B
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

    vector<int> odds;
    vector<int> evens;
    odds.reserve(n);
    evens.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (ai & 1)
            odds.push_back(ai);
        else
            evens.push_back(ai);
    }

    sort(odds.begin(), odds.end());
    sort(evens.begin(), evens.end());

    if (odds.size() == evens.size())
    {
        cout << 0 << endl;
        return;
    }

    int d = min(odds.size(), evens.size()) + 1;

    int ans = 0;
    if (odds.size() > evens.size())
    {
        int left = odds.size() - d;

        for (int i = 0; i < left; i++)
            ans += odds[i];
    }
    else
    {
        int left = evens.size() - d;

        for (int i = 0; i < left; i++)
            ans += evens[i];
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}