// link : https://qoj.ac/problem/7799
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

int digitSum(int d)
{
    int sum = 0;
    while (d)
    {
        sum += (d % 10);
        d /= 10;
    }
    return sum;
}

bool isPossible(vector<int> &v, int d)
{
    int n = v.size();
}

void program()
{
    int d;
    cin >> d;

    vector<int> mp(d + 123, 0);
    vector<int> dsums;
    int i = d;
    while (1)
    {
        int sum = digitSum(i);

        if (sum % d == 0)
        {
            cout << i << endl;
            return;
        }

        sum %= d;

        if (d % sum == 0)
        {
            int t = d / sum;
            for (int j = 0; j < t; j++)
                cout << i;
            cout << endl;
            return;
        }

        if (mp[sum] != 0)
        {
            i += d;
            continue;
        }

        int lagbe = d - sum;
        if (mp[lagbe] != 0)
        {
            cout << i << mp[lagbe] << endl;
            return;
        }

        lagbe = d % sum;

        if (mp[lagbe] != 0)
        {
            int t = d / sum;
            for (int j = 0; j < t; j++)
                cout << i;
            cout << mp[lagbe];
            cout << endl;
            return;
        }

        mp[sum] = i;
        dsums.push_back(sum);
        i += d;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}