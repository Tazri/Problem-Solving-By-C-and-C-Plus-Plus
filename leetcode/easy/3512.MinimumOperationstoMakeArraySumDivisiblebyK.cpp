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
    int minOperations(vector<int> &nums, int k)
    {
        int sum = 0;

        for (int &ni : nums)
            sum += ni;

        int ans = sum % k;
        return ans;
    }
};