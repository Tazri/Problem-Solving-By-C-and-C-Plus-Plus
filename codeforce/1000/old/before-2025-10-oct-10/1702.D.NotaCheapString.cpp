// link : https://codeforces.com/problemset/problem/1702/D
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

void program()
{
    int p;
    string s;
    cin >> s;
    cin >> p;
    vector<int> cnt((int)'z' - (int)'a' + 1, 0);
    vector<int> arr(s.size());
    vector<int> rem(s.size(), false);

    int price = 0;
    int i = 0;
    for (char ch : s)
    {
        arr[i] = i;
        int cp = (int)ch - (int)'a' + 1;

        price += cp;
        i++;
    }

    // now sort
    sort(arr.begin(), arr.end(), [&s](int ai, int bi)
         {
        int cia = (int)s[ai]-(int)'a';
        int bia = (int)s[bi] -(int)'a'; 
        return cia < bia; });

    int j = s.size() - 1;

    while (j >= 0)
    {
        if (price <= p)
            break;
        int li = arr[j];
        int cp = (int)s[li] - (int)'a' + 1;

        price -= cp;
        rem[li] = true;
        j--;
    }

    for (int i = 0; i < s.size(); i++)
        if (!rem[i])
            cout << s[i];
    cout << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}