from sympy import*
import numpy as np
global x,y,z,t
x,y,z,t=symbols("x,y,z,t")
def req5(f):  ## KHONG XOA
    max_list = []
    min_list = []
    saddle_list = []
    fx=diff(f,x,1)
    fxx=diff(fx,x,1)
    fy=diff(f,y,1)
    fyy=diff(fy,y,1)
    fxy=diff(fy,x,1)
    M=solve((fx,fy),x,y)
    if fxx==0 and fyy==0:
        saddle_list.append(M)
        saddle = tuple(saddle_list[0].values())
        saddle_list = [saddle]
    else:
        for A in M:
            [valxa,valya]= A
            fxxa=lambdify(x,fxx,"numpy")(valxa)
            fyya=lambdify(y,fyy,"numpy")(valya)
        D=fxxa*fyya-(fxy)**2
        if D < 0:
            saddle_list.append(A)
        elif D > 0 and fxxa > 0:
            min_list.append(A)
        elif D > 0 and fyya < 0:
            max_list.append(A)
    return  min_list, max_list,saddle_list
print(req5(x**2+y**2-4*x+6*y+2))