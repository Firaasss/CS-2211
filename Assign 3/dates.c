//Firas Aboushamalah
//250920750
//This program takes a dat with format mm/dd/yy and returns largest date once the exit code (0/0/0) is given.

#include <stdio.h>
 
int main() {
	//setting the max variables for most recent year
        int maxMM=0;
        int maxDD=0;
        int maxYY=0;
        int mm,dd,yy;  //variables to input dates
        printf("Enter date (MM/DD/YY format): ");  //asking for date for standard input
        scanf("%d/%d/%d",&mm,&dd,&yy);  //applying input to variables

        while(!yy==0 && !dd==0 && !mm==0) { //for loop to keep asking for input as long as it's 0/0/0

                //check year is within appropriate bounds
                if(yy>00 && yy<=99) {

                        //check month
                        if(mm>=1 && mm<=12) {

                                //check days
                                if(dd>=01 && dd<=31) {

                                        //check if latest date, then update
                                        if(yy>maxYY) {
                                                maxYY=yy;  //updating year
                                                maxMM=mm;  //updating month
                                                maxDD=dd;  //updating day
                                        }

                                        //else if year is same as recent year, move on to months
                                        else if(yy==maxYY) {
                                                if(mm>maxMM){
                                                        maxYY=yy;
                                                        maxMM=mm;
                                                        maxDD=dd;
                                                }

                                                //otherwise if month is same as recent month, move on to days
                                                else if(mm==maxMM) {
                                                        if(dd>maxDD) {
                                                                maxYY=yy;
                                                                maxMM=mm;
                                                                maxDD=dd;
                                                        }
                                                        else {
                                                              	printf("Enter date (MM/DD/YY format): ");
                                                                scanf("%d/%d/%d",&mm,&dd,&yy);
                                                        }
                                                }
                                        } //asking for standard input again to reenter the loop
                                        printf("Enter date (MM/DD/YY format): ");
                                        scanf("%d/%d/%d",&mm,&dd,&yy);
                                }//if closing bracket

                                //send error message if the day is not valid, and ask for input again
                                else {
                                      	printf("Day is not valid.\n");
                                        printf("Enter date (MM/DD/YY format): ");
                                        scanf("%d/%d/%d",&mm,&dd,&yy);
                                }
                        }

                        //if month is not within bounds, print appropriate error and ask for input again
                        else {
                              	printf("Month is not valid.\n");
                                printf("Enter date (MM/DD/YY format): ");
                                scanf("%d/%d/%d",&mm,&dd,&yy);
                        }
                }//if

                //if year is not within bounds, give error and ask for input again
                else {
                      	printf("Year is not valid.\n");
                        printf("Enter date (MM/DD/YY format): ");
                        scanf("%d/%d/%d",&mm,&dd,&yy);
                }
        }//while

        //final print statement
        printf("%02d/%02d/%02d is the latest date.\n",maxMM,maxDD,maxYY);
        return 0;
}//main

