# Memory Management Simulation

This project is a simple simulation of memory management in C, implementing custom versions of memory allocation (`malloc`), deallocation (`free`), and a basic memory management system. It uses a linked list for memory tracking and simulates a contiguous block of memory for allocating and freeing memory blocks.

## Features

- **Custom memory allocation**: Simulates memory allocation similar to `malloc()`.
- **Custom memory deallocation**: Simulates freeing memory with `free()`.
- **Memory visualization**: Outputs the current state of memory to help visualize memory usage.
- **Linked List Implementation**: Manages memory allocation requests in a linked list structure (`lista.c`).

### File Overview

- `src/memory.c`: Contains the main logic for memory allocation (`aloca`), deallocation (`libera`), and printing memory (`imprime_memoria`).
- `src/lista.c`: Implements a linked list that assists in memory management.
- `include/memory.h`: Header file that defines the memory management functions and memory layout.
- `Makefile`: Used to compile and run the program.

### Memory Simulation

The simulation mimics a block of memory represented as a vector (`byte_t vector[MEM_LEN]`). Each block of memory can be allocated or freed, and the state of the memory can be printed to visualize the current allocations.

- **`aloca(byte_t s)`**: Allocates a block of memory of size `s`. It searches for a free space in the memory vector and marks it as used.
- **`libera(void* addr)`**: Frees the block of memory at the given address by resetting the memory region to a free state (`\0`).
- **`imprime_memoria()`**: Prints the current state of the memory, showing allocated memory blocks with their starting addresses and sizes.

## How to Run

### Prerequisites

- You will need `gcc` (GNU Compiler Collection) to compile the code.

### Compilation

This project uses a `Makefile` for building the program. The Makefile compiles the source files and generates an executable.

1. Clone the repository or download the project files.
2. Open a terminal and navigate to the project root directory (where the `Makefile` is located).
3. Run the following command to compile the program:

   ```bash
   make
   ```

This will compile the source files and generate an executable file in the binary directory.

### Running the Program

To run the compiled program, execute the following command in the terminal:

   ```bash
   make run
   ```

This will run the `main` program, which you can modify to test memory allocation and deallocation scenarios.

### Cleaning Up

To clean up the compiled object files and binary, run:

   ```bash
   make clean
   ```

### Example Usage

Here’s an example of how memory management works:

   1. **Allocate memory**:
      ```c
      byte_t* ptr = aloca(10); // Allocates 10 bytes in the memory
      ```
   2. **Free memory**:
      ```c
      libera(ptr); // Frees the memory pointed to by ptr
      ```
   3. **Print memory state:**:
      ```c
      imprime_memoria(); // Prints the current state of memory
      ```

### Sample Output
After running a sample allocation and deallocation, the program might print something like this:
```yaml
Memory values:
0x00000001: 10
0x0000000A: 5
...
```
This output shows the memory address and size of allocated blocks.
