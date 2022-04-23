from sympy import*
import numpy as np
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA 
# def req5(f):  ## KHONG XOA
#     fx=diff(f,x,1)
#     fy=diff(f,y,1)
#     diemdung=solve((fx,fy),x,y)
#     fxx=diff(fx,x,1)
#     fyy=diff(fy,y,1)
#     fxy=diff(fy,x,1)
#     lonnhat=[]
#     nhonhat=[]
#     yenngua=[]
#     if fxx==0 and fyy==0:
#         yenngua=[tuple(diemdung.values())]
#     else:
#         for diem in diemdung:
#             [xa,ya] = diem
#             fxxa=fxx.subs(x,xa)
#             fyya=fyy.subs(y,ya)
#             denta=(fxy)**2-fyya*fxxa
#             if denta < 0 and fxxa<0:
#                 lonnhat.append(diem)
#             elif denta < 0 and fxxa > 0:
#                 nhonhat.append(diem)
#             elif denta > 0:
#                 yenngua.append(diem)
#     return  nhonhat,lonnhat,yenngua

# print(req5(3*y**2 - 2*y**3 -3*x**2 + 6*x*y))



# def req5(f):  ## KHONG XOA
#     max_list = []
#     min_list = []
#     saddle_list = []
#     fx=diff(f,x,1)
#     fxx=diff(fx,x,1)
#     fy=diff(f,y,1)
#     fyy=diff(fy,y,1)
#     fxy=diff(fy,x,1)
#     M=solve((fx,fy),x,y)
#     if fxx==0 and fyy==0:
#         saddle_list.append(M)
#         saddle = tuple(saddle_list[0].values())
#         saddle_list = [saddle]
#     else:
#         for A in M:
#             [valxa, valya] = A
#             fxxa=lambdify(x,fxx,"numpy")(valxa)
#             fyya=lambdify(y,fyy,"numpy")(valya)
#         D=fxxa*fyya-(fxy)**2
#         if D < 0:
#             saddle_list.append(A)
#         elif D > 0 and fxxa > 0:
#             min_list.append(A)
#         elif D > 0 and fyya < 0:
#             max_list.append(A)
#     return  min_list, max_list,saddle_list
# def req6(message, x, y, z):  # KHONG XOA
#     kqreq6 = ""
#     for i in range (len(message)):
#         kqreq6 += chr(abs(x**2 - y**2 - z) ^ ord(message[i]))
#     return kqreq6



# def req6(message, x, y, z):  # KHONG XOA
#     kqreq6 = ""
#     for i in message:
#         kqreq6 += chr(abs(x**2-y**2-z) ^ ord(i))
#     return kqreq6
# print(req6("jgnnm",1,1,2))
# def req6(message, x, y, z):  ## KHONG XOA
#     f=abs(x**2-y**2-z)
#     fa=bin(f)
#     fb=len(message)
#     fc=[]
#     i=0
#     while i<fb:
#         fc.append(ord(message[i]))
#         i+=1
#     fd=[]
#     for n in fc:
#         fd.append(bin(n))
#     fe=[]
#     for j in fd:
#         fe.append(int(fa,2)^int(j,2))
#     ff=[]
#     for r in fe:
#         ff.append(chr(r))
#     fg=""
#     for v in ff:
#         fg+=v
#     return fg




# def req7(xp, yp, xs):  ## KHONG XOA
#     xp=np.array(xp)
#     yp=np.array(yp)
#     n=len(xp)
#     m=(sum(xp)*sum(yp)-n*sum(xp*yp))/(sum(xp)**2-n*sum(xp**2))
#     print(m)
#     b=(1/n)*(sum(yp)-m*sum(xp))
#     print(b)
#     kqreq7=m*xs+b
#     if round(kqreq7,2)==int(kqreq7):
#         return kqreq7
#     else:
#         return round(kqreq7,2)

# print(req7([-2, 1, 4], [0, 2, 5], 3))



def req8(f, eta, xi, tol): ## KHONG XOA
    fx = diff(f,x)
    check = False
    try:
      if(nsolve(diff(fx,x),x,0)):
        check = True
      nsolve(fx,x,0)
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