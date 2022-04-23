from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t")
def req1(f,g,a):
    da1 = f+g
    da=diff(da1,x).subs(x,a)
    tmp1=round(da,2)
    if tmp1==nan or tmp1==zoo:
        tmp1 =None
    db2 = f*g
    db=diff(db2,x).subs(x,a)
    tmp2=round(db,2)

    dc3 = f.subs(x,g)
    dc=diff(dc3,x).subs(x,a)
    tmp3=round(dc,2)

    dd4 = f/g
    dd = diff(dd4,x).subs(x,a)
    tmp4=round(dd,2)

    tuple1=(tmp1,tmp2,tmp3,tmp4)
    return tuple1
print(req1(1/x, x**3,0))




