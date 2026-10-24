#include<stdio.h>
void main() {
    int n;
    printf("\n enter a number: ");
    scanf("%d",&n);
    int original = n;
    int rev = 0;
    while (n!=0) {
        int rem = n%10;
        rev = (rev*10)+rem;
        n=n/10;

        
        
        
    } 
    if(original == rev ) {
        printf("\n Palindrome");

    } else {
        printf("\n Not a palindrome");
    }
}