// link : https://www.codechef.com/problems/HAPPYSTR
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

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

void test()
{
    string word;
    cin >> word;

    bool isHappy = false;
    int len = 0;

    for (char ch : word)
    {
        if (isVowel(ch))
        {
            len++;
        }
        else
        {
            len = 0;
        }

        if (len > 2)
        {
            isHappy = true;
            break;
        }
    }

    if (isHappy)
        cout << "Happy" << endl;
    else
        cout << "Sad" << endl;
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