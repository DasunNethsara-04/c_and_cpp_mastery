# 🔡 String Toolkit using Pointers in C

This project is a basic string manipulation toolkit written in C using **only pointers**, without using standard string library functions (`strlen`, `strcpy`, etc.).

## 📘 Project Description

The goal of this project is to strengthen your understanding of pointers by building your own versions of common string functions. You'll implement:

- String Length (`myStrLen`)
- String Copy (`myStrCopy`)
- String Compare (`myStrCompare`)
- String Concatenation (`myStrConcat`)

Each function operates using **pointer arithmetic**, not array indexing.

---

## 📂 Files

- `main.c` – Contains all logic and `main()` function to test the toolkit.
- `README.md` – Project overview and usage instructions.

---

## 🛠️ Functions to Implement

### 1. `int myStrLen(char *str)`
Returns the length of the string (not including the null terminator `\0`).

### 2. `void myStrCopy(char *dest, char *src)`
Copies the contents of `src` string into `dest`.

### 3. `int myStrCompare(char *str1, char *str2)`
Compares two strings:
- Returns `0` if both strings are equal
- Returns a non-zero value if different (similar to `strcmp`)

### 4. `void myStrConcat(char *dest, char *src)`
Appends the `src` string at the end of the `dest` string.

---

## 🚀 How to Run

1. Compile:
   ```bash
   gcc main.c -o string_toolkit
2. Run:
    ```bash
   ./string_toolkit
   ```
3. Follow on-screen prompts to test each function.
---

## 📚 Learning Objectives
- Practice with pointers and pointer arithmetic
- Understand how strings work in C (null-terminated arrays)
- Reinforce memory traversal using *ptr and ptr++- 
