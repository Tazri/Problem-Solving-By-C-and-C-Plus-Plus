// link : https://codeforces.com/problemset/problem/2047/B
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
    int n;
    cin >> n;
    unordered_map<char, int> freq;
    vector<char> strArr;
    string word = "";

    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;

        if (freq.count(ch))
        {
            freq[ch]++;
        }
        else
        {
            strArr.push_back(ch);
            freq[ch] = 1;
        }
        word += ch;
    }

    if (strArr.size() <= 1)
    {
        cout << word << endl;
        return;
    }

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < strArr.size(); i++)
    {
        char ch = strArr[i];
        int has = freq[ch];
        char minChar = strArr[minIndex];
        char maxChar = strArr[maxIndex];

        if (has > freq[maxChar])
        {
            maxIndex = i;
        }

        if (has < freq[minChar])
        {
            minIndex = i;
        }
    }

    if (minIndex == maxIndex)
    {
        // find the different min index
        for (int i = 0; i < strArr.size(); i++)
        {
            if (strArr[i] != strArr[maxIndex])
            {
                minIndex = i;
                break;
            }
        }
    }

    char minChar = strArr[minIndex];
    char maxChar = strArr[maxIndex];

    for (int i = 0; i < n; i++)
    {
        if (word[i] == minChar)
        {
            word[i] = maxChar;
            break;
        }
    }

    cout << word << endl;
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