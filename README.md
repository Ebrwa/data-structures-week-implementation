<img width="926" height="515" alt="dynamicarray" src="https://github.com/user-attachments/assets/708dcf01-566b-4b38-b474-bc5376761f94" /># 📘 Data Structures - Full Implementation (Week 1)

This project contains the implementation of fundamental data structures in C++ as part of Week 1 practice.

It includes all required structures for Day 1, Day 2, Day 3, Day 4, and Day 5 tasks, each implemented in its own `.cpp` file and tested using a `main()` function.

---

## 🔹 Day 1 - Implemented Structures

### 1. Dynamic Array  
A resizable array that automatically expands when full.

- **Time Complexity:**
  - Access: O(1)
  - Insert (end): Amortized O(1), Worst O(n)
  - Delete: O(n)
- **Space Complexity:** O(n)
- **Use Case:** Used in dynamic containers like `std::vector`.

  <img width="926" height="515" alt="image" src="https://github.com/user-attachments/assets/342b7ae5-e0e5-4392-8b76-312ca246cd1c" />


### 2. Singly Linked List  
A list of nodes where each node points only to the next node.

- **Time Complexity:** O(1) insert at head, O(n) for search/delete.
- **Space Complexity:** O(n)
- **Use Case:** Useful for linear data where frequent insertions/removals occur at the front.

### 3. Stack using Array  
Implements LIFO using a dynamic array.

- **Time Complexity:** O(1) for push/pop/peek.
- **Space Complexity:** O(n)
- **Use Case:** Expression evaluation, backtracking.

### 4. Stack using Linked List  
Stack operations using linked nodes instead of array.

- **Time Complexity:** O(1) for push/pop/peek.
- **Space Complexity:** O(n)
- **Use Case:** Better when size is unknown or fluctuating.

---

## 🔹 Day 2 - Implemented Structures

### 5. Queue using Array  
FIFO implementation using a circular array.

- **Time Complexity:** O(1) for enqueue/dequeue/peek.
- **Space Complexity:** O(n)
- **Use Case:** Print queues, scheduling tasks.

### 6. Queue using Linked List  
Queue using dynamic memory allocation with head/tail.

- **Time Complexity:** O(1) for all operations.
- **Space Complexity:** O(n)
- **Use Case:** When queue size changes dynamically.

### 7. Doubly Linked List  
Each node points to both previous and next node.

- **Time Complexity:** O(1) insert/delete at head/tail, O(n) search.
- **Space Complexity:** O(n)
- **Use Case:** Navigation history (browser/music players).

### 8. Circular Linked List  
The last node connects back to the first.

- **Time Complexity:** O(1) insert at front/tail.
- **Space Complexity:** O(n)
- **Use Case:** Round-robin scheduling, loops.

---

## 🔹 Day 3 - Implemented Structures

### 9. Binary Tree  
Basic tree with left and right child nodes.

- **Supports:** Inorder, Preorder, Postorder traversal  
- **Includes:** Height calculation
- **Time Complexity:**
  - Insert/Search: O(n)
  - Traversals: O(n)
  - Height: O(n)
- **Space Complexity:** O(n)
- **Use Case:** Hierarchical data like file systems or expressions.

### 10. Binary Search Tree  
Sorted binary tree for fast search and insertion.

- **Time Complexity:**
  - Average Case: O(log n)
  - Worst Case: O(n)
- **Space Complexity:** O(n)
- **Use Case:** Dynamic sets, database indexing.

---

## 🔹 Day 4 - Implemented Structures

### 11. Min Heap  
Priority queue implementation using binary heap.

- **Time Complexity:**
  - Insert: O(log n)
  - Get/Remove Min: O(log n)
- **Space Complexity:** O(n)
- **Use Case:** Task scheduling, shortest path algorithms.

### 12. Hash Table  
Implements separate chaining for collision handling.

- **Time Complexity:**
  - Average Case: O(1)
  - Worst Case: O(n)
- **Space Complexity:** O(n)
- **Use Case:** Fast key-based access.

### 13. Graph (Adjacency List)  
Undirected graph using adjacency list.

- **Time Complexity:**
  - Add Edge: O(1)
  - Traversal: O(V + E)
- **Space Complexity:** O(V + E)
- **Use Case:** Networks, dependency resolution.

---

## 🔹 Day 5 - Implemented Structures

### 14. Graph Traversal (BFS & DFS)  
Two basic traversal methods.

- **BFS:** Queue-based
- **DFS:** Stack-based (recursive)
- **Time Complexity:** O(V + E)
- **Space Complexity:** O(V)
- **Use Case:** Search, AI, connectivity check.

### 15. Trie (Prefix Tree)  
Specialized tree for prefix operations.

- **Time Complexity:**
  - Insert/Search: O(L) where L is length of string
- **Space Complexity:** O(n * L)
- **Use Case:** Auto-completion, spell-checking.

### 16. Disjoint Set (Union Find)  
Tracks and merges disjoint sets.

- **Time Complexity:** O(α(n)) using path compression and union by rank
- **Space Complexity:** O(n)
- **Use Case:** Kruskal’s MST, network grouping.

---

## 🧪 How to Run the Tests

1. Open the project in Visual Studio 2022 (or compatible C++ IDE).
2. Go to any `.cpp` file inside `Day1/` to `Day5/`.
3. Right-click inside the `main()` and select **Run Without Debugging**.
4. Output will show the functionality of the selected structure.

---

## 🧩 Usage Summary

| Structure               | Use Case                              |
|------------------------|----------------------------------------|
| Dynamic Array          | Flexible storage                       |
| Singly Linked List     | Sequential access                      |
| Stack (Array/List)     | Undo, backtracking                     |
| Queue (Array/List)     | Scheduling, buffering                  |
| Doubly Linked List     | Bidirectional navigation               |
| Circular Linked List   | Circular processing                    |
| Binary Tree            | Hierarchical data                      |
| Binary Search Tree     | Fast lookup                            |
| Min Heap               | Priority management                    |
| Hash Table             | Key-value storage                      |
| Graph (Adjacency List) | Network models                         |
| Graph Traversal        | Explore connected paths                |
| Trie                   | Prefix-based string search             |
| Union-Find             | Group tracking                         |

---

## 🛠 Project Info

- **Language:** C++
- **IDE:** Visual Studio 2022
- **Structure:**
  - `Day1/` – Basic Lists and Stack
  - `Day2/` – Queues and Advanced Lists
  - `Day3/` – Trees
  - `Day4/` – Hashing, Heap, Graphs
  - `Day5/` – Graph Traversal, Trie, Union-Find
