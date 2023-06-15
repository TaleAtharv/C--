#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *pre;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->pre = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int len(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->pre = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->pre = tail;
        tail->next = temp;
        tail = temp;
    }
}

void insertAtMiddle(Node *&tail, Node *&head, int poistion, int data)
{
    // if we want to insert at first poistion
    if (poistion == 1)
    {
        insertAtHead(head, data);
        return;
    }

    // create temp and point to the head
    Node *temp = head;
    int count = 1;
    while (count < poistion - 1)
    {
        // until to the poistion we are increasing the temp
        temp = temp->next;
        count++;
    }

    // inserting at last
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
    }

    Node *insertLL = new Node(data);
    insertLL->next = temp->next;
    temp->next->pre = insertLL;
    temp->next = insertLL;
    insertLL->pre = temp;
}

void deleteNode(int position, Node *&head)
{
    // deleting the first position node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->pre = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *pri = NULL;
        int count = 1;
        while (count < position)
        {
            pri = curr;
            curr = curr->next;
            count++;
        }
        curr->pre = NULL;
        pri->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    int n = len(head);
    insertAtHead(head, 7);
    insertAtHead(head, 8);
    insertAtTail(tail, 9);
    insertAtTail(tail, 9);
    insertAtTail(tail, 9);
    insertAtMiddle(tail, head, 4, 456);
    deleteNode(1, head);
    print(head);
}