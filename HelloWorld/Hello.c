#include <stdio.h> // we need this for printf function

/*This is my first multi-line comment
in my first C program*/

// this is the main entry point for my application
void main()

{// this is the beginning of the main function
	printf("Hello, World!\n");

    // char type
    printf("char size = %d byte \n", sizeof(char));
    printf("signed char size = %d byte \n", sizeof(signed char));
    printf("unsigned char size = %d byte \n", sizeof(unsigned char));

    // int type
    printf("int size = %d byte \n", sizeof(int));
    printf("signed int size = %d byte \n", sizeof(signed int));
    printf("unsigned int size = %d byte \n", sizeof(unsigned int));

    // short in
    printf("short int size = %d byte\n", sizeof(short int));
    printf("signed short int size = %d byte\n", sizeof(signed short int));
    printf("unsigned short int size = %d byte\n", sizeof(unsigned short int));
    printf("unsigned short int size = %d byte\n", sizeof(int short unsigned));

    // long int
    printf("long int size = %d byte\n", sizeof(long int));

    // long long
    printf("long long size = %d byte\n", sizeof(long long));

    // float type
    printf("float size = %d byte\n", sizeof(float));
    printf("double size = %d byte\n", sizeof(double));

}// this is the end of the main function


// end of "Hello.c"