// link : https://codeforces.com/contest/320/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    string nums;

    cin >> nums;

    if (nums[0] == '4')
    {
        cout << "NO" << endl;
        return;
    }

    for (char ch : nums)
        if (ch != '1' && ch != '4')
        {
            cout << "NO" << endl;
            return;
        }

    int n = nums.size();

    for (int i = 2; i < n; i++)
    {
        if (nums[i] == '4' && nums[i - 1] == '4' && nums[i - 2] == '4')
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    optimize();
    // int t;
    // cin >> t;
    // while(t--)
    program();
    return 0;
}