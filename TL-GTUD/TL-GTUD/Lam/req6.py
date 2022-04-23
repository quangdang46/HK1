from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA
def req6(message, x, y, z):  ## KHONG XOA
    f=abs(x**2-y**2-z)
    fa=bin(f)
    fb=len(message)
    fc=[]
    i=0
    while i<fb:
        fc.append(ord(message[i]))
        i+=1
    print(fc)
    fd=[]
    for n in fc:
        fd.append(bin(n))
    print(fd)
    fe=[]
    for j in fd:
        fe.append(int(fa,2)^int(j,2))
    print(fe)
    ff=[]
    for r in fe:
        ff.append(chr(r))
    print(ff)
    fg=""
    for v in ff:
        fg+=v
    return fg
print(req6("khi*nol",1,3,2))

