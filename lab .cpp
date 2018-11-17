#include<iostream>
using namespace std;

typedef struct ListNode
{
    int data;
    struct ListNode *next;
}*nodeptr;

nodeptr head = NULL,curr,newNode;

void addData(int itm)
{
    nodeptr newNode=new ListNode;
    newNode->data=itm;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        curr->next=newNode;
    }
    curr=newNode;
}

void insertFirst(int itm)
{
    nodeptr newNode=new ListNode;
    newNode->data=itm;
    newNode->next=NULL;

    newNode->next=head;
    head=newNode;
}

void display(nodeptr p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void insertMiddle(nodeptr p,int node,int itm)
{
    nodeptr newNode=new ListNode;
    newNode->data=itm;
    newNode->next=NULL;

    while(p->data!=node && p->next!=NULL)
    {
        p=p->next;
    }
    if(p->data==node)
    {
        newNode->next=p->next;
        p->next=newNode;
    }
}

void insertLast(int itm,nodeptr p)
{
    nodeptr newNode=new ListNode;
    newNode->data=itm;
    newNode->next=NULL;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=newNode;
}

void deleteFirst(nodeptr p)
{
    head=p->next;
    delete p;
}

void deletionMiddle(nodeptr p,int itm)
{
    nodeptr dptr;
    while(p->next->data!=itm && p->next!=NULL)
    {
        p=p->next;
    }
    if(p->next->data==itm)
    {
        dptr=p->next;
        p->next=dptr->next;
        delete dptr;
    }
}

void deleteLast(nodeptr p)
{
    nodeptr dptr;
    while(p->next->next!=NULL)
    {
        p=p->next;
    }
    dptr=p->next;
    p->next=NULL;
    delete dptr;
}
int main()
{
    int n,i,item,nd;
    cout<<"Enter number of nodes: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cout<<"Enter value: ";
        cin>>item;
        addData(item);

    }
    cout<<"Printing...."<<endl;
    display(head);
    cout<<endl;
    cout<<"Insertion at first"<<endl;
    cout<<"Enter value: ";
    cin>>item;
    insertFirst(item);
    cout<<"Printing...."<<endl;
    display(head);
    cout<<"\nAfter which node you want to insert: ";
    cin>>nd;
    cout<<"Enter value: ";
    cin>>item;
    insertMiddle(head,nd,item);
    cout<<"Printing...."<<endl;
    display(head);
    cout<<endl;
    cout<<"Insertion at last"<<endl;
    cout<<"Enter value: ";
    cin>>item;
    insertLast(item, head);
    cout<<"Printing..."<<endl;
    display(head);
    cout<<"Deletion at first"<<endl;
    deleteFirst(head);
    cout<<"Printing..."<<endl;
    display(head);

    cout<<endl;
    cout<<"Deletion at middle";
    cout<<"Enter node to delete: ";
    cin>>item;
    deletionMiddle(head,item);
    cout<<"Printing...";
    display(head);

    cout<<endl;
    cout<<"Deletion at last";

    deleteLast(head);
    cout<<"Printing...";
    display(head);
}
