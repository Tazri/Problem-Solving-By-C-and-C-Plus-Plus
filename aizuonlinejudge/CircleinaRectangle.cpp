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
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;

    if (x + r > w || x - r < 0 || y + r > h || y - r < 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}