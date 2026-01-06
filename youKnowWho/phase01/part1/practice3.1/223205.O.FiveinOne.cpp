// link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O
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

int getMax(vector<int> &v)
{
    return *max_element(v.begin(), v.end());
}
int getMin(vector<int> &v)
{
    return *min_element(v.begin(), v.end());
}

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int countPrime(vector<int> &v)
{
    int cnt = 0;
    for (int vi : v)
        if (isPrime(vi))
            cnt++;
    return cnt;
}

bool isPalindrome(int n)
{
    string s = to_string(n);

    for (int l = 0, r = s.size() - 1; l <= r; l++, r--)
        if (s[l] != s[r])
            return false;
    return true;
}

int countPalindrome(vector<int> &v)
{
    int cnt = 0;
    for (int vi : v)
        if (isPalindrome(vi))
            cnt++;
    return cnt;
}

int countDivisor(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        int d = n / i;
        cnt++;
        if (d != i)
            cnt++;
    }

    return cnt;
}

int getMaxDiv(vector<int> &v)
{
    int mx = countDivisor(v[0]);
    int ans = v[0];

    for (int vi : v)
    {
        int cnt = countDivisor(vi);

        if (cnt > mx)
        {
            mx = cnt;
            ans = vi;
        }
        else if (cnt == mx && vi > ans)
        {
            mx = cnt;
            ans = vi;
        }
    }

    return ans;
}

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;
    cout << "The maximum number : " << getMax(v) << endl;
    cout << "The minimum number : " << getMin(v) << endl;
    cout << "The number of prime numbers : " << countPrime(v) << endl;
    cout << "The number of palindrome numbers : " << countPalindrome(v) << endl;
    cout << "The number that has the maximum number of divisors : " << getMaxDiv(v) << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}