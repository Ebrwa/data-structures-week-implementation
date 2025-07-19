📘 Data Structures - Full Implementation (Week 1)

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

<img width="801" height="262" alt="image" src="https://github.com/user-attachments/assets/e59199c9-89ff-47c9-9303-d5461664bd74" />


### 3. Stack using Array  
Implements LIFO using a dynamic array.

- **Time Complexity:** O(1) for push/pop/peek.
- **Space Complexity:** O(n)
- **Use Case:** Expression evaluation, backtracking.

<img width="1280" height="720" alt="image" src="https://github.com/user-attachments/assets/75069acd-e5ea-4958-a90d-ad6ecafde332" />


### 4. Stack using Linked List  
Stack operations using linked nodes instead of array.

- **Time Complexity:** O(1) for push/pop/peek.
- **Space Complexity:** O(n)
- **Use Case:** Better when size is unknown or fluctuating.

<img width="770" height="407" alt="image" src="https://github.com/user-attachments/assets/fb3d966d-bedc-4f6a-99ca-66d67bbec839" />


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

<img width="586" height="287" alt="image" src="https://github.com/user-attachments/assets/fb694565-e6f4-4068-b81a-1cc6000d03af" />


### 7. Doubly Linked List  
Each node points to both previous and next node.

- **Time Complexity:** O(1) insert/delete at head/tail, O(n) search.
- **Space Complexity:** O(n)
- **Use Case:** Navigation history (browser/music players).

<img width="980" height="337" alt="image" src="https://github.com/user-attachments/assets/33241125-c12c-4d2c-8335-f2f5d00841db" />

### 8. Circular Linked List  
The last node connects back to the first.

- **Time Complexity:** O(1) insert at front/tail.
- **Space Complexity:** O(n)
- **Use Case:** Round-robin scheduling, loops.

<img width="1001" height="229" alt="image" src="https://github.com/user-attachments/assets/43618fef-3438-494c-8c49-ee46bc56967e" />



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

<img width="824" height="542" alt="image" src="https://github.com/user-attachments/assets/7b6a021c-ddbf-4719-8c50-c06f983e4bc5" />


### 10. Binary Search Tree  
Sorted binary tree for fast search and insertion.

- **Time Complexity:**
  - Average Case: O(log n)
  - Worst Case: O(n)
- **Space Complexity:** O(n)
- **Use Case:** Dynamic sets, database indexing.

<img width="625" height="325" alt="image" src="https://github.com/user-attachments/assets/6e0940d8-241c-4512-a84a-1cb54df1f038" />


---

## 🔹 Day 4 - Implemented Structures

### 11. Min Heap  
Priority queue implementation using binary heap.

- **Time Complexity:**
  - Insert: O(log n)
  - Get/Remove Min: O(log n)
- **Space Complexity:** O(n)
- **Use Case:** Task scheduling, shortest path algorithms.

<img width="607" height="376" alt="image" src="https://github.com/user-attachments/assets/b0b04a05-61f3-4f24-b2a9-7042f41541f9" />


### 12. Hash Table  
Implements separate chaining for collision handling.

- **Time Complexity:**
  - Average Case: O(1)
  - Worst Case: O(n)
- **Space Complexity:** O(n)
- **Use Case:** Fast key-based access.

<img width="1200" height="586" alt="image" src="https://github.com/user-attachments/assets/0a87ab0c-a272-4a11-b342-c3dedae9b05b" />


### 13. Graph (Adjacency List)  
Undirected graph using adjacency list.

- **Time Complexity:**
  - Add Edge: O(1)
  - Traversal: O(V + E)
- **Space Complexity:** O(V + E)
- **Use Case:** Networks, dependency resolution.

<img width="731" height="341" alt="image" src="https://github.com/user-attachments/assets/dadab2a0-878f-4e4e-a865-5d4fff277ed4" />


---

## 🔹 Day 5 - Implemented Structures

### 14. Graph Traversal (BFS & DFS)  
Two basic traversal methods.

- **BFS:** Queue-based
- **DFS:** Stack-based (recursive)
- **Time Complexity:** O(V + E)
- **Space Complexity:** O(V)
- **Use Case:** Search, AI, connectivity check.

<img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/15570807-7d67-4ce7-a104-aba737b6e01b" />


### 15. Trie (Prefix Tree)  
Specialized tree for prefix operations.

- **Time Complexity:**
  - Insert/Search: O(L) where L is length of string
- **Space Complexity:** O(n * L)
- **Use Case:** Auto-completion, spell-checking.

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/7737d631-bc63-4c85-9e2f-6b9c8ec5d9e4" />


### 16. Disjoint Set (Union Find)  
Tracks and merges disjoint sets.

- **Time Complexity:** O(α(n)) using path compression and union by rank
- **Space Complexity:** O(n)
- **Use Case:** Kruskal’s MST, network grouping.

<img width="700" height="513" alt="image" src="https://github.com/user-attachments/assets/40dcf3f9-be2e-4c3c-9fc2-9004aa5cc1d8" />


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
