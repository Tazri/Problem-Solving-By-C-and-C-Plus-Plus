// link : https://leetcode.com/problems/missing-number/
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
    int missingNumber(vector<int> &nums)
    {
        int miss = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            miss ^= nums[i];
            miss ^= i;
        }

        miss ^= nums.size();

        return miss;
    }
};