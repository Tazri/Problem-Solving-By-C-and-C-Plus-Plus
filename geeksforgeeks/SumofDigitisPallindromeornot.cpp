// links : https://www.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1
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
    int isDigitSumPalindrome(int n)
    {
        int sum = 0;

        while (n)
        {
            int d = n % 10;
            sum += d;
            n /= 10;
        }

        if (sum < 10)
        {
            return true;
        }

        int ld = sum % 10;
        int fd = sum / 10;

        if (ld == fd)
            return true;

        return 0;
    }
};

int main()
{
    optimize();
    Solution *test = new Solution();

    cout << test->isDigitSumPalindrome(98) << endl;
    return 0;
}