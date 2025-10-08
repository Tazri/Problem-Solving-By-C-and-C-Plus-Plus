// link : https://leetcode.com/problems/third-maximum-number/?envType=problem-list-v2&envId=array
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
    int thirdMax(vector<int> &nums)
    {
        set<int> st;
        vector<int> unq;
        unq.reserve(4);

        for (int i = 0; i < nums.size(); i++)
        {
            if (st.count(nums[i]))
            {
                continue;
            }

            unq.push_back(nums[i]);
            st.insert(nums[i]);
            sort(unq.begin(), unq.end(), [](int a, int b)
                 { return a > b; });
            if (unq.size() > 3)
                unq.pop_back();
        }

        if (unq.size() == 3)
            return unq.back();
        return unq[0];
    }
};