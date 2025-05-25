#include"Stack.c"

int main(){
    int choice, data;
    while(1){
        printf("\n1.push\n2.pop\n3.print peek element\n4.Print all elements of stack\n5.Print size of stack\n6.exit program");
        printf("\nEnter your choiice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter data to insert to stack:" );
            scanf("%d",&data);    
            push(data);
            break;
        case 2:
            data = pop();
            printf("\nDeleted element from stack is: %d",data);   
            break;
        case 3:
            data = peek();
            printf("\nThe top element in stack is: %d",data);
            break;
        case 4:
            printf("\nThe stack elements are: ");
            
            print();
            break;
        case 5:
            if(top == -1){
                printf("\nStack underflow");
                break;
            }
            printf("\nThe size of your stack is %d",top+1);
            break;
        case 6:
            printf("\nThank you ....! \nvisit again....");
            exit(1);
        default:
            printf("\nInvalid choice ....!\nplease select from menu.....");
        }
    }
}