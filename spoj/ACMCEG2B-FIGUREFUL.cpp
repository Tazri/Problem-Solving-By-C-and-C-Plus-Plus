// link : https://www.spoj.com/problems/ACMCEG2B/en/
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
    map<string, string> mp;

    for (int i = 0; i < n; i++)
    {
        string c1, c2, name;
        cin >> c1 >> c2 >> name;
        string key = c1 + " " + c2;

        mp[key] = name;
    }

    int q;
    cin >> q;

    while (q--)
    {
        string c1, c2;
        cin >> c1 >> c2;
        string key = c1 + " " + c2;
        cout << mp[key] << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}