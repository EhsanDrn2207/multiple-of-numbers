# Divisibility Checker

## Overview
The **Divisibility Checker** is a simple C++ program that checks whether one positive integer (`y`) is divisible by another positive integer (`x`). It ensures robust input validation, handles invalid inputs gracefully, and allows users to check multiple pairs of numbers without restarting the program.

---

## Features
1. **Input Validation**:
   - Ensures that both `x` and `y` are positive integers.
   - Handles non-integer inputs (e.g., strings, floats) gracefully.

2. **Divisibility Check**:
   - Determines if `y` is divisible by `x` using the modulus operator (`%`).

3. **User-Friendly Interface**:
   - Provides clear instructions and feedback.
   - Allows users to check multiple pairs of numbers in a single session.

4. **Modular Code**:
   - Uses functions for input validation and divisibility checking, making the code reusable and easy to maintain.

---

## How to Use

### Prerequisites
- A C++ compiler (e.g., GCC, Clang, or MSVC).
- A terminal or command prompt to run the program.

### Steps to Run the Program
1. **Clone or Download the Code**:
   - Save the code to a file named `divisibility_checker.cpp`.

2. **Compile the Program**:
   - Open a terminal or command prompt.
   - Navigate to the directory where the file is saved.
   - Compile the program using a C++ compiler. For example:
     ```bash
     g++ divisibility_checker.cpp -o divisibility_checker
     ```

3. **Run the Program**:
   - Execute the compiled program:
     ```bash
     ./divisibility_checker
     ```

4. **Follow the Prompts**:
   - Enter a positive integer for `x`.
   - Enter a positive integer for `y`.
   - The program will display whether `y` is divisible by `x`.
   - You can choose to check another pair of numbers or exit the program.

---

## Example Run
=== Divisibility Checker ===
Enter a positive integer for x: -5
Invalid input. Please enter a positive integer.
Enter a positive integer for x: 3
Enter a positive integer for y: abc
Invalid input. Please enter a positive integer.
Enter a positive integer for y: 9
9 is divisible by 3. The answer is True.
Do you want to check another pair? (y/n): y
=== Divisibility Checker ===
Enter a positive integer for x: 4
Enter a positive integer for y: 10
10 is not divisible by 4. The answer is False.
Do you want to check another pair? (y/n): n
Thank you for using the Divisibility Checker. Goodbye!


---

## Code Structure

### Functions
1. **`getPositiveInteger`**:
   - Prompts the user for input and ensures it is a positive integer.
   - Handles invalid inputs gracefully.

2. **`isDivisible`**:
   - Checks if `y` is divisible by `x` using the modulus operator (`%`).

### Main Program
- Uses a `do-while` loop to allow multiple checks.
- Provides clear feedback and instructions to the user.

---

## License
This project is open-source and available under the [MIT License](LICENSE). Feel free to use, modify, and distribute it as needed.

---

## Contributing
Contributions are welcome! If you find any issues or have suggestions for improvement, please open an issue or submit a pull request.

---

## Acknowledgments
- Thanks to the C++ community for providing excellent resources and tools.

---
