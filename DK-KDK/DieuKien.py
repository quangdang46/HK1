from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA  
def req5(f):  ## KHONG XOA
    fld=diff(f,t,1)
    fx=diff(f,x,1)
    print("fx=",fx)
    fy=diff(f,y,1)
    print("fy=",fy)
    fxx=diff(fx,x,1)
    print("fxx=",fxx)
    fyy=diff(fy,y,1)
    print("fyy=",fyy)
    fxy=diff(fx,y,1)
    print("fxy=",fxy)
    print("_________________________")
    fldx=diff(fld,x,1)
    print("fldx=",fldx)
    fldy=diff(fld,y,1)
    print("fldy=",fldy)
    print("________________________")
    kiemtra=True
    try:
        try:
            diemdung=linsolve((fx,fy,fld),(x,y,t),dict=True)
        except:
            diemdung=solve((fx,fy,fld),(x,y,t),dict=True)
    except:
        kiemtra=False
    if kiemtra==True:
        for diem in diemdung:
            check=True
            try:
                a=diem[x]
                b=diem[y]
                c=diem[t]
            except:
                check=False
            if check==True:
                if a.is_real==True and b.is_real==True and c.is_real==True:
                    if a==int(a): a=int(a)
                    if b==int(b): b=int(b)
                    if c==int(c): c=int(c)
                    print((a,b,c))

print(req5(     x*exp(y)+t*(x**2+y**2-2)            ))