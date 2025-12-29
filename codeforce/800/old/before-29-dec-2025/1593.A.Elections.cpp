// link : https://codeforces.com/problemset/problem/1593/A
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
    int a, b, c;
    cin >> a >> b >> c;

    int mx = max(a, max(b, c));

    int cnt = 0;
    if (mx == a)
        cnt++;
    if (mx == b)
        cnt++;
    if (mx == c)
        cnt++;

    if (a != mx)
        cout << (mx - a) + 1;
    else if (cnt == 1)
        cout << 0;
    else
        cout << 1;

    if (b != mx)
        cout << " " << (mx - b) + 1;
    else if (cnt == 1)
        cout << " " << 0;
    else
        cout << " " << 1;

    if (c != mx)
        cout << " " << (mx - c) + 1;
    else if (cnt == 1)
        cout << " " << 0;
    else
        cout << " " << 1;
    cout << endl;
}

int main()
{
    optimize();
    int n;
    cin >> n;
    while (n--)
        program();
    return 0;
}