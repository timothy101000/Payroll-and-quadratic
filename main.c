PAY ROLL system
 CREATED BY HARRY NGENO
CN 22 FEB



#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [100],kra[20];
    int hours,overtime,gross,tax,net;

    printf("Gitonga\'s Factory Payroll\n");
    //capture input
    printf("enter name:");
    gets (name);
    printf("Enter KRA PIN:");
    gets(kra);
    printf("House worked:");
    scanf("%d",&hours);

    if(hours > 40); {
            overtime = (hour- 40) * 1.5 * 1000;
            gross = overtime + (40 * 1000);
    }
    else {
            overtime,= 0;
            gross = hours * 1ooo;
    }

    tax = 0.3 * gross;
    net = gross - tax;

    printf("Employee Name: %s\n",name);
    printf("Gross income: %d\n",gross);
    printf("Tax Paid: %d\n",tax);
    printf("Net Income: %d\n",tax);
    return 0;
}
