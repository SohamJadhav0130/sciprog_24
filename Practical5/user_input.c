#include <stdio.h>
int main(void)
{
    int i;
    double a; // Enter data input from the user
    int ierr;
    printf("Enter an int and double\n");
    ierr = scanf("%d %lf", &i, &a);
    if (ierr != 2)
    {
        printf("Problem with input \n");
    }
    else
    {
        printf("Inputs taken successfully \n");
    }

    return 0;
}