
#ifndef __LIST__
#define __LIST__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
   void* data;
   struct node *next;
}FXNODE;

typedef FXNODE* PFXNODE;

typedef struct node_list {
	PFXNODE head;
	PFXNODE current;
}FXNODELIST;
typedef FXNODELIST* PFXNODELIST;

typedef void (*NodeVisit)(PFXNODE);

extern struct node *head;
extern struct node *current;

//insertion at the beginning
void insertatbegin(void* data);
void insertatend(void* data);
void insertafternode(struct node *list, void* data);
void deleteatbegin();
void deleteatend();
void deletenode(void* key);
int  searchlist(void* key);

PFXNODELIST AllocList();
PFXNODE ListAddStart(PFXNODELIST list,void* data);
PFXNODE ListAddEnd(PFXNODELIST list,void* data);

void VisitList(PFXNODELIST list, NodeVisit visit);

#endif