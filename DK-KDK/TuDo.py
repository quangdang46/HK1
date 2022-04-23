from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA  
def req5(f):  ## KHONG XOA
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
    print("_______")
    lonnhat=[]
    nhonhat=[]
    yenngua=[]
    kiemtra=True
    try:
        try:
            diemdung=linsolve((fx,fy),(x,y),dict=True)
        except:
            diemdung=solve((fx,fy),(x,y),dict=True)
    except:
        kiemtra=False
    if kiemtra==True:
        for diem in diemdung:
            check=True
            try:
                a=diem[x]
                b=diem[y]
            except:
                check=False
            if check==True:
                if a.is_real==True and b.is_real==True:
                    if a==int(a): a=int(a)
                    if b==int(b): b=int(b)
                    print((a,b))
                    fxxa=fxx.subs(x,a).subs(y,b)
                    fyya=fyy.subs(y,b).subs(x,a)
                    fxya=fxy.subs(y,b).subs(x,a)
                    denta=(fxya)**2-fyya*fxxa
                    if denta < 0 and fxxa<0:
                        lonnhat.append((a,b))
                    elif denta < 0 and fxxa > 0:
                        nhonhat.append((a,b))
                    elif denta>0:
                        yenngua.append((a,b))
    return (nhonhat,lonnhat,yenngua)









print(req5(  (cos(x))**2+(sin(y))**2    ))
