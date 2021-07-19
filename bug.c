#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NAME_MAX_LEN 10

int main() {

    char name[NAME_MAX_LEN] = {0};
    char *temp_buff = NULL;
    int buff_sz = 100;

    temp_buff = malloc(buff_sz);
    printf("Plese enter your name: ");
    fgets(temp_buff, buff_sz - 1, stdin);
    temp_buff[strcspn(temp_buff, "\n")] = 0; // Remove trailing NewLine

    /* copy string to buffer */
    strcpy(name, temp_buff);

    printf("Hello %s!\n", name);

    free(temp_buff);
    return 0;
}