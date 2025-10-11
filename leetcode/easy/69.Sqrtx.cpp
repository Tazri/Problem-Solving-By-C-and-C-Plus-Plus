class Solution
{

public:
    int mySqrt(int x)
    {
        long long n = (long long)x;
        long long l = 1;
        long long r = x;

        while (l <= r)
        {
            long long mid = l + (r - l) / 2;

            if (mid * mid <= n)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (l * l == n)
            return l;
        return l - 1;
    }
};