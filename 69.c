#include <stdio.h>
#include <string.h>

#define bo 25

struct book{
    char name[bo];
    char author[bo];
    int price;
    int paper;
    char subject[bo];
    char publisher[bo];
};

struct book b[bo*4];
int total;
int choise = 0;

void printlist();
void findname();
void infoadd();
void menu();

int main(){

    infoadd();
    menu();

    return 0;
}

void infoadd(){

    printf("How many books will you enter?: ");
    scanf("%d",&total);

    for (size_t i = 0; i < total; i++){
        printf("Please enter the name of book %d: ",i+1);
        scanf("%s", b[i].name);
        printf("Please enter the author of book %d: ",i+1);
        scanf("%s", b[i].author);
        printf("Please enter the price of book %d: ",i+1);
        scanf("%d",&b[i].price);
        printf("Please enter the paper of book %d: ",i+1);
        scanf("%d",&b[i].paper);
        printf("Please enter the subject of book %d: ",i+1);
        scanf("%s", b[i].subject);
        printf("Please enter the publisher of book %d: ",i+1);
        scanf("%s", b[i].publisher);
    }
}

void menu(){

    do {
        printf("\nMenu ");

        printf("\n 1. Sort by list");
        printf("\n 2. Find by name");
        printf("\n 3. Exit");

        printf("\n\n Your choise: " );
        scanf("%d",&choise);

        switch (choise){
            case 1 : 
                printlist(); 
                break;
            case 2 : 
                findname(); 
                break;
            default:
                break;
        }
    } while(choise != 3 );
}

void printlist() {
    printf("\n| %-5s %-11s %-7s %-7s %-10s %-10s|", "No", "Name", "Price", "Page", "Subject", "Publisher");
    printf("\n --------------------------------------------------------");

    for (size_t i = 0; i < total; i++) {
        printf("\n  %-5d %-11s %-7d %-7d %-10s %-10s", i + 1, b[i].name, b[i].price, b[i].paper, b[i].subject, b[i].publisher);
    }
}

void findname() {
    char name[bo];
    char found = 'n';

    printf("What is the name of the book you are looking for?: ");
    scanf("%s", name);

    for (size_t i = 0; i < total; i++) {
        if (strcmp(name, b[i].name) == 0) {
            printf("\n %d %s \t %d \t %d \t %s \t %s", i + 1, b[i].name, b[i].price, b[i].paper, b[i].subject, b[i].publisher);
            found = 'y';
            break;
        }
    }
    if (found == 'n') {
        printf("\nThe book you were looking for was not found");
    }
}