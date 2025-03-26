// link : https://codeforces.com/problemset/problem/1775/A2
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

void printMid(string word)
{
    cout << word[0] << " ";
    for (int i = 1; i < word.size() - 1; i++)
    {
        cout << word[i];
    }
    cout << " " << word[word.size() - 1] << endl;
}

void printAAAB(string word)
{
    if (word[0] == 'a')
    {
        for (int i = 0; i < word.size() - 2; i++)
        {
            cout << word[i];
        }
        cout << " ";
        cout << word[word.size() - 2] << " ";
        cout << word[word.size() - 1] << endl;
    }
    else
    {
        cout << word[0] << " " << word[1] << " ";
        for (int i = 2; i < word.size(); i++)
        {
            cout << word[i];
        }
        cout << endl;
    }
}

void printAABAB(string word)
{
    int bs = 1;
    cout << word[0];
    for (int i = 1; i < word.size(); i++)
    {
        if (word[i] == 'b')
        {
            bs = i;
            break;
        }
        else
        {
            cout << word[i];
        }
    }

    cout << " ";
    for (int i = bs; i < word.size() - 1; i++)
    {
        cout << word[i];
    }
    cout << " ";
    cout << word[word.size() - 1] << endl;
}

void test()
{
    string word;
    cin >> word;
    int li = word.size() - 1;

    // if first and last character is equal
    if (word[0] == word[li])
    {
        printMid(word);
        return;
    }

    // if second is "b"
    if (word[1] == 'b')
    {
        printMid(word);
        return;
    }

    // count the b in middle
    int b = 0;
    for (int i = 1; i < li; i++)
    {
        if (word[i] == 'b')
            b++;
    }

    if (b == 0)
    {
        printAAAB(word);
        return;
    }

    if (word[0] == 'a')
    {
        printAABAB(word);
        return;
    }

    cout << word[0] << " " << word[1] << " ";
    for (int i = 2; i < word.size(); i++)
    {
        cout << word[i];
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