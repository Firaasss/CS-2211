/*
Firas Aboushamalah
250920750
This program takes a phone number and an option from standard input and displays the phone number in a specific format given the option
*/ 
#include <stdio.h>

int main(){
	
	/* all starting variables*/
	
	int first;
	int second;
	int last;
	char option;	
	int confirm;
	
	//accept standard input and put it in first, second and last variables

	printf("Input Phone Number: ");
	confirm = scanf("%3d%3d%d", &first, &second, &last);
	
	/*Check number is all digits, is NOT negative and larger than 10 digits*/ 
	
	if(confirm == 3 && first >= 0 && first <= 999 && second >= 0 && second <= 999 && last >= 0 && last <= 9999){

		//this is the format displayed to the user
		printf("\nFormat Options:\n");
		printf("A) Local\n");
		printf("B) Domestsic\n");
		printf("C) International\n");
		printf("D) Odd\n");

		//accepts the standard input and place it in the variable confirm to use
		printf("\nInput Option: ");
		confirm = scanf(" %c", &option);
		getchar();
		
		/*This makes sure that only input is given as the option*/
		if(confirm == 1){
			
			/*This checks to make sure the option isn't anything other then a,b,c,d,A,B,C or D.
			If it is then it will throw an error and exit the program	
			*/
 
			switch(option){
				case 'A':
				case 'a': printf("\nPhone Number: %d-%d\n", second, last);
					break;
				case 'B':
				case 'b': printf("\nPhone Number: (%d) %d-%d\n", first, second, last);
					break;
				case 'C':
				case 'c': printf("\nPhone Number: +1-%d-%d-%d\n", first, second, last);
					break;
				case 'D':
				case 'd': printf("\nPhone Number: %6.4d%6.4d%6.4d\n", first, second, last);
					break;
				default: {
					printf("\nERROR: BAD OPTION\n");
					return 1; 
				}
			}
		}
	}
	//if phone number is not inputted correctly, give error and return 1
	else{
		printf("ERROR: BAD PHONE NUMBER\n");
		return 1;
	}
	//if program ran successfully, return 0 (successful)
	return 0;
}
