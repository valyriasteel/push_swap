# push_swap
![push_swap](https://img.shields.io/badge/push_swap-Sorting%20Algorithm%20Project-blue.svg)

## 📌 Project Description
`push_swap` is a project focused on sorting algorithms and stack manipulation. The goal is to sort a random set of integers using two stacks and a limited set of operations, with the objective of using the minimum number of operations possible.

## 📂 Features
- Implements various sorting algorithms optimized for stack operations
- Uses two stacks (Stack A and Stack B) for sorting
- Includes a set of specific operations to manipulate the stacks
- Optimizes for the minimum number of operations to sort the data
- Handles error cases and edge conditions

## ⚙️ Installation
Compile the project using the `Makefile`:
```sh
make
```

## 🚀 Usage
### Basic Usage
Run the program with a list of integers as arguments:
```sh
./push_swap 4 2 7 1 3
```
The program will output the list of operations needed to sort these numbers.

### Example Output
#### Push_swap Output:
```
ra
pb
ra
pb
sb
pa
pa
```

## 💻 Available Operations
- `sa`: swap the first two elements of stack A
- `sb`: swap the first two elements of stack B
- `ss`: do `sa` and `sb` at the same time
- `pa`: take the first element from stack B and put it at the top of stack A
- `pb`: take the first element from stack A and put it at the top of stack B
- `ra`: rotate stack A (shift up all elements by 1, the first element becomes the last)
- `rb`: rotate stack B
- `rr`: do `ra` and `rb` at the same time
- `rra`: reverse rotate stack A (shift down all elements by 1, the last element becomes the first)
- `rrb`: reverse rotate stack B
- `rrr`: do `rra` and `rrb` at the same time

## 🧮 Algorithm Complexity
The algorithm aims to sort:
- 3 numbers in ≤ 3 operations
- 5 numbers in ≤ 12 operations
- 100 numbers in ≤ 700 operations
- 500 numbers in ≤ 5500 operations

## 📜 License
This project is licensed under the **[MIT License](LICENSE)**.

## 📧 Contact
For any questions or feedback, feel free to reach out via GitHub!
