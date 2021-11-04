/* Insertion at the End.

Algorithm:
INSEND(INFO,LINK,START,AVAIL,ITEM,LOC)
[This algorithm inserts an element at the end of Linked list]

step1: If AVAIL= NULL, then:
       Write: overflow & Exit
step2: Set New:=AVAIL & AVAIL:=LINK[AVAIL]
step3: Set INFO[NEW]:=ITEM, LINK[NEW]:=NULL
step4: Set PREV:= NULL, PTR:= START
step5: Repeat While PTR!= NULL :
       Set PREV:=PTR, PTR:=LINK[PTR]
step6: Set LINK[PREV]:= NEW
step7: Exit

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

    return 0;
}
