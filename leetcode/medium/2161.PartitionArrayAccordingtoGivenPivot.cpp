// link : https://leetcode.com/problems/partition-array-according-to-given-pivot/

#include <bits/stdc++.h>

class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> left;
        left.reserve(nums.size());
        vector<int> right;
        right.reserve(nums.size());
        vector<int> eq;
        eq.reserve(nums.size());

        for (int &ni : nums)
        {
            if (ni < pivot)
                left.push_back(ni);
            else if (ni == pivot)
                eq.push_back(ni);
            else
                right.push_back(ni);
        }

        vector<int> ans;
        ans.reserve(nums.size());
        for (int &li : left)
            ans.push_back(li);
        for (int &ei : eq)
            ans.push_back(ei);
        for (int &ri : right)
            ans.push_back(ri);

        return ans;
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

int32_t main()
{
    optimize();

    return 0;
}