// link : https://codeforces.com/problemset/problem/919/B
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

int sd(int n)
{
    int sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

void program()
{
    int k;
    cin >> k;
    int num = 10;

    for (int i = 1; i <= k; i++)
    {
        num += 9;
        int sum = sd(num);

        if (sum == 10)
            continue;

        while (sum != 10)
        {
            num += 9;
            sum = sd(num);
        }
    }

    cout << num << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}