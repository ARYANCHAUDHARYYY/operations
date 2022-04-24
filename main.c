/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main (){
    //No. of available seats
    int available, book;
    printf("No. of available seats-");
    scanf("%d",&available);
    //Entered by user
    printf("Enter Number of seats to be booked-");
    scanf("%d",&book);
    if (available>book){
        printf("Train departure timmings available\n");
        printf("1)1230 HRS\n2)1530 HRS\n3)1720 HRS\n4)2000 HRS\n\n");
        int time;
        printf("Select Option for Required Time-");
        scanf("%d",&time);
        int timing;
        if (time==1){
            timing= 1230;
        }else if (time==2){
            timing= 1530;
        }else if (time==3){
            timing= 1730;
        }else if (time==4){
            timing= 1230;}
        char name[500];
        printf("Enter Your Name-");
        scanf("%s",&name);
        int price=250;
        printf("\nTHE BILL\nName-%s\nTiming-%dHRS\nPrice-%dRS",name,timing,price*book);
    }
    else{
        printf("SORRY\nSeats Not Availible");
    }    
    return 0;    
}