### Fibonacci Heap & Fibonacci Series Heap
# 📚 Project Description
This repository contains two C programs related to Fibonacci Heaps and Heap operations:

Fibonacci Heap Implementation: A complete Fibonacci Heap with standard operations like insert, find minimum, union, extract minimum, decrease key, and delete node.

Fibonacci Series to Heap: Generates a Fibonacci sequence and inserts it into a simple heap structure, maintaining a min-heap property.

# 🚀 Features
1. Fibonacci Heap
Create a Fibonacci Heap

Insert a node

Find the minimum node

Union two heaps

Extract the minimum node

Decrease the key of a node

Delete a node

Display heap structure

### 2. Fibonacci Series Heap
Generate a Fibonacci series

Insert series into a min-heap

Display heap elements

Extract minimum element

#🛠️ Technologies
Language: C


# 📂 Project Structure

.
├── fibonacci_heap.c         # Code 1: Full Fibonacci Heap implementation
├── fibonacci_series_heap.c  # Code 2: Fibonacci series to min-heap
└── README.md                # Project documentation (this file)
### 📋 How to Compile and Run
# 1. Clone the repository
git clone https://github.com/your-username/your-repo-name.git
cd your-repo-name
# 2. Compile Code 1 (Fibonacci Heap)
gcc fibonacci_heap.c -o fibonacci_heap
./fibonacci_heap

# 3. Compile Code 2 (Fibonacci Series Heap)
gcc fibonacci_series_heap.c -o fibonacci_series_heap
./fibonacci_series_heap

# 📈 Usage
Choose operations from the menu in the terminal.

Insert values, display heap status, extract minimum, etc.

Great for learning heap structures, Dijkstra optimizations, and practicing C programming.

# ⚡ Important Notes
In fibonacci_series_heap.c, the function named deleteMax() actually deletes the minimum element, not the maximum. (It’s a minor naming error.)

fibonacci_heap.c is a complete, correct, and modular Fibonacci Heap implementation.

#🤝 Contributing
Contributions, issues, and feature requests are welcome!
Feel free to open a Pull Request.



