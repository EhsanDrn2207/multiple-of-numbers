#include <iostream>
#include <limits> // For input validation
using namespace std;

// Function to get a positive integer input
int getPositiveInteger(const string& prompt) {
    int number;
    while (true) {
        cout << prompt;
        cin >> number;

        if (cin.fail() || number <= 0) { // Check if input is invalid or non-positive
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a positive integer." << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
            return number;
        }
    }
}

// Function to check divisibility
bool isDivisible(int y, int x) {
    return (y % x == 0);
}

int main() {
    char choice;

    do {
        cout << "=== Divisibility Checker ===" << endl;

        // Get valid inputs for x and y
        int x = getPositiveInteger("Enter a positive integer for x: ");
        int y = getPositiveInteger("Enter a positive integer for y: ");

        // Check divisibility and display result
        if (isDivisible(y, x)) {
            cout << y << " is divisible by " << x << ". The answer is True." << endl;
        } else {
            cout << y << " is not divisible by " << x << ". The answer is False." << endl;
        }

        // Ask if the user wants to check another pair
        cout << "Do you want to check another pair? (y/n): ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the Divisibility Checker. Goodbye!" << endl;
    return 0;
}
