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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    vector<int> rowmin(n, 0);
    vector<int> mxcol(m, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        int mn = arr[i][0];

        for (int j = 1; j < m; j++)
        {
            cin >> arr[i][j];
            mn = min(arr[i][j], mn);
        }
        rowmin[i] = mn;
    }

    for (int j = 0; j < m; j++)
    {
        mxcol[j] = arr[0][j];

        for (int i = 0; i < n; i++)
        {
            mxcol[j] = max(mxcol[j], arr[i][j]);
        }
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == mxcol[j] && arr[i][j] == rowmin[i])
                cnt++;
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}