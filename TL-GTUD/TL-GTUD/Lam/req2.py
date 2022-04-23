from sympy import*
import numpy as np
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA 
def req2(f, a, b, c):
    dx=diff(f,x)
    dy=diff(f,y)
    dz=diff(f,z)
    d1=dx.subs(x,a)
    d2=dy.subs(y,b)
    d3=dz.subs(z,c)
    d0=f.subs(x,a).subs(y,b).subs(z,c)
    g=d1*(x-a)+d2*(y-b)+d3*(z-c)+d0
    return g
print(req2(x**2 + y*z - 2*z**2, 1, 0, 1))
