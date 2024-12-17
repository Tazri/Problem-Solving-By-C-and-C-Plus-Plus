// link : https://codeforces.com/problemset/problem/236/A
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

bool arr[26];

int main()
{
    optimize();
    string name;
    cin >> name;

    for (char ch : name)
    {
        int index = (int)ch - (int)'a';
        arr[index] = true;
    }

    int count = 0;
    for (bool i : arr)
    {
        if (i)
            count++;
    }

    cout << (count & 1 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
    return 0;
}