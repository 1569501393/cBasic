#include <stdio.h>

int main() {
    enum color {red=1, green, yellow};
    // enum color favorite_color;
    int favorite_color;

    /* input color */
    printf("Enter your favorite color: (1. red, 2. green, 3. yellow)");
    scanf("%d", &favorite_color);

    switch (favorite_color) {
        case red:
            printf("Your favorite color is red.\n");
            break;
        case green:
            printf("Your favorite color is green.\n");
            break;
        case yellow:
            printf("Your favorite color is yellow.\n");
            break;
        default:
            printf("Color not found.\n");
    }

    return 0;
}