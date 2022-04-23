from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 

global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA     

def req1(f, g, a):  ## KHONG XOA
    if str(f).isdigit()==True:
      f=0*x+f
    if str(g).isdigit()==True:
      g=0*x+g
    try:
        c1=diff(f+g,x)
        d1=c1.subs(x,a)
        if d1==nan or d1==zoo or not d1.is_real:
            cau1=None
        else:
            cau1=round(float(d1),2)
    except:
        cau1=None
    try:
        c2=diff(f*g,x)
        d2=c2.subs(x,a)
        if d2==nan or d2==zoo or not d2.is_real:
            cau2=None
        else:
            cau2=round(float(d2),2)
    except:
        cau2=None
    try:
        c3=diff(f.subs(x,g),x)
        d3=c3.subs(x,a)
        if d3==nan or d3==zoo or not d3.is_real:
            cau3=None
        else:
            cau3=round(float(d3),2)
    except:
        cau3=None
    try:
        c4=diff(f/g,x)
        d4=c4.subs(x,a)
        if d4==nan or d4==zoo or not  d4.is_real:
            cau4=None
        else:
            cau4=round(float(d4),2)
    except:
        cau4=None
    tuple=(cau1,cau2,cau3,cau4)
    return tuple
  

def req2(f, a, b, c):  ## KHONG XOA
    dx=diff(f,x).subs(x,a).subs(y,b).subs(z,c)
    y0=f.subs(x,a).subs(y,b).subs(z,c)
    dy=diff(f,y).subs(x,a).subs(y,b).subs(z,c)
    dz=diff(f,z).subs(x,a).subs(y,b).subs(z,c)
    dx3=float(dx)
    dy3=float(dy)
    dz3=float(dz)
    r=dx3*(x-a)+dy3*(y-b)+dz3*(z-c)+float(y0)
    if dx==zoo or dx==nan or not dx.is_real:
        r =None
        return r
    if dy==zoo or dy==nan or not dy.is_real:
        r =None
        return r
    if dz==zoo or dz==nan or not dz.is_real:
        r =None
        return r
    return r
def req3(w, f1, f2, f3, a):  ## KHONG XOA
    f=w.subs(x,f1).subs(y,f2).subs(z,f3)
    dw=diff(f,t)
    kq=dw.subs(t,a)
    if kq==nan or not kq.is_real or kq==zoo:
        return kq==None
    kq=float(kq)
    return kq

def req4(a, b, n):  ## KHONG XOA
    kqua=0;
    for i in range (0,n+1):
        kqua= kqua+ (a**(n-i)*(b**i)*float((factorial(n)/(factorial(i)*factorial(n-i)))))
    return kqua

def req5(f):  ## KHONG XOA
    cd=[]
    ct=[]
    yn=[]
    dx=diff(f,x)
    dy=diff(f,y)
    a=diff(dx,x)
    b=diff(dx,y)
    c=diff(dy,y)
    array=solve((dx,dy),(x,y),dict=True)
    for k in array:
      if k[x].is_real and k[y].is_real:
        a2=a.subs({x:k[x],y:k[y]})
        b2=b.subs({x:k[x],y:k[y]})**2
        c2=c.subs({x:k[x],y:k[y]})
        denta=-b2+a2*c2
        if denta<0:
          yn.append((k[x],k[y]))
        elif denta>0 and a2<0:
          cd.append((k[x],k[y]))
        elif denta>0 and a2>0:
          ct.append((k[x],k[y]))
    dapan=ct,cd,yn
    return dapan

def req6(message, x, y, z):  ## KHONG XOA
    thongdiep=""
    if x>=0 and x<=9 and y>=0 and y<=9 and z>=0 and z<=9:
     sck= abs(x**2-y**2-z)
     for i in message:
         thongdiep+= chr(ord(i)^sck)
    return thongdiep
   
def req7(xp, yp, xs):  ## KHONG XOA
    n=len(xp)
    tongn2=0
    tongx=0
    tem=0
    tongxy=0
    tongy=0
    for i in range(0,n):
      tongx +=xp[i]
      tongy +=yp[i]
      tem= xp[i]*yp[i]
      tongxy+=tem
      tongn2+= (xp[i])**2
    m=((tongx*tongy)-n*tongxy)/(-n*tongn2+tongx**2)
    b=(1/n)*(tongy-m*tongx)
    kqdudoan=round(float(m*xs+b),2)
    return kqdudoan
def req8(f, eta, xi, tol): ## KHONG XOA
  ketq=xi
  dh=diff(f,x)
  for i in range(0,3000):
    ketq = ketq-eta*dh.subs(x,ketq)
    if abs(dh.subs(x,ketq))<tol:
      break
    ketq=float(ketq)
  ketq=round(ketq,2)
  if ketq==nan or ketq==zoo :
    ketq=None
  return ketq