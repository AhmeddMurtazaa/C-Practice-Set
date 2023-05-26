#include <stdio.h>
#include <conio.h>
int main()
{
    char *ptr ="Ahmed Murtaza"; //both valid
    // char str[]="Ahmed"; 
    puts(ptr); // Ahmed murtaza was initialized with pointers so address of
    ptr="Abrar"; // ptr which is *ptr can be reassigned to Abrar
    puts(ptr);       
    // str[14]="Abrar"; invalid
    // puts(str); 

    return 0;
}