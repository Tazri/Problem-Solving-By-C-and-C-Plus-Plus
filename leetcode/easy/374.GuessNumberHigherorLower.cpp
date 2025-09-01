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

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int g = 6;

int guess(int n)
{
    if (g < n)
        return -1;
    if (g > n)
        return 1;
    return 0;
}

class Solution
{
public:
    int guessNumber(int n)
    {
        int l = 1;
        int r = n;
        int ans = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int res = guess(mid);
            if (res == -1)
            {
                r = mid - 1;
            }
            else if (res == 1)
            {
                l = mid + 1;
            }
            else
            {
                return mid;
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.guessNumber(10) << endl;

    return 0;
}