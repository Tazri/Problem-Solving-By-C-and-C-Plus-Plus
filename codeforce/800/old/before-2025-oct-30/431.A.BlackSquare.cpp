// link : https://codeforces.com/problemset/problem/431/A
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
    vector<int> a(5);

    for (int i = 1; i <= 4; i++)
        cin >> a[i];
    int ans = 0;
    string s;

    cin >> s;

    for (char ch : s)
        ans += a[(int)ch - (int)'0'];
    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}