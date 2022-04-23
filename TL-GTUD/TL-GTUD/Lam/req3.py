from sympy import*
import numpy as np
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA 
def req3(w, f1, f2, f3, a):  ## KHONG XOA
    w = w.subs([(x,f1),(y,f2),(z,f3)])
    try:
        if(w == zoo or w == nan):
            return None 
        w = diff(w,t)
        w = w.subs(t,a)
        if(w == float(w)):
            return w  
    except:
        return None

'''
def req3(w, f1, f2, f3, a):## KHONG XOA
    feq=w.subs(x,f1).subs(y,f2).subs(z,f3)
    dfeq=diff(feq,t).subs(t,a)
    return dfeq
'''
