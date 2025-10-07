# C Pointers Practice Exercises

Progressive exercises to master pointers and function pointers in C.

---

## Exercise 1: Basic Pointer Manipulation

Write a function `swap` that takes two integer pointers and swaps their values.

```c
void swap(int *a, int *b);

// Test in main:
int x = 10, y = 20;
printf("Before: x=%d, y=%d\n", x, y);
swap(&x, &y);
printf("After: x=%d, y=%d\n", x, y);
// Expected output: Before: x=10, y=20
//                  After: x=20, y=10
```

---

## Exercise 2: Array Manipulation with Pointers

Write a function that doubles every element in an array using pointer arithmetic.

```c
void doubleArray(int *arr, int size);

// Test:
int numbers[] = {1, 2, 3, 4, 5};
doubleArray(numbers, 5);
// numbers should now be: {2, 4, 6, 8, 10}
```

---

## Exercise 3: String Length with Pointers

Write a function that calculates string length using only pointers (no array indexing).

```c
int stringLength(char *str);

// Test:
printf("%d\n", stringLength("Hello"));  // Should print 5
```

---

## Exercise 4: Calculator with Function Pointers

Create a calculator that uses an array of function pointers. Add a `divide` function and allow the user to select operations by index.

```c
int divide(int a, int b);

int main(void) {
    int (*operations[4])(int, int) = {add, subtract, multiply, divide};
    char *names[] = {"add", "subtract", "multiply", "divide"};
    
    // Call each operation and print results
}
```

---

## Exercise 5: Struct Modification by Reference

Create a `Point` struct and write a function that moves a point by adding dx and dy to its coordinates.

```c
typedef struct {
    int x;
    int y;
} Point;

void movePoint(Point *p, int dx, int dy);

// Test:
Point p = {5, 10};
movePoint(&p, 3, -2);
// p should now be at (8, 8)
```

---

## Exercise 6: Function Pointer Array

Create a menu-driven program where user selects an operation:

```c
void printMenu();
int (*selectOperation(int choice))(int, int);

int main(void) {
    int choice, a, b;
    printMenu();
    scanf("%d", &choice);
    
    int (*op)(int, int) = selectOperation(choice);
    if (op != NULL) {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Result: %d\n", op(a, b));
    }
}
```

---

## Exercise 7: Max Element with Pointer

Find the maximum element in an array and return a pointer to it.

```c
int* findMax(int *arr, int size);

// Test:
int arr[] = {3, 7, 2, 9, 1};
int *max = findMax(arr, 5);
printf("Max value: %d\n", *max);
*max = 100;  // This should modify arr[3]
```

---

## Exercise 8: Generic Comparison Function

Write a function that takes a comparison function pointer and finds elements based on that criteria.

```c
int isEven(int n) { return n % 2 == 0; }
int isPositive(int n) { return n > 0; }

int countIf(int *arr, int size, int (*predicate)(int));

// Test:
int numbers[] = {-2, 3, 4, -1, 6};
printf("Even numbers: %d\n", countIf(numbers, 5, isEven));
printf("Positive numbers: %d\n", countIf(numbers, 5, isPositive));
```

---

## Exercise 9: Dynamic Memory and Structs

Create a function that allocates an array of structs dynamically and initializes them.

```c
typedef struct {
    char name[50];
    int age;
} Person;

Person* createPersonArray(int size);
void printPersonArray(Person *arr, int size);

// Don't forget to free the memory!
```

---

## Exercise 10: Advanced - Callback Functions

Implement a simple forEach function that applies a given function to each array element.

```c
void forEach(int *arr, int size, void (*callback)(int*));

void doubleValue(int *n) { *n *= 2; }
void printValue(int *n) { printf("%d ", *n); }

// Test:
int arr[] = {1, 2, 3, 4, 5};
forEach(arr, 5, doubleValue);
forEach(arr, 5, printValue);  // Should print: 2 4 6 8 10
```

---

## Tips for Practice

- Start with exercises 1-3 to master basic pointers
- Move to 4-6 for function pointers
- Try 7-10 for combining concepts
- Always check for NULL pointers and avoid memory leaks
- Use `valgrind` (on Linux/Mac) to check for memory errors

---

## Learning Path

**Beginner** → Exercises 1-3  
**Intermediate** → Exercises 4-6  
**Advanced** → Exercises 7-10

Good luck! 🚀
