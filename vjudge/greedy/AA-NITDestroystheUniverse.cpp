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
    int prev;
    cin >> prev;

    prev = prev == 0 ? 0 : 1;

    int snap = 0;

    for (int i = 1; i < n; i++)
    {
        int ai;
        cin >> ai;

        ai = ai == 0 ? 0 : 1;

        if (prev == ai)
        {
            continue;
        }

        if (prev)
        {
            snap++;
        }
        prev = ai;
    }

    if (prev)
        snap++;

    cout << min(2, snap) << endl;
    return;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}