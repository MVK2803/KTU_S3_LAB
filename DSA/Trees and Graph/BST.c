#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *l;
    struct node *r;
};

struct node *new, *root, *temp, *ptr;

void inorder(struct node *ptr) {
    if (ptr != NULL) {
        inorder(ptr->l);
        printf("%d ", ptr->data);
        inorder(ptr->r);
    }
}

void insert(int ele) {
    new = (struct node *)malloc(sizeof(struct node));
    new->data = ele;
    new->l = NULL;
    new->r = NULL;
    if (root == NULL) {
        root = new;
        return;
    }
    ptr = root;
    while (ptr != NULL) {
        temp = ptr;
        if (ele > ptr->data) {
            ptr = ptr->r;
        } else {
            ptr = ptr->l;
        }
    }
    if (temp->data > ele) {
        temp->l = new;
    } else {
        temp->r = new;
    }
}
int leaf(struct node * ptr)
{
    if (ptr==NULL)
    return 0;
    if (ptr->l==NULL && ptr->r==NULL)
    return 1;
    return 
    leaf(ptr->l)+leaf(ptr->r);
}

int main() {
    root = NULL;
    printf("ROOT: ");
    root = (struct node *)malloc(sizeof(struct node));
    root->l = NULL;
    root->r = NULL;
    scanf("%d", &root->data);
    printf("%d\n", root->data);
    insert(10);
    insert(5);
    insert(4);
    insert(20);
    insert(15);
    inorder(root);
    
    printf("%d",leaf(root));
    return 0;
}
