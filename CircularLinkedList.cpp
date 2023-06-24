#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constuctor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destuctor
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertNode(Node *&tail, int elm, int data)
{

    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != elm)
        {
            curr = curr->next;
        }
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(int elm, Node *&tail)
{
    if (tail == NULL)
    {
        return;
    }
    Node *pri = tail;
    Node *curr = pri->next;
    while (curr->data != elm)
    {
        pri = curr;
        curr = curr->next;
    }
    pri->next = curr->next;
    if (tail == curr)
    {
        tail = pri;
    }
    if (pri == curr)
    {
        tail = NULL;
    }
    curr->next = NULL;
    delete curr;
}

bool detectLoop(Node* head){
    if(head == NULL)
      return false;
    
    map<Node*,bool> visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true)
          return true;
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 63);
    insertNode(tail, 63, 56);
    insertNode(tail, 56, 52);
    // deleteNode(63, tail);
    return detectLoop(tail);
    print(tail);
    return 0;
}