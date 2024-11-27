# TO DO list: 

### **To-Do List for Implementing `ft_printf`**

#### **Setup**
1. [ ] Create a new project folder with the necessary structure:
   - `src/`: Source files
   - `include/`: Header files
   - `Makefile`

2. [ ] Create the main files:
   - `ft_printf.c`: Contains the main function implementation.
   - `ft_printf_utils.c`: Helper functions.
   - `ft_printf.h`: Header file with prototypes and includes.

3. [ ] Write a basic `Makefile`:
   - Compile with `-Wall -Wextra -Werror`.
   - Include rules: `all`, `clean`, `fclean`, `re`.

---

#### **Understanding Variadic Functions**
1. [ ] Write a small test program to practice with `va_start`, `va_arg`, and `va_end`.
2. [ ] Experiment with passing and extracting multiple arguments.

---

#### **Basic Implementation**
1. [ ] Implement a dummy `ft_printf` function to test the setup:
   - Print a static string like `"Hello, ft_printf!"`.

2. [ ] Implement a basic loop to parse the `format` string:
   - [ ] Handle plain characters (just print them).
   - [ ] Detect `%` and prepare to handle specifiers.

---

#### **Handle Simple Conversions**
1. [ ] Implement `%c`:
   - Print a single character.

2. [ ] Implement `%s`:
   - Print a string of characters.

3. [ ] Implement `%d` and `%i`:
   - Print integers in base 10.
   - Write or include a helper function to convert integers to strings.

4. [ ] Implement `%u`:
   - Print unsigned integers in base 10.

5. [ ] Implement `%x` and `%X`:
   - Print numbers in hexadecimal (lowercase and uppercase).

6. [ ] Implement `%%`:
   - Print a literal `%` character.

---

#### **Memory Management**
1. [ ] Ensure all heap-allocated memory is freed properly.
2. [ ] Test for potential memory leaks using tools like `valgrind`.

---

#### **Testing**
1. [ ] Write test cases for all supported specifiers:
   - [ ] `%c`
   - [ ] `%s`
   - [ ] `%d`,
   - [ ] `%i`
   - [ ] `%u`
   - [ ] `%x`,
   - [ ] `%X`
   - [ ] `%%`

2. [ ] Compare results with the standard `printf` to verify correctness.

---

#### **Bonus (Optional)**
1. [ ] Implement support for flags:
   - [ ] `-`: Left-justify output.
   - [ ] `0`: Zero-pad numbers.
   - [ ] `.`: Precision for strings and numbers.
   - [ ] Field minimum width.

2. [ ] Implement `%p`:
   - Print pointers in hexadecimal format.

---

#### **Final Steps**
1. [ ] Add comments and documentation to all functions.
2. [ ] Clean up the code and ensure it follows the Norm.