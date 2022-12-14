#include<stdio.h>
#include<malloc.h>

struct node
{
       int data;
       struct node* left;
       struct node* right;
};

struct node* createNode(int data)
{
       struct node *n;
       n=(struct node *)malloc(sizeof(struct node));
       n->data=data;
       n->left=NULL;
       n->right=NULL;
       return n;
}

void inOrder(struct node* root)
{
       if(root!=NULL)
       {
              inOrder(root->left);
              printf("%d  ",root->data);
              inOrder(root->right);
              

       }
}

int main()
{

       struct node *p=createNode(9);
       struct node *p1=createNode(4);
       struct node *p2=createNode(6);
       struct node *p3=createNode(5);
       struct node *p4=createNode(3);
       struct node *p5=createNode(1);

       /*
       tree looks like this:
              9
             /  \   
             4   6
            /  \  /
            5   3 1
       */

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    
    inOrder(p);
    return 0;   
}