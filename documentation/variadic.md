
Variadic functions are functions that can take **a variable number of arguments**. Unlike normal functions, which have a fixed number of parameters, variadic functions can handle as many arguments as needed.

### Examples in real life:
- **`printf`**: It can take many arguments, like:
  ```c
  printf("Hello %s, your score is %d\n", "Alice", 95);
  ```
  Here, `printf` gets:
  - A format string `"Hello %s, your score is %d\n"`.
  - Two extra arguments: `"Alice"` and `95`.

### Key Points:
1. **Defined using `...`**: In the function declaration, the `...` means the function can take extra arguments.
   ```c
   int example(int fixed_arg, ...);
   ```

2. **Used with `<stdarg.h>`**:
   - Functions like `va_start`, `va_arg`, and `va_end` are used to process the extra arguments.

---

### Simple Example:
A function to sum numbers:
```c
#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...) { // `count` is fixed, `...` is the variadic part
    va_list args;
    int total = 0;

    va_start(args, count); // Start processing after `count`
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int); // Get the next argument as an int
    }
    va_end(args); // Clean up
    return total;
}

int main() {kk
    printf("Sum: %d\n", sum(3, 10, 20, 30)); // Output: Sum: 60
    return 0;
}
```

Variadic functions are helpful when you don’t know how many arguments you’ll need in advance!


---

1. **`va_start`**  
   - It initializes the argument list.  
   - It tells the program where to start looking for the variable arguments.

   ```c
   va_start(ap, last_fixed_arg);
   ```
   - `ap` is a `va_list` variable, and `last_fixed_arg` is the last known parameter before the variable arguments.

---

2. **`va_arg`**  
   - It retrieves the next argument in the list.  
   - You specify the type of the argument to extract.

   ```c
   int num = va_arg(ap, int);
   ```
   - Here, it gets the next argument as an `int`.

---

3. **`va_end`**  
   - It cleans up when you’re done processing the arguments.  
   - It's mandatory to call `va_end` after using `va_start`.

   ```c
   va_end(ap);
   ```

---

### Example
```c
#include <stdarg.h>
#include <stdio.h>

void print_numbers(int count, ...) {
    va_list ap;
    va_start(ap, count); // Start processing arguments after `count`

    for (int i = 0; i < count; i++) {
        int num = va_arg(ap, int); // Get the next argument
        printf("%d ", num);
    }

    va_end(ap); // Clean up
    printf("\n");
}

int main() {
    print_numbers(3, 10, 20, 30); // Prints: 10 20 30
    return 0;
}
```

Think of them as tools to **start, read, and clean up** when working with unknown numbers of arguments!