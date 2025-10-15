// link : https://leetcode.com/problems/perfect-number/
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
    bool checkPerfectNumber(int num)
    {
        if (num == 1)
            return false;
        int sum = 0;

        for (int i = 1; i * i <= num; i++)
        {
            if (num % i != 0)
                continue;

            int b = num / i;
            sum += i;

            if (i == b || b == num)
                continue;
            sum += b;

            if (sum > num)
                return false;
        }

        return sum == num;
    }
};

int main()
{
    optimize();

    return 0;
}