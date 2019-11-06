#include <stdio.h>
#include <malloc.h>
struct list{
	int value;
	struct list *next;
};

struct list *head =NULL;

int insertfirst(int);
int insertlast(int);
int deletefirst(int);
int deletelast(int);
void display();
void main()
{
     printf("INSERTFIRST");
       insertfirst(25);
       insertfirst(15);
       insertfirst(10);
       display();
       insertlast(36);
       insertlast(45);
       display();
       deletefirst(10);
       display();
       deletelast(45);
       display();
       printf("\n");
       

}
int deletelast(int value)
{

 struct list * p;
 struct list * q;
 if(!p)
 return 0;
 
while(p->next){
    q=p;
    p=p->next;
}
q->next=NULL;
free(p);
}

int insertlast(int value)
{
	struct list  *new,*q;
	new=malloc(sizeof(struct list));
	new->value=value;
        new->next =NULL;
	if(!head){
		head =new;
       
	}else{
             q=head;
		/*traverse end of list*/
	
		while(q->next)
			q=q->next;
		q->next=new;
	}
	
}

int insertfirst(int value)
{
	struct list *temp;
	temp=malloc(sizeof(struct list));
        if (!temp)
        return 0;

	temp->value=value;
	temp->next=head;
	head=temp;
        return 1;

}
int deletefirst(int value)
{
	struct list *temp;
         temp=head;
        if (!temp)
        return 0;
       head=temp->next;
	free(temp);

}
void display()
{
	struct list *temp;
                 temp=head;
		while(temp){
		printf(" %d",temp->value);
                 temp=temp->next;
}
	

printf("\n");

}
