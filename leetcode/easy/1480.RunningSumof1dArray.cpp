// link : https://leetcode.com/problems/running-sum-of-1d-array/description/

#include <bits/stdc++.h>

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> res(nums.size());
        res[0] = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            res[i] = res[i - 1] + nums[i];
        }

        return res;
    }
};
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