// link : https://leetcode.com/problems/move-zeroes/?envType=problem-list-v2&envId=array
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
    void moveZeroes(vector<int> &nums)
    {
        int li = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                li = i;
                break;
            }
        }

        if (li == -1)
            return;

        int ri = li;

        while (ri < nums.size())
        {
            if (nums[ri] == 0)
            {
                ri++;
                continue;
            }

            // swap
            swap(nums[li], nums[ri]);
            ri++;
            li++;
        }
        return;
    }
};