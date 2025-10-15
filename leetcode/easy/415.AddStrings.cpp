// link: https://leetcode.com/problems/add-strings/
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
    string addStrings(string num1, string num2)
    {
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        while (num1.size() < num2.size())
            num1.push_back('0');
        while (num2.size() < num1.size())
            num2.push_back('0');

        // cout << num1 << " " << num2 << endl;

        int carry = 0;
        string res = "";
        for (int i = 0; i < num1.size(); i++)
        {
            char s1 = num1[i];
            char s2 = num2[i];

            int n1 = (int)(s1) - (int)'0';
            int n2 = (int)(s2) - (int)'0';
            int sum = n1 + n2 + carry;

            int l = sum % 10;
            sum /= 10;
            carry = sum;

            char ch = (int)((int)'0' + l);
            res.push_back(ch);
        }

        while (carry)
        {
            int l = carry % 10;
            carry /= 10;
            char ch = (int)((int)'0' + l);
            res.push_back(ch);
        }

        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    optimize();
    Solution sol;
    string n1, n2;
    cin >> n1 >> n2;

    string res = sol.addStrings(n1, n2);
    cout << res << endl;
    return 0;
}