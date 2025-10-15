// link : https://leetcode.com/problems/set-matrix-zeroes/
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

int main()
{
    optimize();

    return 0;
}
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        set<int> marki;
        set<int> markj;

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    marki.insert(i);
                    markj.insert(j);
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (marki.count(i) || markj.count(j))
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};