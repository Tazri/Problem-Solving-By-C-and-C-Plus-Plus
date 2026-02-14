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
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> sorted;
        sorted.reserve(nums.size());
        int pi = n;

        for (int i = 0; i < n; i++)
            if (nums[i] >= 0)
            {
                pi = i;
                break;
            }

        int ni = pi - 1;
        if (pi >= n)
            ni = n - 1;
        else
            ni = pi - 1;
        cout << pi << " " << ni << endl;

        while (pi < n || ni >= 0)
        {
            if (pi < n && ni >= 0)
            {
                if (abs(nums[pi]) >= abs(nums[ni]))
                {
                    sorted.push_back(nums[ni] * nums[ni]);
                    ni--;
                }
                else
                {
                    sorted.push_back(nums[pi] * nums[pi]);
                    pi++;
                }
            }
            else if (pi < nums.size())
            {
                sorted.push_back(nums[pi] * nums[pi]);
                pi++;
            }
            else
            {
                sorted.push_back(nums[ni] * nums[ni]);
                ni--;
            }
        }

        return sorted;
    }
};