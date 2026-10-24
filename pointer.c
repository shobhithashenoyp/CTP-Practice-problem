#include<stdio.h>
void main () {
    int age = 22;
    int  _age = 25;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);   
    printf("Value of pointer ptr: %p\n", ptr);
    printf("Value at address stored in ptr: %d\n", *ptr);
    printf("Value of _age: %d\n", _age);
    printf("Address of _age: %p\n", &_age);
    printf("Value of pointer _ptr: %p\n", _ptr);
    printf("Value at address stored in _ptr: %d\n", *_ptr);
    printf("Difference between ptr and _ptr: %ld\n", (char*)_ptr - (char*)ptr);
}