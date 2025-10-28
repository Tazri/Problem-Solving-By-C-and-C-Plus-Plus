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

int solve(int)
{
}

void program()
{
    int n, k;
    vector<int> cost(n + 1, 0);

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> cost[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
    }
}

int main()
{
    optimize();
    program();
    return 0;
}