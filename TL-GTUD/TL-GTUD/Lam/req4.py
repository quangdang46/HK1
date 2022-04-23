from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA     
#check    
def req4(a, b, n): 
    kt=0
    for i in range(0,n+1):
        kt+=(factorial(n)/(factorial(i)*factorial(n-i)))*(a**(n-i)*b**i)
    return kt
print(req4(-x, 1, 2))
