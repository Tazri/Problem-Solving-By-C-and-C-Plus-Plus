// link : https://codeforces.com/problemset/problem/785/A
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

int main()
{
    optimize();
    unordered_map<string, int> m;
    m["Tetrahedron"] = 4;
    m["Cube"] = 6;
    m["Octahedron"] = 8;
    m["Dodecahedron"] = 12;
    m["Icosahedron"] = 20;

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string k;
        cin >> k;
        if (m.count(k))
            ans += m[k];
    }

    cout << ans << endl;
    return 0;
}