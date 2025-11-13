// link: https://codeforces.com/contest/509/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;
    vector<vector<int>> v = vector(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        v[1][i] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            v[i][j] = v[i - 1][j] + v[i][j - 1];
        }
    }

    // for(int i = 0;i <= n;i++){
    //   for(int j = 0;j <= n;j++)cout<<v[i][j] << " ";
    //   cout << endl;
    // }
    cout << v[n][n] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}