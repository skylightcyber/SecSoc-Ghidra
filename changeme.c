#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_PWD_LEN 99

void print_prize(void) {
    char *prize = "\n\
   .-=========-.\n\
   \\'-=======-'/\n\
   _|   .=.   |_\n\
  ((|  {{1}}  |))\n\
   \\|   /|\\   |/\n\
    \\__ '`' __/\n\
      _`) (`_\n\
    _/_______\\_\n\
   /___________\\\n\
      WINNER!\n";
    printf(prize);
}

int has_permissions(char *name) {
    if(!strncmp(name, "Sup3RsEcR37pWd", MAX_PWD_LEN)) {
        return 1;
    }
    return 0;
}

int get_password(char * password) {
    printf("Please enter the password: ");
    fgets(password, MAX_PWD_LEN, stdin);
    return 0;
}

int main() {
    int ret = 0;
    char *password = NULL;

    password = (char *) malloc(MAX_PWD_LEN + 1);
    if(password == NULL) {
        printf("Well this is bad... bye!\n");
        exit(1);
    }

    if(get_password(password) == 0) {
        memset(password, 'A', MAX_PWD_LEN);
    }

    if(has_permissions(password)) {
        printf("Everything is in order here... here's your prize!\n");
        print_prize();
    }
    else {
        printf("Hmm sorry that's not right.\n");
        ret = 1;
    }

    free(password);
    password = NULL;
    return ret;
}
