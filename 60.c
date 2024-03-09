#include <stdio.h>
#include <string.h>

int main() {
    int age[10], i = 0, ageh;
    char name[10][100], nameh[100];
    printf("Please Enter 'exit' to exit\n");

    while (1) {
        printf("Please Enter your name: ");
        scanf("%s", name[i]);

        if (strcmp(name[i], "exit") == 0)
            break;

        printf("Please Enter your age: ");
        scanf("%d", &age[i]);
        i++;
    }

    printf("\nEntered Information:\n");

    for (int j = 0; j < i - 1; j++) {
        for (int k = 0; k < i - j - 1; k++) {
            if (age[k] < age[k + 1]) {

                ageh = age[k];
                age[k] = age[k + 1];
                age[k + 1] = ageh;

                strcpy(nameh, name[k]);
                strcpy(name[k], name[k + 1]);
                strcpy(name[k + 1], nameh);
            }
        }
    }

    for (int j = 0; j < i; j++)
        printf("Name: %s, Age: %d\n", name[j], age[j]);

    return 0;
}
