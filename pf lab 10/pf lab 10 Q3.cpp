#include <stdio.h>
#include <string.h>
#define MAX_CARS 100
struct cars {
    char make[50];
    char model[50];
    int year;
    int price;
    int mileage;
};
void addcars(struct cars c[], int *count) {
    if (*count >= MAX_CARS) {
        printf("No space available\n");
        return;
    }
    struct cars newcar;
    printf("Enter the make of the car:\n");
    scanf("%s", newcar.make);  
    printf("Enter the model of the car:\n");
    scanf("%s", newcar.model);
    printf("Enter the year of the car:\n");
    scanf("%d", &newcar.year);
    printf("Enter the price of the car:\n");
    scanf("%d", &newcar.price);
    printf("Enter the mileage of the car:\n");
    scanf("%d", &newcar.mileage);

    c[*count] = newcar;  
    (*count)++;
    printf("Car added successfully!\n");
}


void displaycars(struct cars c[], int count) {
    if (count == 0) {
        printf("No cars to display\n");
        return;
    }

    printf("\nList of Available Cars:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %d %s %s - $%d - %d miles\n", 
               i + 1, c[i].year, c[i].make, c[i].model, c[i].price, c[i].mileage);
    }
}


void searchcars(struct cars c[], int count) {
    char search[50];

    if (count == 0) {
        printf("No cars to search for\n");
        return;
    }

    printf("Enter make or model of the car to search for:\n");
    scanf("%s", search);

    printf("Search Results:\n");
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strstr(c[i].make, search) != NULL || strstr(c[i].model, search) != NULL) {
            printf("%d. %d %s %s - $%d - %d miles\n", 
                   i + 1, c[i].year, c[i].make, c[i].model, c[i].price, c[i].mileage);
            found = 1;
        }
    }

    if (!found) {
        printf("No cars found for this make or model\n");
    }
}

int main() {
    struct cars c[MAX_CARS];
    int count = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add new car\n");
        printf("2. Display available cars\n");
        printf("3. Search for cars by make or model\n");
        printf("4. Exit\n");

        printf("Select a choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addcars(c, &count);
                break;
            case 2:
                displaycars(c, count);
                break;
            case 3:
                searchcars(c, count);
                break;
            case 4:
                printf("Exiting the program\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
