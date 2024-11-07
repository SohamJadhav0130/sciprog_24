*Problem Statement:*

The program approximates the tan⁡(x) integral from 0 to π/3​ using the Trapezoidal Rule and compares the result to log⁡(2). It computes the absolute and relative errors.
*Algorithm:*

- Initialization: Set the range [0, π/3​] and number of steps (12).
- Numerical Integration: Use the Trapezoidal Rule to calculate the integral of tan⁡(x).
- Comparison: Compute log⁡(2), then calculate the absolute and relative differences between the integral and log⁡(2).

*Output*

```Shell
PS D:\Study\ICHEC\sciprog_24\Practical3> .\integral.exe
The Integral is: 0.6874 
log(2) value is: 0.6931
abs_diff = 0.005723
 rel_diff = 0.008256
 ``` 
