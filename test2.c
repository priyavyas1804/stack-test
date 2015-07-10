#include<stdio.h>
#include<stdlib.h>

void display();


struct stack
{

    int value;
    struct stack *next;

};

typedef struct stack Stack;

Stack *top;
int push ( int);
int pop ( );
int main()
{
    int ch;
    top=NULL;
    int choice,value;
    int errocode;

    do
    {
        printf(" 1. POP \n 2.PUSH \n 3.DISPLAY \n 4.EXIT \n");
        scanf("%d",&ch);


        switch(ch)
        {
        case 1:
        {

            printf("I AM TRYING TO POP \n");
           errocode= pop();
           if(errocode==-1){
            printf("\n stack is empty");
           }

            break;
        }
        case 2:
            {

            printf("ENTER THE INTEGER YOU WANT PUSH");
            scanf("%d",&value);
            printf(" I AM TRYING TO PUSH \n");
            push(value);
            break;
        }

        case 3:
        {
            printf("I AM TRYING TO DISPLAY \n");
            display();
            break;
        }
        case 4:
            return 0;
            break;

        default :
            printf("INCORRECT CHOISE \n");
            break;
        }

    }
    while(ch!=4);
    return 0;
}
int pop()
{ int value,errocode;
    if(top==NULL){

      return  *errocode=-1;
    }
   value =top->value;
    top->next=NULL;


    return value;
}


int push ( int value)
{
    if(top==NULL){
   top=(Stack *)malloc(sizeof(Stack));
   top->value=value;
   top->next=NULL;


    }
    else{
     top=(Stack *)malloc(sizeof(Stack));
     top->next->value=value;
     top->next->next=NULL;

    }
    return 0;
}

void display()
{int i;
if(top==NULL){
    printf("stack is empty");
}
else{
    printf("stack elements \n");
    for (i=;;i++){
        printf("\n \n %d",top->value);
    }
}

}

