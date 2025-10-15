// link : https://leetcode.com/problems/find-greatest-common-divisor-of-array/
#include <bits/stdc++.h>

class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int mn = nums[0];
        int mx = nums[0];

        for (int ni : nums)
        {
            mn = min(mn, ni);
            mx = max(mx, ni);
        }

        return gcd(mn, mx);
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