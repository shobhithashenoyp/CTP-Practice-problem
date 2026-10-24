#include<stdio.h>
int main() {
    int mark;
    printf("\n Enter your mark: ");
    scanf("%d",&mark);
    if(mark>=0 && mark<30) {
        printf("\n fail");

    } else if (mark>=30 && mark<=100) {
        printf("\n pass");
    
    } else {
        printf("\n invalid mark");

    }

return 0;
}