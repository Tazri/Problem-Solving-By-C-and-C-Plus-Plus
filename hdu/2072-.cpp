// link : https://acm.hdu.edu.cn/showproblem.php?pid=2072
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
    set<string> st;

    string line;
    string word;
    while (true)
    {
        getline(cin, line);

        if (line == "#")
            break;

        stringstream scin(line);

        while (scin >> word)
            st.insert(word);

        cout << st.size() << endl;
        st.clear();
    }
}

int main()
{
    optimize();
    program();
    return 0;
}