#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}

class Solution
{
public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {

        int n = matrix.size();
        int m = matrix[0].size();

        for (int k = 0; k < n; k++)
        {
            set<int> st;
            for (int i = k, j = 0; i < n && j < m; i++, j++)
            {
                st.insert(matrix[i][j]);
            }
            if (st.size() > 1)
                return false;
        }

        for (int k = 0; k < n; k++)
        {
            set<int> st;
            for (int i = 0, j = k; i < n && j < m; i++, j++)
            {
                st.insert(matrix[i][j]);
            }
            if (st.size() > 1)
                return false;
        }
        return true;
    }
};