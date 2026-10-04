#include <stdio.h>

int main(void)
{
    float avg_weight, total, meat, fat, bone, tendon;
    int count;

    printf("Enter average weight of lambs (kg): ");
    scanf("%f", &avg_weight);

    printf("Enter count of lambs: ");
    scanf("%d", &count);

    total  = avg_weight * count;
    meat   = total * 0.59;
    fat    = total * 0.16;
    bone   = total * 0.18;
    tendon = total * 0.06;

    printf("\nLamb carcasses information\n");
    printf("Count of lambs: %d\n", count);
    printf("Total weight: %.2f kg\n", total);
    printf("Meat: %.2f kg\n", meat);
    printf("Fat: %.2f kg\n", fat);
    printf("Bone: %.2f kg\n", bone);
    printf("Tendon: %.2f kg\n", tendon);

    return 0;
}
