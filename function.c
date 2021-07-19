#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Prints number within a range
 * Returns 0 on success, 1 on failure.
 */
int print_range(int min, int max) {
    /* print numbers from min to max */

    if(min > max) {
        printf("ERROR: 'min' must be smaller or equal to 'max'\n");
        return 1;
    }

    for(int i=min; i<=max; i++) {
        printf("%d ", i);
    }
    printf("\nDone.\n");

    return 0;
}

int main() {
    char min_str[6] = {0};
    char max_str[6] = {0};

    int max = 0;
    int min = 0;

    int ret = 0;

    printf("Please enter a minimum number between 0 and 99999: ");
    fgets(min_str, sizeof(min_str) - 1, stdin);
    min = atoi(min_str);

    printf("Please enter a minimum number between 0 and 99999: ");
    fgets(max_str, sizeof(max_str) - 1, stdin);
    max = atoi(max_str);

    ret = print_range(min, max);

    return ret;
}