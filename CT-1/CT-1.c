#include<stdio.h>

int main(){

    // Data-Types (It shows the size of each data-type occupies itn the RAM. It is different from the book referred because it is an 32 bit compiler not 16 bit compiler, we're learning the memory allocation according to the 16 bit compiler in our books which is outdated.)

    int a; // Integer Data-type
    long int b; // Long Integer Data-type
    unsigned int c; // Unsigned Integer Data-type
    float d; // Float Data-type
    double e; // Double Data-type 
    long double f; // Long Double Data-type
    char g; // Character Data-type
    unsigned char h; // Unsigned Character Data-type
    signed char i; // Signed Character Data-type
    
    printf("int->\t%d\n",sizeof(a));
    printf("long int->\t%d\n",sizeof(b));
    printf("unsigned int->\t%d\n",sizeof(c));
    printf("float->\t%d\n",sizeof(d));
    printf("double->\t%d\n",sizeof(e));
    printf("long double->\t%d\n",sizeof(f));
    printf("char->\t%d\n",sizeof(g));
    printf("unsigned char->\t%d\n",sizeof(h));
    printf("signed char->\t%d\n",sizeof(i));


    return 0;

}