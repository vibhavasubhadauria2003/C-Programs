// Online C compiler to run C program online
//4. Write a program to read, display, add, and subtract two distances. Distance must be
//defined using kms and meters.


#include<stdio.h>

struct Distance{
     int km,m;
};

void displayDistance(struct Distance s){
    printf("Distance is %d Km and %d m",s.km,s.m);
}
struct Distance inputDistance(){
    struct Distance d1;
        printf("Enter the distance \n");
        printf("Kilometers: ");
        scanf("%d",&d1.km);
        printf("Meters: ");
        scanf("%d",&d1.m);
        return d1;
}
struct Distance addDistance(struct Distance s1, struct Distance s2){
    struct Distance sum;
    sum.km=s1.km+s2.km;
    sum.m=s1.m+s2.m;
    if(sum.m>1000){
        sum.km=sum.km+sum.m/1000;
        sum.m=sum.m%1000;
    }
    return sum;
}
void main(){
    struct Distance s1,s2,sum;
    printf("For first ");
    s1=inputDistance();
    printf("For Second ");
    s2=inputDistance();
    sum=addDistance(s1,s2);
    displayDistance(sum);
}
