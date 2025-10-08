// link : https://leetcode.com/problems/max-consecutive-ones/?envType=problem-list-v2&envId=array
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
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int mxCount = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i])
                count++;
            else
            {
                mxCount = max(count, mxCount);
                count = 0;
            }
        }

        mxCount = max(count, mxCount);
        return mxCount;
    }
};