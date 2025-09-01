// link : https://codeforces.com/problemset/problem/1942/B
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
    vector<int> arr(n);
    vector<bool> used(n + 2, false);
    vector<int> ans;
    ans.reserve(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int minMex = 0;
    int maxMex = 1;

    for (int ai : arr)
    {
        int minP = minMex - ai;
        int maxP = maxMex - ai;

        int p = minP;
        if (minP >= 0 && minP < n && used[minP] == false)
            p = minP;
        else if (maxP >= 0 && maxP < n && used[maxP] == false)
            p = maxP;

        ans.push_back(p);

        used[p] = true;

        if (p == minMex)
        {
            minMex = maxMex;

            maxMex++;
            while (used[maxMex])
                maxMex++;
        }

        if (p == maxMex)
        {
            maxMex++;
            while (used[maxMex])
                maxMex++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            cout << ' ';
        cout << ans[i];
    }
    cout << endl;
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