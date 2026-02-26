#include <bits/stdc++.h>

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int mx = *max_element(candies.begin(), candies.end());

        int n = candies.size();

        vector<bool> ans(n);

        for (int i = 0; i < n; i++)
        {
            ans[i] = candies[i] + extraCandies >= mx;
        }

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