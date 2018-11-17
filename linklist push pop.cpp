#include<iostream>
using namespace std;

typedef struct listnode
{
    int data;
    struct listnode *next;

}*nodeptr;
nodeptr head=NULL,curr,next,ptr;
void adddata(int item)
{

  nodeptr newnode=new listnode;
  newnode->data=item;
  newnode->next=NULL;
  if(head==NULL)
  {
     head=newnode;
  }
  else
 {  curr->next=newnode;

  }
  curr =newnode;

}
void insertbegin(int item)
{
nodeptr newnode=new listnode;
newnode->data=item;
newnode->next=head;
head=newnode;

}
void insertmiddle(nodeptr ptr,int item,int select)
{

    while(ptr->data!=select&&ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

nodeptr newnode=new listnode;
newnode->data=item;
newnode->next=head;
   if(ptr->data==select)
   {  newnode->next=ptr->next;
       ptr->next=newnode;
   }
}

void insertlast(int item,nodeptr ptr)
{
nodeptr newnode=new listnode;
newnode->data=item;
newnode->next=NULL;

while(ptr->next!=NULL)
{
    ptr=ptr->next;

}
 ptr->next=newnode;
}
void delettionmiddle(nodeptr ptr,int item)
{ nodeptr dptr;
    while(ptr->next->data!=item&& ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->next->data==item)
    {
        dptr=ptr->next;
        ptr->next=dptr->next;
        delete dptr;
    }
}
void pop(int item,int node)
{
    nodeptr ptr=head,dptr;
    if(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
        dptr=ptr->next;
        ptr->next=NULL;
        delete(dptr);
    }

}
void display(nodeptr ptr)
{
  while(ptr!=NULL)
    cout<< ptr->data <<"";
    ptr=ptr->next;
}
int main()
{   int node,select,item;
    cout<< "enter your node number";
    cin>> node;
     cout<< "enter your data";
     for(int i=0;i<node;i++)
     {
         cin>> item;
         adddata(item);

     }
     cout<<"enter where you want to insert after which number";
cin>> select;
 cout<<"enter number";
cin>> item;

insertmiddle(head,select,item);

cout<<"enter which number you want to insert";
cin>> item;
insertlast(item,head);

display(head);
}
