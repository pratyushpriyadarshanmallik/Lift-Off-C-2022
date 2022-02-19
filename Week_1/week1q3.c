#include<stdio.h>
int main(){
    
    int a;
    
    printf("Enter a number \n ");
    scanf("%d",&a);
    switch(a%2){
        case 0:
        printf("%d is even \n",a);
        break;
        
        case 1:
        printf("%d is odd \n",a);
        break;
    }
    
    return 0;
}
