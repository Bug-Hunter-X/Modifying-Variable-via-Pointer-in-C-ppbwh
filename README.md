# Modifying Variable via Pointer in C
This repository demonstrates a common C programming error involving modifying a variable through a pointer.  The code showcases how changes made via a pointer directly affect the original variable.

## Understanding the Problem
The example uses a pointer `ptr` to point to the address of variable `x`. When we change the value at the address `ptr` points to using `*ptr`, we directly modify the value of `x`.

While this is functionally correct, it's important to understand the implications for more complex data structures and scenarios, to avoid unexpected issues.