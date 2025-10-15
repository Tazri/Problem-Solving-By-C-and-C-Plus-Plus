// link : https://codeforces.com/problemset/problem/705/A
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
    int n;

    cin >> n;

    if (n == 1)
    {
        cout << "I hate it" << endl;
        return 0;
    }
    else if (n == 2)
    {
        cout << "I hate that I love it" << endl;
        return 0;
    }

    string word = "hate";
    cout << "I " << word << " that";
    word = "love";
    for (int i = 2; i < n; i++)
    {
        cout << " I " << word << " that";
        word = word == "love" ? "hate" : "love";
    }

    cout << " I " << word << " it" << endl;
    return 0;
}