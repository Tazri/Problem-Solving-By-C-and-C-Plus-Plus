// link : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/submissions/1703426182/
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

class Solution
{
public:
    bool take(vector<int> &arr, int cap, int days)
    {
        int sum = 0;
        int t = 0;
        for (int &ai : arr)
        {
            if (ai > cap)
            {
                return false;
            }

            if (sum + ai > cap)
            {
                t++;
                sum = ai;
                continue;
            }
            sum += ai;
        }

        t++;

        return t <= days;
    }

    int shipWithinDays(vector<int> &weights, int days)
    {
        int sum = 0;
        for (int &wi : weights)
            sum += wi;

        int l = weights.back();
        int r = sum;
        int ans = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (take(weights, mid, days))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        return ans;
    }
};

void program()
{
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int &ai : arr)
        cin >> ai;

    Solution s;
    cout << s.shipWithinDays(arr, d) << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}