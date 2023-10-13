// Basic structure of C program

// Documentation (Here we write about the code -> It's usage, what it does, what the program is intend to use. Like an user manual for the code reader or us because we may be forget about the functionality of code after some time. )

#include<stdio.h>   // Header file declaration [Preprocessor declaration] (Here we declare the preprocessor files whose functions we're using in our program. By using "#include<>" statement we can import the preprocessor files or also known as header files. Like here we're using "stdio.h" header file because we need its functions to use on our program. "printf()" is predefined function of "stdio.h" header file which we're using to show the output on the screen.)

int main(){ // Main function declaration (Here we define the main() function. It is mandatory to declare the main() function because it acts as an entry point for the program and in this function we write our program.)

    printf("Hello World!"); // Body of the program (This is the "printf()"" function which is used to display anyting on the output screen.)

    return 0; // Return statement (This is the return statement and it is mandatory to define this statement in each and every code. It helps in checking that our code is function correctly and do not malfunctioning. Like here we define "return 0" so after executing the whole code it returns the value 0 which tells us that our code executed correctly. It acts as verification LHS=RHS types.)

}