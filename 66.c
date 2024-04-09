#include <stdio.h>
#include <stdlib.h>

struct car {
    char *model;
    int price;
};

typedef struct human{
    char *name;
    int age;
    struct car *vehicle;
} Human;

int main(){

    Human person;
    person.name = (char *)malloc(10 * sizeof(char));
    person.vehicle = (struct car *)malloc(sizeof(struct car));
    person.vehicle->model = (char *)malloc(10 * sizeof(char));

    printf("Person's\n");
    printf(" Name: ");
    scanf("%s",person.name);
    printf(" Age: ");
    scanf("%d",&person.age);
    printf("Vehicle's\n");
    printf(" Model: ");
    scanf("%s",person.vehicle->model);
    printf(" Price: ");
    scanf("%d",&person.vehicle->price);

    printf("\nPerson's\n - Name: %s, Age: %d,\nVehicle's\n - Model: %s, Price: %d",person.name,person.age,person.vehicle->model,person.vehicle->price);

    free(person.name);
    free(person.vehicle->model);
    free(person.vehicle);

    return 0;
}