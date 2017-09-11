#include <stdio.h>
#include <stdlib.h>
struct Node
{
   int data;
   struct Node* next;
};

struct Node*head;
void print()
{
    struct Node*temp1=head;
    printf("print the list!\n");
    while(temp1!=NULL){
        printf("%d\n",temp1->data);
    temp1=temp1->next;
    }
}
void insert(int data, int n)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = data;
    temp1->next = NULL;
    if(n==1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    struct Node* temp2 = head;
    int i;
    for(i = 0;i<(n-2);i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
int main()
{
    int i,val;
    head = NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(5,2);
    insert(8,3);
    insert(11,5);
    print();
    printf("enter the position after which you want to enter number\n");
    scanf("%d",&i);
    printf("enter the value\n");
    scanf("%d",&val);
    insert(val,i+1);
    print();
    return 0;
}
