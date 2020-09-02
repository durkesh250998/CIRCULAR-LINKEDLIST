#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
struct node* new=NULL;
struct node* temp=NULL;
int main(){
    create();
    display();
}
void create(){
    int n;
    
    printf("enter the total nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        if(head==NULL){
                    head=new;
                    tail=new;
        }
        else{
            tail->next=new;
            tail=new;
            tail->next=head;
        }
    }
}
void display(){
        
        temp=head;
        while(temp->next!=head){
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
}
