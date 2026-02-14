// linK: https://leetcode.com/problems/contiguous-array/

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

int32_t main()
{
    optimize();

    return 0;
}
class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> pre;
        pre.reserve(n + 1);
        pre.push_back(0);

        for (int &ni : nums)
            if (ni == 0)
                pre.push_back(-1);
            else
                pre.push_back(1);

        for (int i = 1; i <= n; i++)
            pre[i] += pre[i - 1];

        map<int, int> mp;
        mp[0] = 0;
        int mx = 0;
        for (int r = 1; r <= n; r++)
        {
            int lm1 = pre[r];

            if (mp.count(lm1))
            {
                int l = mp[lm1] + 1;
                int len = r - l + 1;
                mx = max(len, mx);
            }
            else
            {
                mp[pre[r]] = r;
            }
        }

        return mx;
    }
};