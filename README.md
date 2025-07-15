# 📘 Data Structures - Full Implementation (Week 1)

This project contains the implementation of fundamental data structures in C++ as part of Week 1 practice.

It includes all required structures for both Day 1 and Day 2 tasks, each implemented in its own `.cpp` file and tested using a `main()` function.

---

## 🔹 Day 1 - Implemented Structures

### 1. Dynamic Array
A resizable array that automatically expands when full.

- **Time Complexity:**
  - Access: O(1)
  - Insert (end): Amortized O(1), Worst O(n)
  - Delete: O(n)
- **Space Complexity:** O(n)
- **Use Case:** Used in array-based containers like `std::vector`.

---

### 2. Singly Linked List
A list of nodes where each node points only to the next node.

- **Time Complexity:**
  - Insert at head: O(1)
  - Insert at tail: O(n)
  - Search/Delete: O(n)
- **Space Complexity:** O(n)
- **Use Case:** Efficient for operations at the beginning of the list.

---

### 3. Stack using Array
A Last-In-First-Out (LIFO) structure implemented with a dynamic array.

- **Time Complexity:**
  - Push: O(1)
  - Pop: O(1)
  - Peek: O(1)
- **Space Complexity:** O(n)
- **Use Case:** Undo features, function call stacks, expression parsing.

---

### 4. Stack using Linked List
Same LIFO behavior, implemented using nodes for flexible memory usage.

- **Time Complexity:** Same as array-based stack (O(1) for all operations)
- **Space Complexity:** O(n)
- **Use Case:** Ideal when size isn't known in advance.

---

## 🔹 Day 2 - Implemented Structures

### 5. Queue using Array
A circular array-based implementation of a First-In-First-Out (FIFO) queue.

- **Time Complexity:**
  - Enqueue: O(1)
  - Dequeue: O(1)
  - Peek: O(1)
- **Space Complexity:** O(n)
- **Use Case:** Used in systems like print queues, task schedulers.

---

### 6. Queue using Linked List
A FIFO queue implemented using front/rear pointers in a linked list.

- **Time Complexity:** All operations in O(1)
- **Space Complexity:** O(n)
- **Use Case:** Dynamic queues with flexible size limits.

---

### 7. Doubly Linked List
Each node has two pointers: one to the next and one to the previous.

- **Time Complexity:**
  - Insert/Delete at head or tail: O(1)
  - Search/Delete by value: O(n)
- **Space Complexity:** O(n)
- **Use Case:** Ideal for two-way navigation like browser history or music playlists.

---

### 8. Circular Linked List
A linked list where the last node points back to the first, forming a loop.

- **Time Complexity:**
  - Insert at front/end: O(1)
  - Search: O(n)
- **Space Complexity:** O(n)
- **Use Case:** Useful in circular processes (e.g., round-robin schedulers).

---

## 🧪 How to Run the Tests

1. **Open the project in Visual Studio 2022**
   - Make sure C++ is installed and configured properly.

2. **Pick any `.cpp` file from the folders `Day1` or `Day2`**
   - Example: `stack_array.cpp`, `QueueLinkedList.cpp`, etc.

3. **Run the file**
   - Open the file.
   - Right-click anywhere inside `main()` and click **Run Without Debugging (Ctrl + F5)**.

4. **Observe the Output**
   - Each file has a `main()` that demonstrates basic operations like insert, remove, peek, etc.

---

## 🧩 Usage Summary

| Structure               | Common Applications                               |
|------------------------|----------------------------------------------------|
| Dynamic Array          | Flexible containers, low-level array structures   |
| Singly Linked List     | Simple, growing data chains                        |
| Stack (Array/List)     | Undo, backtracking, expression parsing             |
| Queue (Array/List)     | Job scheduling, buffers, breadth-first traversal   |
| Doubly Linked List     | Back-and-forth navigation                          |
| Circular Linked List   | Rotating queues, repeatable loops (e.g., games)   |

---

## 🛠 Project Info

- **Language:** C++
- **IDE:** Visual Studio 2022
- **Structure:**  
  - `Day1/` – Dynamic Array, Singly Linked List, Stack (Array + List)  
  - `Day2/` – Queue (Array + List), Doubly Linked List, Circular Linked List

---
