from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA

def req8(f, eta, xi, tol): ## KHONG XOA
    fx = diff(f,x)
    fx = lambdify(x,fx,"numpy")
    x0 = []
    x0.append(xi - eta*fx(xi))
    for i in range (100):
        A = x0[i] - eta*fx(x0[i])
        if (abs(fx(x0[i])) < tol):
            if(round(x0[i],2) == int(x0[i])):
                return int(x0[i])
            else:
                return round(x0[i],2)
        x0.append(A)
    return A
print(req8(x**2 + 2*sin(x), 0.1, -5, 1e-3))

# def req8(f, eta, xi, tol): ## KHONG XOA
#     fx = diff(f,x)
#     check = False
#     try:
#       if(nsolve(diff(fx,x),x,0)): #check deriviate
#         check = True
#       nsolve(fx,x,0) #check no tai fx(xo) = 0 co ton tai ?
#     except:
#       if(check):
#         rs = nsolve(diff(fx,x),x,0)
#         fx = lambdify(x,fx,'numpy')
#         if(abs(fx(rs)) >  tol):
#             return None

#     fx = lambdify(x,fx,"numpy")
#     xo = [xi - eta*fx(xi)]
#     for i in range (10000):
#         new = xo[i] - eta*fx(xo[i])
#         if (abs(fx(xo[i])) < tol):
#             if(round(xo[i],2) == int(xo[i])):
#                 return int(xo[i])
#             else:
#                 return round(xo[i],2)
#         xo.append(new)
#     return 
# print(req8(x**2 + 2*sin(x), 0.1, -5, 1e-3))