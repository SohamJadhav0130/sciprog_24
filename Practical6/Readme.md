# Practical 6 
This practical contains the information about the Practical 6

Steps to process the files are:

```shell
D:\Study\ICHEC\sciprog_24\Practical6\s6> gcc -c main.c  
D:\Study\ICHEC\sciprog_24\Practical6\s6> gcc -c matrices_multiplication.c
PS D:\Study\ICHEC\sciprog_24\Practical6\s6> gcc -o matmulC main.o matrices_multiplication.o
```

# Output - 
``` Shell
./matmulC.exe

 This is matrix A

  0   1   2
  1   2   3
  2   3   4
  3   4   5
  4   5   6

 This is matrix B

  0  -1  -2  -3
  1   0  -1  -2
  2   1   0  -1

 This is matrix C

  5   2  -1  -4
  8   2  -4 -10
 11   2  -7 -16
 14   2 -10 -22
 17   2 -13 -28
```