// link : https://leetcode.com/problems/build-array-from-permutation/
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
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> ans(nums.size());
        for (int i = 0; i < ans.size(); i++)
        {
            ans[i] = nums[nums[i]];
        }

        return ans;
    }
};