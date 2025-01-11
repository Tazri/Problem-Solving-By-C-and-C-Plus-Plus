// link : https://codeforces.com/problemset/problem/1915/D
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

#define isV(a) (a == 'a' || a == 'e')
#define isC(a) (a != 'a' && a != 'e')

bool isSyllables(char a, char b, char c)
{
    return isC(a) && isV(b) && isC(c);
}

bool isSyllables(char a, char b)
{
    return isC(a) && isV(b);
}

string makeWord(char a, char b, char c)
{
    string word = "abc";
    word[0] = a;
    word[1] = b;
    word[2] = c;
    return word;
}

string makeWord(char a, char b)
{
    string word = "ab";
    word[0] = a;
    word[1] = b;
    return word;
}

void test()
{
    vector<string> words;
    int n;
    string s;
    cin >> n;
    cin >> s;

    for (int i = n - 1; i >= 0; i--)
    {
        // check it's three or not
        if (i - 2 >= 0)
        {
            char a = s[i - 2];
            char b = s[i - 1];
            char c = s[i];
            ;
            if (isSyllables(a, b, c))
            {

                string w = makeWord(a, b, c);
                words.push_back(w);
                i -= 2;
                continue;
            }
        }

        if (i - 1 >= 0)
        {
            char a = s[i - 1];
            char b = s[i];

            if (isSyllables(a, b))
            {
                string w = makeWord(a, b);
                words.push_back(w);
                i--;
            }
        }
    }

    // print words in reverse way
    int size = words.size();
    if (size == 0)
    {
        return;
    }

    cout << words[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        cout << "." << words[i];
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