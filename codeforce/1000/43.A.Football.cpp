// link : https://codeforces.com/problemset/problem/43/A
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
    map<string, int> mp;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        mp[name]++;

        mx = max(mx, mp[name]);
    }

    for (auto [name, total] : mp)
    {
        if (total == mx)
        {
            cout << name << endl;
            return;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}