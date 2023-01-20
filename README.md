# task C language (PUBG-Change)


This is a simple C program that calculates the change (in US currency) that should be returned to a customer, given the amount of money provided and the price of the item. The program uses greedy algorithm to determine the minimum number of coins needed to make change.

## Usage
The program takes in two float variables, M and P, representing the amount of money provided and the price of the item, respectively. It returns an array of integers representing the number of coins of each denomination (pennies, nickels, dimes, quarters, half-dollars, and dollars) that should be returned as change.

## Here is an example of how the program can be used:

### Copy code
getChange(5, 0.99); // should return [1,0,0,0,0,4]

## Compilation
This program can be compiled using a C compiler, such as GCC. Simply navigate to the directory containing the .c file and use the following command:

### Copy code
gcc -o change main.c
This will create an executable file named change.

## Note
Please note that this program only considers US currency denominations, and may not be accurate for other countries' currency. Additionally, the program assumes that the input money and price are in valid format.

Also, this program is written for the purpose of educational and demonstration, it's not production ready.
