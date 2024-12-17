// link : https://codeforces.com/problemset/problem/339/A
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

int main()
{
    optimize();
    string expression;
    vector<int> numbers;
    cin >> expression;
    for (char ch : expression)
    {
        if (ch != '+')
        {
            numbers.push_back(ch - (int)'0');
        }
    }

    // sort it
    sort(numbers.begin(), numbers.end(), [](int a, int b)
         { return a < b; });

    cout << numbers[0];
    for (int i = 1; i < numbers.size(); i++)
    {
        cout << "+" << numbers[i];
    }
    cout << endl;
    return 0;
}