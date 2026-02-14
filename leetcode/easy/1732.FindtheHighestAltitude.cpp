// linK: https://leetcode.com/problems/find-the-highest-altitude/
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
    int largestAltitude(vector<int> &gain)
    {
        int mx = max(gain.front(), 0);
        int prev = gain.front();
        ;
        for (int i = 1; i < gain.size(); i++)
        {
            mx = max(mx, prev + gain[i]);
            prev += gain[i];
        }

        return mx;
    }
};