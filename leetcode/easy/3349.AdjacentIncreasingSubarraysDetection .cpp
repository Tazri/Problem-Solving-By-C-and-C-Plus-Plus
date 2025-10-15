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
    bool hasIncreasingSubarrays(vector<int> &nums, int k)
    {
        if (nums.size() <= 2)
        {
            return true;
        }
        int li = 0;
        int ri = k;
        ++li;
        ++ri;
        int len = 1;
        while (ri < nums.size())
        {
            if (nums[li - 1] < nums[li] && nums[ri - 1] < nums[ri])
                len++;
            else
                len = 1;

            li++;
            ri++;
            if (len >= k)
                return true;
        }

        return false;
    }
};