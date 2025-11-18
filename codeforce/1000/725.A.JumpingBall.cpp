// link : https://codeforces.com/problemset/problem/725/A
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
    string s;
    cin >> s;
    int ans = 0;

    for (char ch : s)
        if (ch == '<')
            ans++;
        else
            break;
    reverse(s.begin(), s.end());

    for (char ch : s)
        if (ch == '>')
            ans++;
        else
            break;

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}