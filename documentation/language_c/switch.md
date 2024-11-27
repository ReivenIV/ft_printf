# Switch

A **switch** in C is a control statement used to execute one block of code out of many options, based on the value of an expression. It's like a menu: you choose a case, and the program runs the code for that choice.

Here’s how it works, step by step:

## Summary
    - Use a switch statement to simplify multiple condition checks.
    - Always include break unless you intentionally want to "fall through" to the next case.
    - The default case is optional but useful for handling unexpected values.

## Tips
    - Expression Type: The expression in a switch must be an integer or a character.
    - Floating-point types (like float or double) are not allowed.
    - Case Values: Must be constant expressions (like numbers or characters), not variables.

---

### Syntax:
```c
switch (expression) {
    case value1:
        // Code to execute if expression == value1
        break;
    case value2:
        // Code to execute if expression == value2
        break;
    default:
        // Code to execute if no cases match
}
```

### Explanation:
1. **Expression**: This is what you’re checking (usually an integer or character).
2. **Case**: Each `case` checks if the expression matches its value.
3. **Break**: Stops the program from running other cases. Without it, the program will "fall through" to the next case.
4. **Default**: Runs if no cases match (optional).

---

### Example:
Let’s create a program to print the day of the week based on a number (1 = Monday, 2 = Tuesday, etc.):

```c
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
```

### Output:
If `day` is `3`, the output will be:
```
Wednesday
```

---

### Key Notes:
- Use `break` to avoid running multiple cases unintentionally.
- `Default` is optional but useful for catching errors or unexpected inputs.
- Only integers or characters can be used as the expression in a `switch`.

---

### Simple Experiment:
Change `day` to different values, like `8` or `0`, and see how the `default` case works!