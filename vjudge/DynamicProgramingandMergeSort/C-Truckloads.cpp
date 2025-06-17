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

map<int, int> mp;

int solve(int n, int load)
{
    if (n <= load)
    {
        return 1;
    }

    if (mp.count(n))
    {
        return mp[n];
    }

    int h1 = n / 2;
    int h2 = n / 2;
    if (n & 1)
        h2++;
    int res = solve(h1, load) + solve(h2, load);
    mp[n] = res;
    return res;
}

void program(int n, int load)
{
    int res = solve(n, load);

    cout << res << endl;
    mp.clear();
}

int main()
{
    optimize();
    int n, load;
    while (cin >> n >> load)
        program(n, load);
    return 0;
}