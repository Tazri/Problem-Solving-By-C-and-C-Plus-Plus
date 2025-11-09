// link : https://codeforces.com/contest/723/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    vector<int> v(3);

    cin >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());

    int ans = abs(v[0] - v[1]) + abs(v[2] - v[1]);

    cout << ans << endl;
}

int main()
{
    optimize();
    program();

    return 0;
}