# Fisher-Yates Shuffle 🎲

A simple yet effective C console application that shuffles an array of integers using the **Fisher-Yates Shuffle Algorithm** (also known as the Knuth Shuffle) in-place.

## 📖 What is the Fisher-Yates Shuffle Algorithm?

The **Fisher-Yates Shuffle Algorithm** is a classic algorithm for generating a random permutation of a finite sequence—in other words, for randomly shuffling an array or list. It is an extremely efficient algorithm that runs in $O(N)$ time complexity and performs the shuffle in-place, meaning it requires $O(1)$ additional memory space.

The modern version of the algorithm, developed by Richard Durstenfeld and popularized by Donald Knuth, works as follows:
1. Start from the last element of the array (index $i = n - 1$) and move backwards to the first element (index $1$).
2. For each index $i$, pick a random index $j$ such that $0 \le j \le i$.
3. Swap the element at index $i$ with the element at index $j$.
4. Decrement $i$ and repeat until the beginning of the array is reached.

This ensures that every possible permutation of the array is equally likely, providing an unbiased and highly efficient shuffle.

## 🎯 Project Purpose

The main objective of this project is to implement the **Fisher-Yates Shuffle Algorithm** in C and demonstrate how it shuffles a user-defined sequence of integers.

When running, the application:
1. **Prompts the user** to enter the length of the array (minimum of 3 elements).
2. **Dynamically allocates memory** for the array elements.
3. **Prompts the user** to input each integer of the array.
4. **Displays** the initial, unshuffled sequence.
5. **Applies** the Fisher-Yates shuffle algorithm to randomize the array in-place.
6. **Displays** the final, shuffled sequence.
7. **Frees** the dynamically allocated memory before exiting.

## 🚀 How to Run

Follow these steps to run the application on your local machine:

### Prerequisites
- A C compiler (such as `gcc`, `clang`, or MSVC) must be installed on your system.

### Steps
1. **Clone the repository** (or download the source code):
   ```bash
   git clone https://github.com/Kaaner4x/fisher-yates.git
   ```
2. **Navigate to the project directory**:
   ```bash
   cd fisher-yates
   ```
3. **Compile the application**:
   Using `gcc`:
   ```bash
   gcc -o fisher-yates fisher-yates.c
   ```
4. **Run the application**:
   - On Linux/macOS:
     ```bash
     ./fisher-yates
     ```
   - On Windows (Command Prompt or PowerShell):
     ```cmd
     .\fisher-yates.exe
     ```
5. **Usage**: The console will prompt you to enter the length of the array (minimum 3). Then, you will be asked to enter each number one by one. Once entered, the program will print both the original (unshuffled) and the shuffled sequence.

## 📄 License

This project is licensed under the [MIT License](LICENSE). See the `LICENSE` file for details.
