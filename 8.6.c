#include <stdio.h>

int main() {
    int amount;
    
    // Get user input for the amount
    printf("Enter the amount (up to 999999): ");
    scanf("%d", &amount);

    if (amount < 0 || amount > 999999) {
        printf("Invalid amount. Please enter a number between 0 and 999999.\n");
        return 1; // Exit with an error code
    }

    int million = amount / 1000000;
    int thousands = (amount % 1000000) / 1000;
    int hundreds = (amount % 1000);

    if (million > 0) {
        switch (million) {
            case 1: printf("One Million "); break;
            case 2: printf("Two Million "); break;
            case 3: printf("Three Million "); break;
            case 4: printf("Four Million "); break;
            case 5: printf("Five Million "); break;
            case 6: printf("Six Million "); break;
            case 7: printf("Seven Million "); break;
            case 8: printf("Eight Million "); break;
            case 9: printf("Nine Million "); break;
        }
    }

    if (thousands > 0) {
        int thousandsDigit = thousands / 100;
        int tens = (thousands % 100) / 10;
        int ones = thousands % 10;

        if (thousandsDigit > 0) {
            switch (thousandsDigit) {
                case 1: printf("One Hundred "); break;
                case 2: printf("Two Hundred "); break;
                case 3: printf("Three Hundred "); break;
                case 4: printf("Four Hundred "); break;
                case 5: printf("Five Hundred "); break;
                case 6: printf("Six Hundred "); break;
                case 7: printf("Seven Hundred "); break;
                case 8: printf("Eight Hundred "); break;
                case 9: printf("Nine Hundred "); break;
            }
        }

        if (tens == 1) {
            switch (ones) {
                case 0: printf("Ten "); break;
                case 1: printf("Eleven "); break;
                case 2: printf("Twelve "); break;
                case 3: printf("Thirteen "); break;
                case 4: printf("Fourteen "); break;
                case 5: printf("Fifteen "); break;
                case 6: printf("Sixteen "); break;
                case 7: printf("Seventeen "); break;
                case 8: printf("Eighteen "); break;
                case 9: printf("Nineteen "); break;
            }
        } else {
            if (tens > 1) {
                switch (tens) {
                    case 2: printf("Twenty "); break;
                    case 3: printf("Thirty "); break;
                    case 4: printf("Forty "); break;
                    case 5: printf("Fifty "); break;
                    case 6: printf("Sixty "); break;
                    case 7: printf("Seventy "); break;
                    case 8: printf("Eighty "); break;
                    case 9: printf("Ninety "); break;
                }
            }

            if (ones > 0) {
                switch (ones) {
                    case 1: printf("One "); break;
                    case 2: printf("Two "); break;
                    case 3: printf("Three "); break;
                    case 4: printf("Four "); break;
                    case 5: printf("Five "); break;
                    case 6: printf("Six "); break;
                    case 7: printf("Seven "); break;
                    case 8: printf("Eight "); break;
                    case 9: printf("Nine "); break;
                }
            }
        }

        printf("Thousand ");
    }

    if (hundreds > 0) {
        int hundredsDigit = hundreds / 100;
        int tens = (hundreds % 100) / 10;
        int ones = hundreds % 10;

        if (hundredsDigit > 0) {
            switch (hundredsDigit) {
                case 1: printf("One Hundred "); break;
                case 2: printf("Two Hundred "); break;
                case 3: printf("Three Hundred "); break;
                case 4: printf("Four Hundred "); break;
                case 5: printf("Five Hundred "); break;
                case 6: printf("Six Hundred "); break;
                case 7: printf("Seven Hundred "); break;
                case 8: printf("Eight Hundred "); break;
                case 9: printf("Nine Hundred "); break;
            }
        }

        if (tens == 1) {
            switch (ones) {
                case 0: printf("Ten "); break;
                case 1: printf("Eleven "); break;
                case 2: printf("Twelve "); break;
                case 3: printf("Thirteen "); break;
                case 4: printf("Fourteen "); break;
                case 5: printf("Fifteen "); break;
                case 6: printf("Sixteen "); break;
                case 7: printf("Seventeen "); break;
                case 8: printf("Eighteen "); break;
                case 9: printf("Nineteen "); break;
            }
        } else {
            if (tens > 1) {
                switch (tens) {
                    case 2: printf("Twenty "); break;
                    case 3: printf("Thirty "); break;
                    case 4: printf("Forty "); break;
                    case 5: printf("Fifty "); break;
                    case 6: printf("Sixty "); break;
                    case 7: printf("Seventy "); break;
                    case 8: printf("Eighty "); break;
                    case 9: printf("Ninety "); break;
                }
            }

            if (ones > 0) {
                switch (ones) {
                    case 1: printf("One "); break;
                    case 2: printf("Two "); break;
                    case 3: printf("Three "); break;
                    case 4: printf("Four "); break;
                    case 5: printf("Five "); break;
                    case 6: printf("Six "); break;
                    case 7: printf("Seven "); break;
                    case 8: printf("Eight "); break;
                    case 9: printf("Nine "); break;
                }
            }
        }
    }

    if (amount == 0) {
        printf("Zero ");
    }

    printf("\n");

    return 0;
}