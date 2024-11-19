# Practical 9

This is the 9th practical of ICHEC, in this week we are doing the following:

This code checks if a matrix is a "magic square." A magic square is a matrix where the sum of all rows, all columns, and both diagonals are equal to a specific value called the magic constant (M).

# The formula for the magic constant M is:
         M = n × ( n^ 2 + 1 ) / 2 

# Program Details:

main_stub.c:
    This program reads a matrix from a file and dynamically allocates memory for it.
    It uses a function from the magic_square.h file to check if the matrix is a magic square.
    After the check, it frees the memory and closes the file.

magic_square.h:
    Contains a function called ismagicsquare.
    This function verifies if the input matrix satisfies the conditions of a magic square. It ensures that the sums of all rows, columns, and both diagonals are equal to MM.

Input Files:
    magic_square.txt: Contains a matrix that fulfills the magic square conditions.
    not_magic_square.txt: Contains a matrix that does not fulfill the conditions.

This exercise demonstrates dynamic memory allocation, file handling, and mathematical validation of matrices in C.

# Compile and Output:-

## 1. mainstub.c

``` shell 

PS D:\Study\ICHEC\sciprog_24\Practical9> gcc main_stub.c -o magic
```

# Execute:- 

* For magic_square.txt:- This file has the matrix whose sum of each rows, sum of each columns and sum of both the diagonals is equal to the constant M, which satisfies the condition of Magic Square.

``` shell
PS D:\Study\ICHEC\sciprog_24\Practical9> .\magic.exe    
Enter file name: magic_square.txt
No. lines, 3
This is magic!

```

* not_magic_square.txt: - This file has the matrix whose sum of each rows, sum of each columns and sum of both diagonals is *NOT EQUAL* to the constant M, which doesn't satisfy the condition of Magic Square.

```shell 
PS D:\Study\ICHEC\sciprog_24\Practical9> .\magic.exe
Enter file name: not_magic_square.txt
No. lines, 3
This is not magic
```