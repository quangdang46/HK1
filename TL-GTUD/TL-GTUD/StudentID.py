from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA     
# def req1(f,g,a):## KHONG XOA
#     try:
#         da1 = f+g
#         da=diff(da1,x).subs(x,a)
#         if da==zoo or da==nan:
#             tmp1=None
#         else:
#             tmp1=round(da,2)
#     except:
#         tmp1=None

#     try:
#         db2 = f*g
#         db=diff(db2,x).subs(x,a)
#         if db==zoo or db==nan:
#             tmp2=None
#         else:
#             tmp2=round(db,2)
#     except:
#         tmp2=None

#     try:
#         dc3 = f.subs(x,g)
#         dc=diff(dc3,x).subs(x,a)
#         if dc==zoo or dc==nan:
#             tmp3=None
#         else:
#             tmp3=round(dc,2)
#     except:
#         tmp3=None

#     try:
#         dd4 = f/g
#         dd=diff(dd4,x).subs(x,a)
#         if dd==zoo or dd==nan:
#             tmp4=None
#         else:
#             tmp4=round(dd,2)
#     except:
#         tmp4=None
#     tuple1=(tmp1,tmp2,tmp3,tmp4)
#     return tuple1
# def req1(f, g, a):  ## KHONG XOA
#     df1=df2=df3=df4=None
#     df1=diff(f+g,x)
#     df2=diff(f*g,x)
#     df3=diff(f.subs(x,g),x)
#     df4=diff(f/g,x)
#     tup=(round(df1.subs(x,a),2),round(df2.subs(x,a),2),round(df3.subs(x,a),2),round(df4.subs(x,a),2))
#     tups=list(tup)
#     for i in range(4):
      
#       if(tups[i]=="nan" or tups[i]==zoo):
#         tups[i]=None

#     return tuple(tups)
# print(req1(x**2-2*abs(x),(x-1)*(x-2)**2,1))
def req2(f, a, b, c):  ## KHONG XOA
    temp = f.subs([(x,a),(y,b),(z,c)])
    y_1 = limit((f.subs([(y,b),(z,c)]) - temp) / (x - a),x,a)
    y_2 = limit((f.subs([(x,a),(z,c)]) - temp) / (y - b),y,b)
    y_3 = limit((f.subs([(x,a),(y,b)]) - temp) / (z - c),z,c)
    y123=temp + y_1*(x - a) + y_2*(y - b) + y_3*(z - c)
    if y==nan or y==zoo:
        return None
    return y
print(req2(x**2 + y*z - 2*z**2, 1, 0, 1))
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

def req4(a, b, n): ## KHONG XOA
    kt=0
    for i in np.arange(0,n+1):
        kt+=(factorial(n)/(factorial(i)*factorial(n-i)))*(a**(n-i)*b**i)
    return kt

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
            [valxa, valya] = A
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








def req6(message, x, y, z):  ## KHONG XOA
    f=abs(x**2-y**2-z)
    fa=bin(f)
    fb=len(message)
    fc=[]
    i=0
    while i<fb:
        fc.append(ord(message[i]))
        i+=1
    fd=[]
    for n in fc:
        fd.append(bin(n))
    fe=[]
    for j in fd:
        fe.append(int(fa,2)^int(j,2))
    ff=[]
    for r in fe:
        ff.append(chr(r))
    fg=""
    for v in ff:
        fg+=v
    return fg








def req7(xp, yp, xs):  ## KHONG XOA
    n=len(xp)
    xp=np.array(xp)
    yp=np.array(yp)
    m=(sum(xp)*sum(yp)-n*sum(xp*yp))/(sum(xp)**2-n*sum(xp**2))
    b=(1/n)*(sum(yp)-m*sum(xp))
    yxc=m*xs+b
    yxc=round(yxc,2)
    return yxc

# def req8(f, eta, xi, tol): ## KHONG XOA
#     fx = diff(f,x)
#     fx = lambdify(x,fx,"numpy")
#     # print(fx)
#     xo = [xi - eta*fx(xi)]
#     for i in range (100):
#         new = xo[i] - eta*fx(xo[i])
#         if new==xo[i]:
#             return None
#         if (abs(fx(xo[i])) < tol):
#             if(round(xo[i],2) == int(xo[i])):
#                 return int(xo[i])
#             else:
#                 return round(xo[i],2)
        
#         xo.append(new)
#     return new     
def req8(f, eta, xi, tol): ## KHONG XOA
    fx = diff(f,x)
    check = False
    try:
      if(nsolve(diff(fx,x),x,0)): #check deriviate
        check = True
      nsolve(fx,x,0) #check no tai fx(xo) = 0 co ton tai ?
    except:
      if(check):
        rs = nsolve(diff(fx,x),x,0)
        fx = lambdify(x,fx,'numpy')
        if(abs(fx(rs)) >  tol):
            return None

    fx = lambdify(x,fx,"numpy")
    xo = [xi - eta*fx(xi)]
    for i in range (10000):
        new = xo[i] - eta*fx(xo[i])
        if (abs(fx(xo[i])) < tol):
            if(round(xo[i],2) == int(xo[i])):
                return int(xo[i])
            else:
                return round(xo[i],2)
        xo.append(new)
    return
print(req5(x**3+y**3-15*x*y)) 