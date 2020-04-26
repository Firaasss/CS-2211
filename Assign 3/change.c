//Firas	Aboushamalah
//250920750
//this program will take in a dollar amount and	return how much	change it can produce out of it	from the given input.
#include <stdio.h>
#include <math.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *toonies, int *loonies);
int main(void)
{
    /* local variable definition of enter amount*/
    int dollars, twenties, tens, fives, toonies, loonies, check;
    printf("enter amount: ");
    check = scanf("%d", &dollars);
    printf("\nChange for $%d is:\n", dollars);

    if(dollars >= 0 && check == 1){

        pay_amount(dollars, &twenties, &tens, &fives, &toonies, &loonies);
        printf("$20s: %d\n", twenties);
        printf("$10s: %d\n", tens);
        printf("$5s: %d\n", fives);
        printf("$2s: %d\n", toonies);
        printf("$1s: %d\n", loonies);
        return 0;
    }
    else {
	printf("THIS INPUT IS INVALID!");
        return 1;
    }

}

/*Function pay_amount declaration */
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *toonies, int *loonies)
{
//  while (dollars>=0);
    *twenties = (dollars/20);
    *tens     = ((dollars%20)/10);
    *fives    = (((dollars%20)%10)/5);
    *toonies  = ((((dollars%20)%10)%5)/2);
    *loonies  = (((((dollars%20)%10)%5)%2));
}
