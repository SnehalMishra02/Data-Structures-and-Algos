#include <stdio.h>

//global variables
int stk[100];
int max;
int top=-1;

//function declaration
void push(int x);
int pop();
void disp();

int main(){
    printf("Enter max: ");
    scanf("%d",&max);
    int loop = 0;
    while (loop == 0)
    {
    printf("\nEnter: \n1->Push\n2->Pop\n3->Display\nAny key->Exit");
    int sw;
    scanf("%d",&sw);
    switch (sw)
    {
    case 1:
        printf("\nEnter element: ");
        int x;
        scanf("%d",&x);
        push(x);
        break;
    case 2:
        pop();
        break;
    case 3:
        disp();
        break;
    default:
        printf("Exiting!");
        exit(0);
        break;
    }
}
}

//function definition
void push(int x){
    if (top==max-1)
    {
        printf("\nOverflow!");
    }
    else{
        stk[++top]=x;
    }
}

int pop(){
    if (top==-1){
        printf("\nUnderflow!");
        return -1;
    }
    else{
        printf("\nPopped element: %d",stk[top]);
        return stk[(top--)];
    }
}

void disp(){
    for(int i=top;i>-1;i--){
        printf("\n[%d]",stk[i]);

    }
}
