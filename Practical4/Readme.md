*Practical 4: Numerical Integration using the Trapezoidal Rule*

Problem Statement:

The task is to approximate the integral of tan⁡(x) from 0 to 60 degrees using the *Trapezoidal Rule*. The result is compared with the exact value of ln⁡(2), which is the known integral of tan⁡(x)tan(x) from 0 to π/4​.

*Algorithm:*

- Initialization:
        Define an array *TanArr* to store the values of tan⁡(x) at 12 points.
        Convert degrees to radians using the function *degtorad()*.
    
- Numerical Integration:
        Apply the Trapezoidal Rule by summing the values of tan⁡(x) at the endpoints and intermediate points.
 
- Comparison:
        Compute the area using the Trapezoidal Rule and compare it with the known value ln⁡(2).

Output:

``` Shell
PS D:\Study\ICHEC\sciprog_24\Practical4> ./trap.exe       
TanArr [0] - 0.000000
TanArr [1] - 0.087489
TanArr [2] - 0.176327
TanArr [3] - 0.267949
TanArr [4] - 0.363970
TanArr [5] - 0.466308
TanArr [6] - 0.577350
TanArr [7] - 0.700208
TanArr [8] - 0.839100
TanArr [9] - 1.000000
TanArr [10] - 1.191754
TanArr [11] - 1.428148
Initial area (sum at x(0) and x(12)) = 0.000000
The value of the sum after the loop is: 14.197204

 Trapezoidal result is: 0.619470
Real result is: 0.693147
```