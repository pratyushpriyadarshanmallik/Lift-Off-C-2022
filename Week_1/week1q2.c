#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter the First Number\n");
    scanf("%d",&a);
    printf("Enter the Second Number\n");
    scanf("%d ",&b);
    
    if(a > b){
        printf("%d is greater than %d ", a,b);
    }
    else{
        printf("%d is not greater than %d ",a,b);
    }
    
    return 0;
}
