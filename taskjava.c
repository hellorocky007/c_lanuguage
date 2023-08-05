#include<stdio.h>
void  playGame(){
    char a[20]={"HELLO"};
    printf("Enter your char\n");
    for

    
}
int main(){
    int choice;
    while(choice){
        printf("MENU\n1.Play game\n2.Instruct game\n3.Exit game\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:playGame();
            break;
        case 2:instructGame();
        break;
        case 3:exitGame();
        break;
        default:printf("Invalid choice\n");
            break;
        }
    }
}