/*Searching in Linked List.

Algorithm:
Search_LL(INFO,Link,START,ITEM,LOC)
[This algorithm find out the location of ITEM in the linked list]

step1: Set PTR:=START, flag:=0,lOC:=0
step2: Repeat 3 while PTR!=NULL:
step3: If ITEM :=INFO[PTR], then:
       Set FLAG:1,LOC:=PTR
       Else
        Write: Element does not exit
step4: Exit

Note: Below code contains insertion at beginning and end also!
Code:*/

#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;

    }
};

void insertathead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertattail(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    display(head);
    insertathead(head,4);
    display(head);
    cout<<search(head, 5)<<endl;

    return 0;
}
