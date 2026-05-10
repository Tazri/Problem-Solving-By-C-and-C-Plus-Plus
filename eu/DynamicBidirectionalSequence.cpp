#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

struct Node
{
    int data;
    Node *prev;
    Node *next;

    Node(int v)
    {
        data = v;
        prev = NULL;
        next = NULL;
    }
};

Node *head = NULL;
Node *tail = NULL;

void insertLeft(int v)
{
    if (head == NULL)
    {
        head = new Node(v);
        tail = head;
        return;
    }

    Node *nd = new Node(v);
    nd->next = head;
    head->prev = nd;
    head = nd;
}

void insertRight(int v)
{
    if (head == NULL)
    {
        head = new Node(v);
        tail = head;
        return;
    }

    Node *nd = new Node(v);
    tail->next = nd;
    nd->prev = tail;
    tail = nd;
}

void print()
{
    Node *curr = head;

    bool isFirst = true;
    while (curr != NULL)
    {
        if (isFirst)
        {
            cout << curr->data;
            isFirst = false;
        }
        else
            cout << " " << curr->data;

        curr = curr->next;
    }

    cout << endl;
}

void insertAfterP(int p, int x)
{
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == p)
            break;
        curr = curr->next;
    }

    if (curr == NULL)
        return;

    if (curr == tail)
    {
        insertRight(x);
        return;
    }

    Node *nd = new Node(x);
    Node *next = curr->next;
    nd->prev = curr;
    curr->next = nd;
    nd->next = next;
    next->prev = nd;
}

void deleteX(int x)
{
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
            break;
        curr = curr->next;
    }

    if (curr == NULL)
        return;

    if (curr == head && curr == tail)
    {
        head = NULL;
        tail = NULL;
        delete (curr);
        return;
    }

    if (curr == head)
    {
        head = curr->next;
        head->prev = NULL;
        delete (curr);
        return;
    }

    if (curr == tail)
    {
        tail = tail->prev;
        tail->next = NULL;
        delete curr;
        return;
    }

    Node *prev = curr->prev;
    Node *next = curr->next;
    prev->next = next;
    next->prev = prev;
    delete curr;
}

void F(int x)
{
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
            break;
        curr = curr->next;
    }

    if (curr == NULL || curr->next == NULL)
    {
        cout << -1 << endl;
        return;
    }

    cout << curr->next->data << endl;
}

void B(int x)
{
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
            break;
        curr = curr->next;
    }

    if (curr == NULL || curr->prev == NULL)
    {
        cout << -1 << endl;
        return;
    }
    cout << curr->prev->data << endl;
}

void program()
{
    int q;
    cin >> q;

    while (q--)
    {
        char ch;
        cin >> ch;

        if (ch == 'L')
        {
            int v;
            cin >> v;
            insertLeft(v);
        }
        else if (ch == 'S')
        {
            print();
        }
        else if (ch == 'R')
        {
            int v;
            cin >> v;
            insertRight(v);
        }
        else if (ch == 'I')
        {
            int p, x;
            cin >> p >> x;
            insertAfterP(p, x);
        }
        else if (ch == 'D')
        {
            int x;
            cin >> x;
            deleteX(x);
        }
        else if (ch == 'F')
        {
            int x;
            cin >> x;
            F(x);
        }
        else if (ch == 'B')
        {
            int x;
            cin >> x;
            B(x);
        }
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    program();
    return 0;
}