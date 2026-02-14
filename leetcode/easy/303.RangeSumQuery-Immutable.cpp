// linK: https://leetcode.com/problems/range-sum-query-immutable/
// link :
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
class NumArray
{
public:
    int n;
    vector<int> pre;
    NumArray(vector<int> &nums)
    {
        n = nums.size();
        pre = vector<int>(n + 1);

        for (int i = 0; i < n; i++)
        {
            pre[i + 1] = nums[i];
        }

        for (int i = 1; i <= n; i++)
        {
            pre[i] += pre[i - 1];
        }
    }

    int sumRange(int left, int right)
    {
        left++;
        right++;
        return pre[right] - pre[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */