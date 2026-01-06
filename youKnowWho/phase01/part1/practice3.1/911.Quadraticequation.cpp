// link : https://eolymp.com/en/problems/911
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
    int d = (b * b) - 4 * a * c;

    if (d < 0)
    {
        cout << "No roots" << endl;
        return;
    }

    int rt = sqrt(d);
    int r1 = ((b * -1) + rt) / (2 * a);
    int r2 = ((b * -1) - rt) / (2 * a);

    if (r1 == r2)
        cout << "One root: " << r1 << endl;
    else
        cout << "Two roots: " << min(r1, r2) << " " << max(r1, r2) << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}