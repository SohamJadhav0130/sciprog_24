*Practical 1: Numerical Integration using the Trapezoidal Rule*

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