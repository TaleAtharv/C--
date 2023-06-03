#include<bits/stdc++.h>
using namespace std;

class Node {
    public : 
      int data;
      Node* next;

      Node(int data)
      {
        this -> data = data;
        this -> next = NULL;
      }
};

void insertAtHead(Node* &head, int data)
{
   Node* temp = new Node(data);
   temp -> next = head;
   head = temp;
}

void insertAtTail(Node* &tail, int data)
{
  Node* temp = new Node(data);
  tail -> next = temp;
  tail = temp;
}

void print(Node* &head)
{
  Node* temp = head;
  while(temp != NULL)
  {
    cout<< temp -> data << " ";   
    temp = temp -> next;
  }
}

int main(){
   Node* node1 = new Node(10);
   cout<< node1 -> data << endl;
   cout<< node1 -> next << endl;

   Node* head = node1;
   Node* tail = node1;
   insertAtTail(tail,12);
   insertAtTail(tail,132);
   insertAtTail(tail,5465);
   insertAtTail(tail,954);
   insertAtTail(tail,448);
   insertAtTail(tail,9589);
   print(head);
}