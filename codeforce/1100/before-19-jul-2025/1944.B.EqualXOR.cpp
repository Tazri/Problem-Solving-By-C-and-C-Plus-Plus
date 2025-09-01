// link : https://codeforces.com/problemset/problem/1944/B
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
    int n, k;
    cin >> n >> k;
    int sz = k * 2;
    vector<int> a1(n), a2(n);
    vector<bool> s1(n + 1, false), s2(n + 1, false);
    vector<bool> dups(n + 1, false);
    vector<int> com;
    com.reserve(n);
    vector<int> ans1, ans2;
    ans1.reserve(k);
    ans2.reserve(k);

    for (int &ai : a1)
        cin >> ai;

    for (int &ai : a2)
        cin >> ai;

    for (int &ai : a1)
    {
        if (ans1.size() >= sz)
            break;

        if (s1[ai])
        {
            ans1.push_back(ai);
            ans1.push_back(ai);
            dups[ai] = true;
        }

        s1[ai] = true;
    }

    for (int &ai : a2)
    {
        if (ans2.size() >= sz)
            break;

        if (s2[ai])
        {
            ans2.push_back(ai);
            ans2.push_back(ai);
            dups[ai] = true;
        }

        s2[ai] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!dups[i])
            com.push_back(i);
    }

    if (ans1.size() < sz)
    {
        for (int i = 1; i <= n; i++)
        {
            if (dups[i])
                continue;

            if (ans1.size() >= sz)
                break;

            ans1.push_back(i);
            ans2.push_back(i);
        }
    }

    // print both
    for (int i = 0; i < ans1.size(); i++)
    {
        if (i != 0)
            cout << " ";
        cout << ans1[i];
    }
    cout << endl;

    for (int i = 0; i < ans2.size(); i++)
    {
        if (i != 0)
            cout << " ";
        cout << ans2[i];
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