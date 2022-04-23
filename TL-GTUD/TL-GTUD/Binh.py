from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t")
def req2(f, a, b, c):  ## KHONG XOA
    d_x = diff(f,x).subs(x,a).subs(y,b).subs(z,c)
    d_y = diff(f,y).subs(x,a).subs(y,b).subs(z,c)
    d_z = diff(f,z).subs(x,a).subs(y,b).subs(z,c)
    y0 = f.subs(x,a).subs(y,b).subs(z,c)
    if d_x==zoo or d_x == nan or not d_x.is_real:
        return None
    if d_y==zoo or d_y == nan or not d_y.is_real:
        return None
    if d_z==zoo or d_z == nan or not d_z.is_real:
        return None
    d_x1=float(d_x)*(x-a)
    d_y1=float(d_y)*(y-b)
    d_z1=float(d_z)*(z-c)
    ketqua = d_x1+d_y1+d_z1+float(y0)
    return ketqua

