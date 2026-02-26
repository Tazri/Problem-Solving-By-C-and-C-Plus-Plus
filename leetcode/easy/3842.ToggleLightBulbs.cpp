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
    vector<int> toggleLightBulbs(vector<int> &bulbs)
    {
        map<int, int> mp;

        for (int bi : bulbs)
        {
            mp[bi]++;
        }

        vector<int> ans;

        for (auto [key, time] : mp)
        {
            if (time & 1)
                ans.push_back(key);
        }

        return ans;
    }
};