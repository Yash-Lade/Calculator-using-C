#include<stdio.h>
#include<conio.h>


int main()
{
    float a,b,c;
    int ch;
    printf("\nCalculator in C !!\n");

    do
    {
    	
        printf("\n\nPress 1 for addition \n");
        printf("Press 2 for substraction \n");
        printf("Press 3 for multiplition \n");
        printf("Press 4 for division \n");
        printf("Press 5 to exit \n");

        printf("Enter your choice :");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:printf("Enter first number :");
                    scanf("%f",&a);
                   printf("Enter second number :");
                    scanf("%f",&b);

                    c=a+b;

                    printf("The sum is :%f",c);
                    break;
            
            
			case 2:printf("Enter first number :");
                    scanf("%f",&a);
                   printf("Enter second number :");
                    scanf("%f",&b);

                    c=a-b;

                    printf("The substraction is :%f",c);
                    break;

            case 3:printf("Enter first number :");
                    scanf("%f",&a);
                   printf("Enter second number :");
                    scanf("%f",&b);

                    c=a*b;

                    printf("The multiplictaion is :%f",c);
                    break;

            case 4:printf("Enter first number :");
                    scanf("%f",&a);
                   printf("Enter second number :");
                    scanf("%f",&b);
					if (b!=0)
					{						
                    c=a/b;
					printf("The division is :%f",c);
					}
					else
					printf("Denominator cannot be 0 !!");

            case 5:
                    break;
                    
            default:printf("Choice is wrong !!\n");

        }
    }while(ch!=5);
    
    return 0;
}
