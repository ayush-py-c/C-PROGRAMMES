#include <stdio.h>


union CarData {
    char carName[50];
    float price;
};


struct Car {
    union CarData data;
};

int main() {
    
    struct Car myCar;

    
    printf("Enter the name of the car: ");
    scanf("%s", myCar.data.carName);

    
    printf("Enter the price of the car: ");
    scanf("%f", &myCar.data.price);

    
    printf("\nCar Information\n");
    printf("Name: %s\n", myCar.data.carName);
    printf("Price: %.2f\n", myCar.data.price);

    return 0;
}
 