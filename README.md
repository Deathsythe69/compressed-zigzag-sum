# Compressed Zigzag Path Sum in Matrix

### 🔍 Qualification Round Task Submission

This repository contains the solution to the **Compressed Path Sum in Zigzag Matrix** problem, submitted as part of a coding qualification round.

---

## 🧠 Problem Statement

You are given a square matrix of size **N x N** containing positive integers.

Your task is to:

1. Traverse the matrix in a **zigzag diagonal fashion**:

   * Start from the top-left element.
   * Move diagonally **up-right (↗)** and **down-left (↙)** alternately.
2. At each visited cell:

   * **Add** the number to the sum **if it's not prime**.
   * **Subtract** the number **if it's a prime**.
3. Return the final computed value.

---

## 📅 Input & Output

* **Input:**

  * Integer `n` (2 <= n <= 100)
  * Followed by `n x n` integers (matrix)
* **Output:**

  * One integer: the computed zigzag sum

---

## ✅ Example

### Input:

```
3
1 2 3
4 5 6
7 8 9
```

### Zigzag Path:

```
1 → 2 → 4 → 5 → 3 → 6 → 8 → 7 → 9
```

### Prime Numbers in Path:

`2, 3, 5, 7`

### Computation:

```
1 - 2 + 4 - 5 - 3 + 6 + 8 - 7 + 9 = 11
```

### Output:

```
11
```

---

## 💻 How to Run

### 🛠 Compile

```bash
gcc main.c -o zigzag
```

### 🚀 Run

```bash
./zigzag
```

### 🧪 Sample Run

```
Enter matrix size: 3
Enter the matrix values:
1 2 3
4 5 6
7 8 9

Final Zigzag Computed Sum: 11
```

---

## 📂 Project Structure

```
compressed-zigzag-sum/
├── main.c                            # C source code
├── README.md                         # This file
├── Debasis_Qualification_Task.docx  # Word document with explanation, code, and screenshots
├── screenshots/                      # Code and output screenshots
│   ├── code.png
│   ├── output.png
│   └── traversal_example.png (optional)
└── test_inputs/                      # Optional input test files
    ├── input_3x3.txt
    └── input_5x5.txt
```

---

## 🔍 Constraints

* Matrix size: `2 <= n <= 100`
* Must use **pointers** for matrix traversal
* Must use **your own prime-checking logic**
* Avoid extra memory allocations
* Code must be clean, readable, and efficient

---

## 💠 Technologies Used

* Language: **C**
* Memory: **Dynamic Allocation with malloc**
* Input: **Standard Input via scanf**
* Output: **Standard Output via printf**

---

## ✨ Author

**Debasis Panigrahi**
👨‍🎓 Trident Academy of Technology, Bhubaneswar
📧 debasispanigrahi7864@gmail.com


---

## 📝 License

This project is created as part of a coding qualification task and is intended solely for evaluation and learning purposes.
