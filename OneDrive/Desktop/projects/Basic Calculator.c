#include <stdio.h>
float sum(float num1, float num2 )
{
    return num1 + num2;
}
float subtract(float num1, float num2)
{
    return num1 - num2;
}
float multiply(float num1, float num2)
{
    return num1 * num2;
}
float divide(float num1, float num2)
{
    if (num2 != 0)
    {
        return num1 / num2;
    }
    else
    {
        printf("Error\n");
        return 0;
    }   
}
int main()
{
    float num1 , num2 ;
    int choice;
    printf("Enter the first number : ");
    scanf("%f", &num1);
    printf("Enter the second number : ");
    scanf("%f", &num2);
    printf("enter the operation of your choice (1/2/3/4) : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Result : %.2f\n", sum(num1,num2));
        break;
    case 2:
        printf("Result : %.2f\n", subtract(num1,num2));
        break;
    case 3:
        printf("Result : %.2f\n", multiply(num1,num2));
        break;
    case 4:
        printf("Result : %.2f\n", divide(num1,num2));
        break;        
       default:
       printf("Invalid choice !\n") ;
    }
return 0;
}
