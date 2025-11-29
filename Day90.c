//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Gender {
    MALE,
    FEMALE,
    UNKNOWN
};

struct Person {
    char name[50];
    enum Gender gender;
};

enum Gender get_gender_from_string(const char *input) {
    if (strcmp(input, "MALE") == 0) {
        return MALE;
    } else if (strcmp(input, "FEMALE") == 0) {
        return FEMALE;
    }
    return UNKNOWN;
}

int main() {
    struct Person p1;
    char input_gender[10];

    if (scanf("%s", p1.name) != 1) return 1;

    if (scanf("%s", input_gender) != 1) return 1;

    p1.gender = get_gender_from_string(input_gender);

    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case UNKNOWN:
            printf("Unknown\n");
            break;
    }

    return 0;
}