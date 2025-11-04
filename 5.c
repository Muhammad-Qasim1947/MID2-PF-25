// Write a program for new red line bus service where we want to keep track of daily 
// ticket sales, for each bus, in every city. The number of cities, buses and tickets are 
// set to following values:
// Number of cities = last digit of your ID + 2
// Number of buses in each city = last two digits of your ID
// Number of ticket sales for each bus = last three digits of your ID
// Your program should ask your ID in one variable, for example “22k-1234”, 
// and extract above given values. For every ticket in every bus at every city, your program should also 
// user’s age and calculates appropriate ticket price i.e., for every ticket, there are three possible charges:
// Full price
// Elderly (age > 60) 30% discount on the ticket price
// Children (age < 6) 50% discount on the ticket price
// Let us assume the total ticket price is set to varCharges rupees (user specified), 
// then your program should calculate and display sales track in following format: 
// 2022

#include <stdio.h>

int main() {
    int numericID;
    int lastDigit, lastTwo, lastThree;
    int numCities, numBuses, numTickets;
    int age;
    float varCharges, ticketPrice;
    float totalSales = 0;
    float totalDiscountElder = 0, totalDiscountChild = 0;

    // Step 1: Enter numeric ID
    printf("Enter numeric part of your ID (e.g., 1234): ");
    scanf("%d", &numericID);

    // Step 2: Extract digits
    lastDigit = numericID % 10;       // last digit
    lastTwo = numericID % 100;        // last two digits
    lastThree = numericID % 1000;     // last three digits

    // Step 3: Determine counts
    numCities = lastDigit + 2;
    numBuses = lastTwo;
    numTickets = lastThree;

    printf("\nNumber of cities: %d\n", numCities);
    printf("Number of buses per city: %d\n", numBuses);
    printf("Number of tickets per bus: %d\n", numTickets);

    // Step 4: Read full ticket price
    printf("Enter full ticket price: ");
    scanf("%f", &varCharges);

    printf("\nAll Data:\n");
    printf("City Bus Passenger Age Amount\n");

    // Step 5: Nested loops for cities, buses, tickets
    for (int city = 1; city <= numCities; city++) {
        for (int bus = 1; bus <= numBuses; bus++) {
            float busSales = 0;

            for (int passenger = 1; passenger <= numTickets; passenger++) {
                printf("City %d Bus %d Passenger %d Age: ", city, bus, passenger);
                scanf("%d", &age);

                // Calculate ticket price
                if (age < 6) {
                    ticketPrice = varCharges * 0.5;
                    totalDiscountChild += varCharges * 0.5;
                } else if (age > 60) {
                    ticketPrice = varCharges * 0.7;
                    totalDiscountElder += varCharges * 0.3;
                } else {
                    ticketPrice = varCharges;
                }

                busSales += ticketPrice;

                // Print ticket info
                printf("City %d Bus %d Passenger %d %d %.0f rupees\n",
                       city, bus, passenger, age, ticketPrice);
            }

            // Total sales for this bus
            printf("Total sales for City %d Bus %d: %.0f rupees\n\n", city, bus, busSales);
            totalSales += busSales;
        }
    }

    // Step 6: Print summary
    printf("\nGrand Total Sales for all cities: %.0f rupees\n", totalSales);
    printf("Total discount for elders: %.0f rupees\n", totalDiscountElder);
    printf("Total discount for children: %.0f rupees\n", totalDiscountChild);
    printf("Total discounted amount: %.0f rupees\n", totalDiscountElder + totalDiscountChild);

    return 0;
}
