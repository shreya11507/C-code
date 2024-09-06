#include <stdio.h>

int main() {
    int i = 1, j, num = 1, tabs;

    while (i <= 4) { // Loop through rows
        // Print leading spaces to create the pyramid shape
        tabs = 4 - i;
        while (tabs > 0) {
            printf("   ");
            tabs--;
        }

        // Print numbers in each row
        j = 1;
        while (j <= i) {
            printf("%3d   ", num++);
            j++;
        }
        printf("\n"); // Move to the next line
        i++;
    }

    return 0;
}
