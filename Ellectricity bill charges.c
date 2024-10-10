//program to print Ellectricity bill charges
/*
    Name:ALEXERNDER MUTHIANI KITHUNGA
    Reg:PA107\G\22514\24
  */  
#include <stdio.h>

int main() {
    // Declare variables
    int customerID;
    char customerName[100];
    float unitsConsumed, totalBill, chargesPerUnit;

    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    // Determine charges per unit based on units consumed
    if (unitsConsumed < 200) {
        chargesPerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargesPerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargesPerUnit = 1.80;
    } else {
        chargesPerUnit = 2.00;
    }

    // Calculate total bill
    totalBill = unitsConsumed * chargesPerUnit;

    // Apply surcharge if necessary
    if (totalBill > 400) {
        totalBill += totalBill * 0.15; // Add 15% surcharge
    }

    // Ensure minimum bill amount
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Display results
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Charges per Unit: %.2f Ksh\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f Ksh\n", totalBill);

    return 0;
}
