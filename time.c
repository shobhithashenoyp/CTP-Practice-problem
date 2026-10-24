#include<stdio.h>
void main() {
    int hour1,min1;
    printf("Enter time in hour in hour and minute: ");
    scanf("%d %d",&hour1,&min1);
    int hour2,min2;
    printf("Enter time in hour in hour and minutes: ");
    scanf("%d %d",&hour2,&min2);
    float time1 = (hour1*60)+min1;
    float time2 = (hour2*60)+min2;
    float total = time1+time2;
    int hour = total/60;
    int min = (int)total%60;
    printf("\n Total time is %d hours and %d minutes",hour,min);
}