from sympy import*
import numpy as np
global x,y,z,t
x,y,z,t=symbols("x,y,z,t")
def req7(xp, yp, xs):  ## KHONG XOA
    n=len(xp)
    xp=np.array(xp)
    yp=np.array(yp)
    m=(sum(xp)*sum(yp)-n*sum(xp*yp))/(sum(xp)**2-n*sum(xp**2))
    b=(1/n)*(sum(yp)-m*sum(xp))
    yxc=m*xs+b
    yxc=round(yxc,2)
    return yxc
xp=[-2, 0, 2]
yp=[0, 2, 3]
xs= 4
print(req7(xp,yp,xs))