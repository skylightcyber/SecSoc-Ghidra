#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char first_name[20];
    char last_name[20];
    int age;
} Person;

int main() {

    Person me;
    me.age = 1337;
    strncpy(me.first_name, "Samir", sizeof(me.first_name)-1);
    strncpy(me.last_name, "Ghanem", sizeof(me.last_name)-1);

    printf("My Details:\n  Name: %s %s\n  Age: %d\n", me.first_name, me.last_name, me.age);

    return 0;
}