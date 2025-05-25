// link : https://atcoder.jp/contests/abc313/tasks/abc313_a?lang=en
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
    int first;
    cin >> first;

    int mx = first;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        int ai;
        cin >> ai;
        mx = max(mx, ai);

        if (first == ai)
            cnt++;
    }

    if (mx == first)
    {
        if (cnt)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return;
    }

    int d = mx - first;
    cout << d + 1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}