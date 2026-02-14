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
    int pivotIndex(vector<int> &nums)
    {
        int n = nums.size();

        if (nums.size() == 0 && nums.back() - nums.front() == 0)
            return 0;

        for (int i = 1; i < n; i++)
            nums[i] += nums[i - 1];

        for (int i = 0; i < n; i++)
        {
            int curr = nums[i] - (i == 0 ? 0 : nums[i - 1]);
            int left = nums[i] - curr;
            ;
            int right = nums.back() - nums[i];
            if (i == 2)
            {
                cout << "left : " << left << " right : " << right << endl;
            }
            if (left == right)
                return i;
        }

        return -1;
    }
};