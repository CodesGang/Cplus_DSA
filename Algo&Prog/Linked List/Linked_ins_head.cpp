/*Insertion at beginning in linked list.

Algorithm:
INSBEG(INFO,LINK,START,AVAIL,ITEM,LOC)
[This algorithm inserts an element at the beginning of Linked list]

step1: If AVAIL= NULL, THEN:
       Write: overflow & Exit 
step2: Set NEW:=AVAIL,AVAIL:=LINK[AVAIL]
step3: Set INFO[NEW]:=ITEM
step4: Set LINK[NEW]:=START,START:=NEW
step5: Exit

Note: Below code contain insertion at end also!
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

int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    display(head);
    insertathead(head,4);
    display(head);

    return 0;
}
