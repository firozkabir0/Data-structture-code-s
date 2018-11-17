#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}*nodeptr;
nodeptr curr, head =NULL, newnode;
void push(int x)
{
    newnode=new node;
    newnode->data=x;
    newnode->next=NULL;

    newnode->next=head;
    head=newnode;
}
void pop(nodeptr d)
{
    head=d->next;
    delete d;
}
void display(nodeptr ds)
{
    while(ds!=NULL){
        cout<<ds->data<<" ";
        ds=ds->next;
    }
}
int main()
{
    int i,n,a;
    cout<<"enter the number of node "<<endl;
    push(45);
    push(34);
    pop(head);


    display(head);

}
