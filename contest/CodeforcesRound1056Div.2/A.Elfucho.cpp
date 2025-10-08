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
    int w;
    cin >> w;

    int cnt = 0;
    int l = 0;

    while (w != 1)
    {
        cnt += (w / 2);

        l += (w / 2);
        w = (w + 1) / 2;
    }

    while (l != 1)
    {
        cnt += (l / 2);
        l = (l + 1) / 2;
    }

    if (l && w)
        cnt++;
    cout << cnt << endl;
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