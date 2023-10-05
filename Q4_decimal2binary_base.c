#include <stdio.h>

// function to convert decimal to binary 
void Decimal2Binary(unsigned int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
    // counter for binary array 
    int i = 0; 

    printf("Binary format before reversal is: \n"); 

    // iteration when the quotient (updated number) is not 0
    while (n > 0) {
        // storing remainder in binary array binaryNum[]
        binaryNum[i] = n % 2;
        // update the quotient value in each loop
        n = n / 2;
        // increase the loop variable in each loop
        i++;
    } 

    printf("\nReverse Order = "); 

    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        printf("%d", binaryNum[j]);
    printf("\n"); 
} 

// main function 
int main() 
{ 
    int input = 0;
    printf("Enter the integer decimal to be converted into binary: ");
    scanf("%d", &input);   
    
    // call the conversion function
    Decimal2Binary(input); 
    return 0; 
} 
