// link : https://codeforces.com/problemset/problem/1914/A
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

int takeTime(char ch)
{
    return (int)ch - (int)'A' + 1;
}

void program()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> mp((int)'Z' - (int)'A' + 1, 0);
    vector<bool> solve((int)'Z' - (int)'A' + 1, false);

    int ans = 0;
    for (char ch : s)
    {
        int chi = (int)ch - (int)'A';

        mp[chi]++;

        int time = takeTime(ch);

        if (time <= mp[chi])
        {
            if (!solve[chi])
            {
                solve[chi] = true;
                ans++;
            }
        }
    }

    cout << ans << endl;
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