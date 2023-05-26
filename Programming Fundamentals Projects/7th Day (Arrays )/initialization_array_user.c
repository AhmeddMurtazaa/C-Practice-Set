#include <stdio.h>
#include <conio.h>
int main()
{
    float cgpa_method_1[] = {1.5,1.6,1.7,1.8};  //initialization and declaration
                                                //both happening together
    float cgpa_method_2[4];
    cgpa_method_2[0]= 2.5;
    cgpa_method_2[1]= 2.6;
    cgpa_method_2[2]= 2.7;
    cgpa_method_2[3]= 2.8;

    printf("\nthe value of cgpa is %.2f %.2f ",cgpa_method_2[0],cgpa_method_1[0]);
    printf("\nthe value of cgpa is %.2f %.2f ",cgpa_method_2[1],cgpa_method_1[1]);
    printf("\nthe value of cgpa is %.2f %.2f ",cgpa_method_2[2],cgpa_method_1[2]);
    printf("\nthe value of cgpa is %.2f %.2f ",cgpa_method_2[3],cgpa_method_1[3]);
    return 0;
}