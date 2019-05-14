#include <stdio.h>

int main()
{
   int a,b,x,z;
   z = 1;


for(z;z>0;z++){
    printf("\n-----\nCalculation number: %d \n\nINSTRUCTIONS:\nPlease enter two numbers.\nThen please select an operator\nEnter 1 to add\nEnter 2 to subtract\nEnter 3 to divide\nEnter 4 to multiply\n\nPLEASE ENSURE EACH ENTRY IS SEPERATED BY A SPACE\n\n", z);
    scanf("%d %d %d",&a,&b,&x);
    switch(x)
    {
    case 1:
        printf("%d + %d = %d\n\n", a, b, a+b);
    break;
    case 2:
        printf("%d - %d = %d\n\n", a, b, a-b);
    break;
    case 3:
        printf("%d / %d = %d\n\n", a, b, a/b);
    break;
    case 4:
        printf("%d x %d = %d\n\n", a, b, a*b);
    break;
    default:
        printf("What are you doing man? Reset the program and follow the instructions\n\n");
        z = -1;
    break;
    }

}
 return 0;
}
