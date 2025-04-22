// link : https://codeforces.com/problemset/problem/1324/B
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
    int prev;
    cin >> prev;
    mp[prev]++;
    cin >> prev;
    mp[prev]++;

    bool isPalinedrome = false;

    for (int i = 0; i < n - 2; i++)
    {
        int ai;
        cin >> ai;

        if (isPalinedrome)
            true;

        mp[ai]++;

        if (mp[ai] >= 3)
            isPalinedrome = true;

        if (mp[ai] == 2)
            if (ai != prev)
                isPalinedrome = true;
        prev = ai;
    }

    if (isPalinedrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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