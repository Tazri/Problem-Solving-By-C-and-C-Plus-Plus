// link : https://codeforces.com/problemset/problem/2005/A
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

void printNTime(char c, int t)
{
    for (int i = 0; i < t; i++)
    {
        cout << c;
    }
}

string word = "aeiou";
void test()
{
    int n;
    cin >> n;

    if (n <= 5)
    {
        int wi = 0;
        for (int i = 0; i < n; i++)
        {
            cout << word[wi++];
            wi %= word.size();
        }
        cout << endl;
        return;
    }

    int minPrint = n / 5;
    int extra = n % 5;
    int notExtra = 5 - extra;
    int wi = 0;
    for (int i = 0; i < notExtra; i++)
    {
        printNTime(word[wi], minPrint);
        wi++;
    }

    // now print extra
    for (int i = 0; i < extra; i++)
    {
        printNTime(word[wi], minPrint);
        cout << word[wi];
        wi++;
    }
    cout << endl;
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