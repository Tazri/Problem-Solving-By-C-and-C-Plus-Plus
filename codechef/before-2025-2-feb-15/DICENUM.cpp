// link : https://www.codechef.com/problems/DICENUM?tab=statement
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

int getForm(int a, int b, int c)
{
    vector<int> arr(3);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a > b; });

    int num = (arr[0] * 100) + (arr[1] * 10) + arr[2];
    return num;
}

void program()
{
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    int a = getForm(a1, a2, a3);
    int b = getForm(b1, b2, b3);

    if (a > b)
    {
        cout << "Alice" << endl;
    }
    else if (b > a)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
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