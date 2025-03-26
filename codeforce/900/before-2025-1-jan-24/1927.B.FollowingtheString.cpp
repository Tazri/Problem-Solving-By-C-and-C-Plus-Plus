// link : https://codeforces.com/problemset/problem/1927/B
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
    int n;
    cin >> n;
    vector<int> trace(n);
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> trace[i];
        mx = max(mx, trace[i]);
    }

    vector<int> mp(mx + 2, 0);

    for (int i : trace)
    {
        int ci = mp[i];
        char ch = (char)(ci + (int)'a');
        cout << ch;
        mp[i]++;

        if (mp[i] > ((int)'z' - (int)'a'))
        {
            mp[i] = 0;
        }
    }
    cout << endl;
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