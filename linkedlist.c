#include <stdio.h>
#include <stdlib.h>
struct createNewNode{
    int eid,ename; //eid
    struct createNewNode *link; 
};
void main()
{
    struct createNewNode *head = NULL;
    head = (struct createNewNode *)malloc(sizeof(struct createNewNode));
    head->eid=500;
    head->link = NULL;
    printf("\n %d",head->eid);
    
    struct createNewNode *body=NULL;
    body=( struct createNewNode *)malloc(sizeof(struct createNewNode));
    body->eid=600;
    body->link=NULL;
    head->link=body;
    printf("\n %d",body->eid);
    
    struct createNewNode *footer=NULL;
    footer=( struct createNewNode *)malloc(sizeof(struct createNewNode));
    footer->eid=700;
    footer->link=NULL;
    body->link = footer;
    printf("\n %d",footer->eid);
}

    

