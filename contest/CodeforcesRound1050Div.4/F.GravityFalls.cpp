// TODO : https://codeforces.com/contest/2148/problem/F
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
    vector<vector<int>> arrays(n);
    int cl = 0;
    vector<int> allMin(2 * 1e5);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arrays[i] = vector<int>(k);
        for (int j = 0; j < k; j++)
            cin >> arrays[i][j];
        cl = max(cl, k);
    }
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