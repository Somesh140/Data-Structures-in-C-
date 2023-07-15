#include<iostream.h>
#include<conio.h>
#include<process.h>

struct Node {
    int info;
    Node * next;
} *top, *newptr, *save, *ptr;

Node * Create_New_Node(int);
void Push(Node*);
void Display(Node*);

void main()
{
    int inf; char ch='y';
    top= NULL; clrscr();
    while(ch=='Y'|| ch=='y')
    {
        cout<<"\n Enter the information for new node..";
        cin>>inf;
        newptr = Create_New_Node(inf);
        if (newptr==NULL)
        { 
            cout<<"cannot create a new node !!!Aborting\n"; exit(1);
        }
        Push(newptr);
        cout<<"\nNow the Linked-stack is :\n";
        Display(top);
        cout<<"\nPress Y to eneter more nodes, N to exit...";
        cin>>ch;
}
}
Node * Create_New_Node(int n)
{
    ptr= new Node;
    ptr->info=n;
    ptr->next=NULL;
    return ptr;
}

void Push(Node *np)
{
    if(top==NULL) top=np;
    else
    {save=top;top=np;
    np->next=save;}

}

void Display(Node *np)
{
    while(np!=NULL)
    {
        cout<<np->info<<"->";
        np=np->next;
    }
    cout<<"!!!\n";
}