#include <stdio.h>

enum weekday {MON, TUE, WED, THU, FRI, SAT, SUN};

int main() {
    int num;

    printf("Enter a number (0-6): ");
    scanf("%d", &num);

    switch(num) {
        case MON: printf("MON"); break;
        case TUE: printf("TUE"); break;
        case WED: printf("WED"); break;
        case THU: printf("THU"); break;
        case FRI: printf("FRI"); break;
        case SAT: printf("SAT"); break;
        case SUN: printf("SUN"); break;
        default: printf("Invalid day");
    }

    return 0;
}
