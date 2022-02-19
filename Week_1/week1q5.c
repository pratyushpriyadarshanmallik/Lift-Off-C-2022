#include <stdio.h>

int main()
{
    float r;
    float a =2;
    float pi =3.14;
    printf("Enter the radius of the circle\n");
    scanf("%f",&r);
    printf("The diameter of circle is %f\n",a*r);
    printf("The Circumference of circle is %f\n",a*pi*r);
    printf("The Area of circle is %f\n",pi*r*r);
    

    return 0;
}
