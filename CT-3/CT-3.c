// If else conditionals

// #include<stdio.h>

// int main(){


//     int a;

//     printf("Enter the digit you want to check:\n");

//     scanf("%d",&a);

//     if(a%2==0){

//         printf("\nDigit is even!!!");

//     }

//     else{

//         printf("\nDigit is odd!!!");

//     }
    
    
//     return 0;

// }

// Leap Year

// #include<stdio.h>

// int main(){


//     int a;

//     printf("Enter the year you want to check:-\t"); //\t is used for giving tab or 4 spaces

//     scanf("%d",&a);

//     if((a%4==0 && a%100!=0) || a%400==0){

//         printf("\nThis is a leap year");

//     }

//     else{

//         printf("\nThis is not a leap year");

//     }

//     return 0;


// }

// if else ladder

/* Read input from user at runtime
    -hours to seconds
    -hours to minutes
    -minutes to seconds
    -days to seconds
*/

#include<stdio.h>

int main(){

    float hr, min, sec, days;
    char option;

    printf("Choose from the given conversions below:-\na-hours to seconds\nb-hours to minutes\nc-minutes to seconds\nd-days to seconds\n");

    scanf("%c",&option);

    printf("You selected the conversion :- %c\n",option);

    if(option == 'a'){

        printf("Enter your time in hours:-\n");
        scanf("%f",&hr);

        sec = hr * 60 * 60;

        printf("Hours %f -> Seconds %f",hr, sec);
        
    }

       else if(option == 'b'){

        printf("Enter your time in hours:-\n");
        scanf("%f",&hr);

        min = hr * 60;

        printf("Hours %f -> Minutes %f",hr, min);
        
    }

        else if(option == 'c'){

        printf("Enter your time in minutes:-\n");
        scanf("%f",&min);

        sec = min * 60;

        printf("Minutes %f -> Seconds %f",hr, sec);
        
    }

        else if(option == 'd'){

        printf("Enter your time in days:-\n");
        scanf("%f",&days);

        sec = days * 12 * 60 * 60;

        printf("Days %f -> Seconds %f",days, sec);
        
    }

    else{

        printf("Error!!!\nPlease check your option");

    }

    return 0;

}

