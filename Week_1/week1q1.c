# Lift-Off-C-2022
#include <stdio.h>

int main() {
    char firstname[50];
    char lastname[50];
    int regd;
    char Branch_firstname[50];
    char Branch_secondname[50];
    char Hobby_1[50];
    char Hobby_2[50];
    printf("Enter your Name : \n");
    scanf("%s %s", firstname , lastname);
    printf("Your name is %s %s \n",firstname,lastname);
    printf("Enter Your last 3 digit of your registration no.:\n");
    scanf("%d",&regd);
    printf("Your Roll no. is %d\n",regd);
    printf("Enter Your Branch: \n");
    scanf("%s %s",Branch_firstname,Branch_secondname);
    printf("Your Branch is %s %s \n",Branch_firstname,Branch_secondname);
    printf("Enter Your Hobbies \n");
    scanf("%s %s",Hobby_1,Hobby_2);
    printf("Your Hobbies are %s and %s ",Hobby_1,Hobby_2);
    
    return 0;
}
