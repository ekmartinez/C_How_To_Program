# C Arrays

Arrays are data structures consisting of related data items of the same type. Arrays and structs are “static” entities in that they remain the same size throughout program execution. They may be of automatic storage class and hence created and destroyed each time the blocks in which they’re defined are entered and exited.

An array is a group of contiguous memory locations that all have the same type. To refer to a particular location or element in the array, we specify the array’s name and the position number of the particular element in the array. The first element in every array is the zeroth element (i.e., the one with position number 0).  The position number in square brackets is called the element’s index or subscript. An
index must be an integer or an integer expression. 

For example, the following statement assigns 1000 to array element c[2].

```c
c[2] = 1000;
```

## Defining Arrays

Arrays occupy space in memory. You specify the type of each element and the number of elements each array requires so that the computer may reserve the appropriate amount of memory. The following definition reserves 12 elements for integer array c, which has indices in the range 0–11.

```c
int c[12];
```

## Initializing an Array in a Definition with an Initializer List

The elements of an array can also be initialized when the array is defined by following the definition with an equals sign and braces, {}, containing a comma-separated list of array initializers.

The following example use initializer list to initialize array n:

```c
int n[5] = {32, 27, 64, 18, 95};
```

If there are fewer initializers than elements in the array, the remaining elements are initialized to zero. For example, the elements of an array can been initialized to zero as follows:

```c
int n[10] = {0};
```

This explicitly initializes the first element to zero and initializes the remaining nine elements to zero because there are fewer initializers than there are elements in the array. Arrays are not automatically initialized to zero. You must at least initialize the first element to zero for the remaining elements to be automatically zeroed. Array elements are initialized before program startup for static arrays and at runtime for automatic arrays.

If the array size is omitted from a definition with an initializer list, the number of elements in the array will be the number of elements in the initializer list. 

For example, the following would create a five-element array initialized with the indicated values:

```c
int n[] = {1, 2, 3, 4, 5};
```

## Specifying an Array’s Size with a Symbolic Constant

Consider the following definition:

```c
#define SIZE 5
```

This #define preprocessor directive defines a symbolic constant SIZE whose value is 5. A symbolic constant is an identifier that’s replaced with replacement text by the C preprocessor before the program is compiled. When the program is preprocessed, all occurrences of the symbolic constant SIZE are replaced with the replacement text 5. Using symbolic constants to specify array sizes makes programs more
modifiable.  As programs get larger, this technique becomes more useful for writing clear, easy to read, maintainable programs—a symbolic constant (like SIZE) is easier to understand than the numeric value 5, which could have different meanings throughout the code.