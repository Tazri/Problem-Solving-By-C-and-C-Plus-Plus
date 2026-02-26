// link : https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/
#include <bits/stdc++.h>

class Solution
{
public:
    vector<int> getSneakyNumbers(vector<int> &nums)
    {
        vector<int> ans;
        ans.reserve(2);
        set<int> st;
        for (int &ni : nums)
        {
            if (st.count(ni))
                ans.push_back(ni);
            st.insert(ni);
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