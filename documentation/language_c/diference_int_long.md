Sure! Here's a simple explanation of the difference between `int`, `long`, and `double` in C:

---

### **Data Types in C: `int`, `long`, and `double`**

1. **`int`**:
   - **What it is:** Used to store whole numbers (no decimals).
   - **Size:** Usually 4 bytes (32 bits) on most modern systems.
   - **Range:** Can store numbers between approximately `-2,147,483,648` to `2,147,483,647` (for signed integers).
   - **Example:**
     ```c
     int age = 25; // stores the whole number 25
     ```

2. **`long`**:
   - **What it is:** Also used for whole numbers but can store **larger numbers** than `int`.
   - **Size:** Usually 8 bytes (64 bits) on most modern systems.
   - **Range:** Can store numbers between approximately `-9,223,372,036,854,775,808` to `9,223,372,036,854,775,807` (for signed long).
   - **Example:**
     ```c
     long distanceToSun = 150000000; // stores a large whole number
     ```

3. **`double`**:
   - **What it is:** Used to store **decimal numbers** (numbers with fractional parts).
   - **Size:** Usually 8 bytes (64 bits) on most modern systems.
   - **Range:** Can store very large or very small numbers, and also supports decimals.
   - **Example:**
     ```c
     double pi = 3.14159; // stores a decimal number
     ```

---

### **Key Differences**

| **Type**  | **What it Stores**       | **Size**         | **Example**             |
|-----------|--------------------------|------------------|-------------------------|
| `int`     | Whole numbers            | ~4 bytes         | `int count = 100;`      |
| `long`    | Larger whole numbers     | ~8 bytes         | `long population = 7000000000;` |
| `double`  | Numbers with decimals    | ~8 bytes         | `double temperature = 36.6;`    |

---

### **Analogy to Understand**

Imagine different containers:
- **`int`**: A small box to hold smaller numbers.
- **`long`**: A bigger box to hold much larger numbers.
- **`double`**: A jar that can hold both whole numbers and fractional numbers.

### **Quick Practice**
```c
#include <stdio.h>

int main() {
    int apples = 5;          // Small whole number
    long stars = 1000000;    // Large whole number
    double price = 12.99;    // Decimal number

    printf("Apples: %d\n", apples);
    printf("Stars: %ld\n", stars);
    printf("Price: %.2f\n", price);

    return 0;
}
