#include<iostream>
using namespace std;
typedef struct treenode
{
    int data;
    struct treenode*left,*right;
}*treeptr;
treeptr root=NULL,ptr;
void make_root(int x)
{
    root=new treenode;
    root->data=x;
    root->left=NULL;
    root->right=NULL;


}
void make_node(int x)
{
    ptr=root;
    treeptr np=new treenode;
    np->data=x;
    np->left=NULL;
    np->right=NULL;
    while(ptr!=NULL){
        if(ptr->data==x){
            cout<<"enter data again or 0 for exit : ";
            cin>>x;
            if(x==0){
                break;
            }
            else{
            np->data=x;
            ptr=root;
            }
            else if(x<ptr->data)
            {
                if(ptr->left==NULL){
                    ptr->left=np;
                }
                else{
                    ptr=ptr->left;
                }
            }
            else{
                if(ptr->right==NULL){
                    ptr->right=np;
                    break;
                }
                else{
                    ptr=ptr->right;
                }
            }
        }
    }

void inorder(treeptr p)
{
    while(p!=NULL){
        inorder(p->left);
        cout<<p->data<<" ";
        inorder(p->right);
    }
}
int main()
{
    root=NULL;
    int x;
    else{
    while(1)
    {
        count<<"enter data or 0 for exit ";
        cin>>x;
        if(x==o){
            break;
        }
        else{
        if(root==NULL){
            make_root(x);
        }
        else{
            make_node(x);
        }
    }
    }
    }
    inorder(root);
}
