## ✅ **5.2 Lab – Introduction to Pointers in C (GitHub Codespaces Edition)**

---

### **Introduction**

Pointers are variables that store memory addresses. They allow programs to efficiently manipulate data, support dynamic memory allocation, and enable complex data structures like linked lists. In this two-part lab, you'll explore how to use pointers, understand pointer arithmetic, and work with arrays using pointers.

---

### **Objectives**

By the end of this lab, you will:

1. Understand how to declare and initialize pointers.
2. Use the address-of (`&`) and dereference (`*`) operators.
3. Modify a variable's value using a pointer.
4. Work with multiple pointers and pointer arithmetic.
5. Use pointers to access and manipulate array elements.

---

## 🧪 **Part 1: Basic Pointers**

---

### **Step 1: Launch GitHub Codespaces**

1. Open your GitHub repository.
2. Click **Code > Codespaces > Create codespace on main**.

---

### **Step 2: Create `pointers.c`**

1. In the Explorer pane, open: `pointers.c`
2. Verify the following code:

```c
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;

    ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Address stored in ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    *ptr = 20; // modifying x using pointer
    printf("New value of x after modification via pointer: %d\n", x);

    return 0;
}
```

---

### **Step 3: Compile and Run**

In the terminal:

```bash
gcc pointers.c -o pointers
./pointers
```

✅ You should see the memory address of `x`, the value accessed via the pointer, and the updated value of `x`.

---

## 🧪 **Part 2: Pointer Arithmetic and Arrays**

---

### **Step 4: Update Your Code**

Extend your existing program with this additional block:

```c
    // Part 2: Pointer arithmetic with arrays
    int arr[5] = {100, 200, 300, 400, 500};
    int *p = arr;

    printf("\nArray values using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d = %d (Address: %p)\n", i, *(p + i), (p + i));
    }

    // Change value using pointer
    *(p + 2) = 999;
    printf("\nUpdated 3rd element of array to: %d\n", arr[2]);
```

Now your full program should look like this:

```c
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;

    ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Address stored in ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    *ptr = 20;
    printf("New value of x after modification via pointer: %d\n", x);

    // Part 2: Pointer arithmetic with arrays
    int arr[5] = {100, 200, 300, 400, 500};
    int *p = arr;

    printf("\nArray values using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d = %d (Address: %p)\n", i, *(p + i), (p + i));
    }

    *(p + 2) = 999;
    printf("\nUpdated 3rd element of array to: %d\n", arr[2]);

    return 0;
}
```

---

### **Step 5: Recompile and Run**

```bash
gcc pointers.c -o pointers
./pointers
```

✅ You should see:

* Array values printed using pointer arithmetic.
* The third element updated to `999`.

---

### **Summary**

In this two-part lab, you:

* Learned how to declare and use pointers.
* Used pointers to read and modify a variable's value.
* Practiced pointer arithmetic to iterate over an array.
* Used pointers to update specific array elements.

Understanding pointers is essential for mastering memory management and data structures in C. You’re now ready to tackle more advanced topics like dynamic memory allocation and pointer-to-pointer relationships!
