#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two numbers: \n");
    scanf("%d %d ",&a,&b);
    printf("Press the following to perform the arithmetic operation \n0-->Addition\n 1-->Subtraction\n 2-->Multiplication\n 3-->Division\n");
    scanf("%d",&c);
    switch(c)
    {
        
        case 0:
        printf("The sum of %d and %d is %d\n ",a,b,a+b);
        break;
        case 1:
        printf("The difference of %d and %d is %d\n ",a,b,a-b);
        break;
        case 2:
        printf("The Multiplication of %d and %d is %d\n ",a,b,a*b);
        break;
        case 3:
        printf("The Division of %d and %d is %d\n ",a,b,a/b);
        break;
    }
    
    

    return 0;
}
