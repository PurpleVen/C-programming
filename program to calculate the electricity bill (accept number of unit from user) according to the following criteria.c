#include<stdio.h>
#include<conio.h>
int main()
{
    int unit;
    float amt, total_amt, sur_charge;
    printf("Enter total units consumed: ");
    scanf("%d", &unit);
    if(unit <= 100)
    {
        amt = 0;
    }
    else if(unit <= 200)
    {
        amt = 25 + ((unit-50) * 5);
    }
    else if(unit > 200)
    {
        amt = 100 + ((unit-150) * 10);
    }
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;
    printf("Electricity Bill = Rs. %.2f", total_amt);
    getch ();
}
