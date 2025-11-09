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

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int l = 0;

        for (int i = 0; i < nums.size(); i++)
            if (nums[i] & 1)
            {
                l = i;
                break;
            }

        for (int r = l + 1; r < nums.size(); r++)
            if (nums[r] % 2 == 0)
            {
                swap(nums[r], nums[l]);
                l++;
            }

        return nums;
    }
};

int main()
{
    optimize();

    return 0;
}