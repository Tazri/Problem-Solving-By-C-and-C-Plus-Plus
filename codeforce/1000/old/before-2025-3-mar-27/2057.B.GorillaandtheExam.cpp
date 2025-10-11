// link : https://codeforces.com/problemset/problem/2057/B
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

void test()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        mp[num]++;
    }

    if (k >= n)
    {
        cout << 1 << endl;
        return;
    }

    vector<int> freq;
    for (pair<int, int> f : mp)
    {
        freq.push_back(f.second);
    }

    if (k == 0)
    {
        cout << freq.size() << endl;
        return;
    }

    sort(freq.begin(), freq.end(), [](int a, int b)
         { return a < b; });

    int ans = freq.size();

    for (int i : freq)
    {
        if (i <= k)
        {
            ans--;
            k -= i;
        }
        else if (k <= 0)
        {
            break;
        }
        else if (ans <= 0)
        {
            break;
        }
    }

    if (ans <= 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}