#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ath 3
#define maxnc 30

struct sport {
    char name[maxnc];
    int age;
    char country[maxnc];
    int no;
};

int main() {
    struct sport athlete[ath];

    for (size_t i = 0; i < ath; i++) {
        printf("Please enter the name of athlete %d: ",i+1);
        scanf("%s", athlete[i].name);
        printf("Please enter the number of athlete %d: ",i+1);
        scanf("%d", &athlete[i].no);
        printf("Please enter the age of athlete %d: ",i+1);
        scanf("%d", &athlete[i].age);
        printf("Please enter the country of athlete %d: ",i+1);
        scanf("%s", athlete[i].country);
    }
    
    printf("\n|--------------------------------------------------|\n");
    printf("| %-15s | %-5s | %-5s| %-15s |\n", "Name", "No", "Age", "Country");
    printf("|-----------------|-------|------|-----------------|\n");
    for (size_t i = 0; i < ath; i++) {
        athlete[i].name[0] = toupper(athlete[i].name[0]);
        athlete[i].country[0] = toupper(athlete[i].country[0]);
        printf("| %-15s | %-5d | %-4d | %-15s |\n", athlete[i].name, athlete[i].no, athlete[i].age, athlete[i].country);
    }
    printf("|--------------------------------------------------|\n");
        
    return 0;
}