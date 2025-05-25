// link : https://vjudge.net/problem/HDU-1004/origin
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

void program(int n)
{
    map<string, int> mp;
    vector<string> colors(n);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> colors[i];
        mp[colors[i]]++;

        mx = max(mp[colors[i]], mx);
    }

    for (string color : colors)
    {
        if (mp[color] == mx)
        {
            cout << color << endl;
            return;
        }
    }
}

int main()
{
    optimize();
    int n;
    cin >> n;
    while (n)
    {
        program(n);
        cin >> n;
    }
    return 0;
}