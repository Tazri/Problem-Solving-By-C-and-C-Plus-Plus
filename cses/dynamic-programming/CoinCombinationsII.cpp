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

vector<int> c;

int solve(int curr, int x, int i)
{
    if (curr == x)
        return 1;
    if (curr > x)
        return 0;

    if (i >= c.size())
    {
        return 0;
    }

    int sum = curr;

    // take
    sum += solve(curr + c[i], x, i);
    sum += solve(curr, x, i + 1);

    return sum;
}

void program()
{
    int n, x;
    cin >> n >> x;

    c = vector<int>(n);
    for (int &ci : c)
        cin >> ci;

    sort(c.begin(), c.end());

    int res = solve(0, x, 0);

    cout << res << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}