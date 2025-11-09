// link : https://codeforces.com/problemset/problem/1097/B
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

vector<int> a;
int n;
bool isReach = false;
int mod = 360;

void dfs(int i, int point)
{
    if (isReach)
        return;

    if (i >= n)
    {
        if (point == 0)
            isReach = true;
        return;
    }

    int p1 = point + a[i];
    int p2 = point - a[i];
    p1 = ((p1 % mod) + mod) % mod;
    p2 = ((p2 % mod) + mod) % mod;
    dfs(i + 1, p1);
    dfs(i + 1, p2);
}

void program()
{
    cin >> n;
    a = vector<int>(n);

    for (int &ai : a)
        cin >> ai;

    dfs(0, 0);

    if (isReach)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}