// link : https://codeforces.com/problemset/problem/2050/A
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

void test()
{
    int n, capacity;

    cin >> n >> capacity;

    vector<string> words(n);

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    int totalFit = 0;
    for (string word : words)
    {
        if (word.size() <= capacity)
        {
            capacity -= word.size();
            totalFit++;
        }
        else
            break;
    }

    cout << totalFit << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}