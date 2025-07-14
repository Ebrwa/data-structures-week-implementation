# 📘 Data Structures - Week 1 Implementation

This repository contains the implementations of basic data structures in C++ as part of Week 1 training tasks.

---

## 🛠 Implemented Structures

### 1. Dynamic Array

A resizable array that expands or shrinks during runtime as elements are added or removed.

**Time Complexity:**
- Access: O(1)
- Insert (end): Amortized O(1), Worst: O(n)
- Delete: O(n)

**Space Complexity:** O(n)

---

### 2. Singly Linked List

A sequence of nodes where each node holds data and points to the next.

**Time Complexity:**
- Insert at end: O(n)
- Delete by value: O(n)
- Search: O(n)

**Space Complexity:** O(n)

---

### 3. Stack using Array

A Last-In-First-Out (LIFO) structure implemented using a dynamic array.

**Time Complexity:**
- Push: O(1)
- Pop: O(1)
- Peek: O(1)

**Space Complexity:** O(n)

---

### 4. Stack using Linked List

A LIFO stack structure where each element is a node linked to the one below it.

**Time Complexity:**
- Push: O(1)
- Pop: O(1)
- Peek: O(1)

**Space Complexity:** O(n)

---

## 🧪 How to Run

1. Open the project in **Visual Studio 2022**.
2. Make sure you have C++ installed.
3. Run the `main()` function inside `DSA_Project.cpp` to test the structures.
4. Output will show results of each operation (insert, delete, peek, etc.)

---

## 🧩 Usage Examples

- **DynamicArray** can grow/shrink as needed and be used for building higher-level structures.
- **SinglyLinkedList** is useful when frequent insertions/removals are needed.
- **Stacks** are used in undo features, recursion handling, syntax validation, etc.

---

## 🛠 Tools Used

- Language: C++
- IDE: Visual Studio 2022
