// link : https://codeforces.com/problemset/problem/1816/B
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
    int e = 2;
    int o = 1;

    vector<vector<int>> arr(2, vector<int>(n));

    for (int i = 1; i < n; i += 2, e += 2)
        arr[0][i] = e;

    for (int i = n - 2; i >= 0; i -= 2, e += 2)
        arr[0][i] = e;

    for (int i = 0; i < n; i += 2, o += 2)
        arr[1][i] = o;

    for (int i = 1; i < n; i += 2, o += 2)
        arr[1][i] = o;

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i][0];
        for (int j = 1; j < arr[i].size(); j++)
            cout << " " << arr[i][j];
        cout << endl;
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