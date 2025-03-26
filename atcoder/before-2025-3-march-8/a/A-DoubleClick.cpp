// link : https://atcoder.jp/contests/abc297/tasks/abc297_a?lang=en
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
    int n, d;
    cin >> n >> d;

    int prev;
    int fired = -1;
    cin >> prev;

    for (int i = 1; i < n; i++)
    {
        int now;
        cin >> now;
        int diff = now - prev;
        prev = now;

        if (diff <= d && fired == -1)
        {
            fired = now;
        }
    }

    cout << fired << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}