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

void insertAtHead(Node *&head, int data)
{
  // first create new node then
  Node *temp = new Node(data);
  // make (new node next) as equal to (privious node next)
  temp->next = head;
  // then make head is a new node
  head = temp;
}

void insertAtTail(Node *&tail, int data)
{
  // first create new node
  Node *temp = new Node(data);
  // Make our (head node -> next) as temp
  tail->next = temp;
  // always tail is pointing to the last node so, make tail as temp
  tail = temp;
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
  temp->next = insertLL;
}

void deleteNode(int position, Node *&head)
{
  // deleting the first position node
  if (position == 1)
  {
    Node *temp = head;
    head = head->next;
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
    pri->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}

void print(Node *&head)
{
  // first create new node and pointing our head to the new node
  Node *temp = head;
  // until temp -> (ka) next is null we will print
  while (temp != NULL)
  {
    cout << temp->data << " ";
    // after print update the temp as (second node )
    temp = temp->next;
  }
}

bool detectLoop(Node *head)
{
  if (head == NULL)
    return false;

  map<Node *, bool> visited;
  Node *temp = head;
  while (temp != NULL)
  {
    if (visited[temp] == true)
      return true;
    visited[temp] = true;
    temp = temp->next;
  }
  return false;
}

bool floydCycleDetectionAlgo(Node *head)
{
  if (head == NULL || head->next == NULL || head->next->next == NULL)
    return false;
  Node *fast = head;
  Node *slow = head;
  while (fast != NULL && slow != NULL)
  {
    fast = fast->next;
    if (fast != NULL)
      fast = fast->next;
    slow = slow->next;
    if (fast == slow)
      return true;
  }
  return false;
}

int main()
{
  Node *node1 = new Node(1);
  //  cout<< node1 -> data << endl;
  //  cout<< node1 -> next << endl;

  Node *head = node1;
  Node *tail = node1;
  insertAtTail(tail, 2);
  insertAtTail(tail, 3);
  insertAtTail(tail, 4);
  insertAtTail(tail, 5);
  insertAtMiddle(tail, head, 1, 0);
  tail->next = head->next;
  // print(head);
  // deleteNode(1, head);
  cout << endl;
  // print(head);
  if (floydCycleDetectionAlgo(head))
  {
    cout << "ddddddddd";
  }
}