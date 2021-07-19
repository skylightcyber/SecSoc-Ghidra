#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NAME_MAX_LEN 10

void safestrcpy(char * dest, char * src) {
}

int main() {

    char name[NAME_MAX_LEN] = {0};
    char *temp_buff = NULL;
    int buff_sz = 100;

    temp_buff = malloc(buff_sz);
    printf("Plese enter your name: ");
    fgets(temp_buff, buff_sz - 1, stdin);
    temp_buff[strcspn(temp_buff, "\n")] = 0; // Remove trailing NewLine

    /* This is DEFINITELY the only way to do this! */
    int i = 0;
    while(i<NAME_MAX_LEN) {
        name[i] = temp_buff[i];
        i++;
    }
    name[i] = '\0';

    printf("Hello %s!\n", name);

    free(temp_buff);
    return 0;
}