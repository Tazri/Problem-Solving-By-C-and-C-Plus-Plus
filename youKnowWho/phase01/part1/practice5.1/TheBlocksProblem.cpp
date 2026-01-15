// link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=37&mosmsg=Submission+received+with+ID+30925907
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

int n;
vector<int> pos;
vector<vector<int>> blocks;

void print()
{
    for (int i = 0; i < n; i++)
    {
        cout << i << ":";

        for (int j = 0; j < blocks[i].size(); j++)
            cout << " " << blocks[i][j];
        cout << endl;
    }
}

void moveAOntoB(int a, int b)
{
    if (pos[a] == pos[b])
        return;

    int av = pos[a];

    while (blocks[av].back() != a)
    {
        int back = blocks[av].back();
        blocks[av].pop_back();
        blocks[back].push_back(back);
        pos[back] = back;
    }

    int bv = pos[b];

    while (blocks[bv].back() != b)
    {
        int back = blocks[bv].back();
        blocks[bv].pop_back();
        blocks[back].push_back(back);
        pos[back] = back;
    }

    blocks[bv].push_back(a);
    pos[a] = bv;
    blocks[av].pop_back();
}

void moveAOverB(int a, int b)
{
    if (pos[a] == pos[b])
        return;

    int av = pos[a];

    while (blocks[av].back() != a)
    {
        int back = blocks[av].back();
        blocks[av].pop_back();
        blocks[back].push_back(back);
        pos[back] = back;
    }

    int bv = pos[b];
    blocks[bv].push_back(a);
    pos[a] = bv;
    blocks[av].pop_back();
}

void pileAOverB(int a, int b)
{
    if (pos[a] == pos[b])
        return;

    vector<int> pile;
    int apos = pos[a];

    while (blocks[apos].back() != a)
    {
        pile.push_back(blocks[apos].back());
        blocks[apos].pop_back();
    }

    pile.push_back(a);
    blocks[apos].pop_back();

    int bpos = pos[b];
    while (pile.size())
    {
        blocks[bpos].push_back(pile.back());
        pos[pile.back()] = bpos;
        pile.pop_back();
    }
}

void pileAOntoB(int a, int b)
{
    if (pos[a] == pos[b])
        return;
    int apos = pos[a];
    int bpos = pos[b];

    while (blocks[bpos].back() != b)
    {
        int back = blocks[bpos].back();
        blocks[bpos].pop_back();
        blocks[back].push_back(back);
        pos[back] = back;
    }

    vector<int> pile;
    while (blocks[apos].back() != a)
    {
        pile.push_back(blocks[apos].back());
        blocks[apos].pop_back();
    }
    blocks[apos].pop_back();
    pile.push_back(a);

    while (pile.size())
    {
        blocks[bpos].push_back(pile.back());
        pos[pile.back()] = bpos;
        pile.pop_back();
    }
}

void program()
{
    cin >> n;
    blocks = vector<vector<int>>(n);
    pos = vector<int>(n);
    for (int i = 0; i < n; i++)
    {
        blocks[i].push_back(i);
        pos[i] = i;
    }

    string op;
    while (true)
    {
        cin >> op;

        if (op == "quit")
            break;

        int a, b;
        string type;
        cin >> a >> type >> b;

        if (op == "move")
        {
            if (type == "onto")
                moveAOntoB(a, b);
            else if (type == "over")
                moveAOverB(a, b);
        }
        else if (op == "pile")
        {
            if (type == "onto")
                pileAOntoB(a, b);
            else if (type == "over")
                pileAOverB(a, b);
        }
    }

    print();
}

int32_t main()
{
    optimize();
    program();
    return 0;
}