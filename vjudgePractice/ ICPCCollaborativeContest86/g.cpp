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

bool isShare(int a, int b)
{
    if (a == 1)
        return false;

    if (a > b)
        return false;
    if (a == b)
        return true;

    vector<int> fact;
    for (int i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            fact.push_back(i);
            fact.push_back(a / i);
        }
    }

    for (int &fi : fact)
    {
        if (fi != 1 && b % fi == 0)
        {
            return true;
        }
    }

    return false;
}

int f(int n)
{
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (isShare(i, n))
        {
            cnt++;
        }
    }

    return cnt;
}

void program(int n)
{
    double mx = 0;
    int ansfk = 0;
    int ansk = 0;

    for (int k = 2; k <= n; k++)
    {
        int fk = f(k);

        double res = (double)(fk) / (double)(k);

        if (res > mx)
        {
            mx = res;
            ansfk = fk;
            ansk = k;
        }
    }

    cout << "n = " << n << " : " << ansfk << "/" << ansk << endl;
}

int main()
{
    optimize();

    program(100000);
    return 0;
}

/*
1-5 => 1/2
6-29 => 4/6
30-209 => 22/30
210-2309 => 162/210
2310 => 1839/2310
*/