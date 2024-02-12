#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int key)
    {
        data = key;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void insertAtHead(int data)
    {
        Node *newNode = new Node(data);

        if(head == NULL)
        {
            head = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        
    }

    void traversList()
    {
        Node *a = head;
        while( a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
    }
};

int main()
{
    LinkedList ll;

    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtHead(30);

    ll.traversList();
}