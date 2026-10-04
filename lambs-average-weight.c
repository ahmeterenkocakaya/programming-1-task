#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int lamb;
    int weight_lamb;
    int result;
    float meat;
    float fat;
    float bones;
    float tendons;

    printf("Enter your number of lambs:");
    scanf("%d",&lamb);
    printf("Enter your average weight of lambs:");
    scanf("%d",&weight_lamb);
    result=lamb*weight_lamb;
    meat=result*0.59;
    fat=result*0.16;
    bones=result*0.18;
    tendons=result*0.06;
    printf("Your lambs are average\nmeat:%.2f\nfat:%.2f\nbones:%.2f\ntendons:%.2f",meat,fat,bones,tendons);

    return 0;
}
