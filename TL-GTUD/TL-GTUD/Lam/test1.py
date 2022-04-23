
from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA  

# def req5(f):  ## KHONG XOA
#     fx=diff(f,x,1)
#     fy=diff(f,y,1)
#     fxx=diff(fx,x,1)
#     fyy=diff(fy,y,1)
#     fxy=diff(fx,y,1)
#     lonnhat=[]
#     nhonhat=[]
#     yenngua=[]
#     kiemtra=True
#     try:
#         diemdung=solve((fx,fy),(x,y),dict=True)
#     except:
#         kiemtra=False
#     if kiemtra==True:
#         for diem in diemdung:
#             check=True
#             try:
#                 a=diem[x]
#                 b=diem[y]
#             except:
#                 check=False
#             if check==True:
#                 if a.is_real==True and b.is_real==True:
#                     fxxa=fxx.subs(x,a).subs(y,b)
#                     fyya=fyy.subs(y,b).subs(x,a)
#                     fxya=fxy.subs(y,b).subs(x,a)
#                     denta=(fxya)**2-fyya*fxxa
#                     if denta < 0 and fxxa<0:
#                         lonnhat.append((a,b))
#                     elif denta < 0 and fxxa > 0:
#                         nhonhat.append((a,b))
#                     elif denta>0:
#                         yenngua.append((a,b))
#     return (nhonhat,lonnhat,yenngua)
# print(req5(x + y))
# print(req5(3*y**2 - 2*y**3 -3*x**2 + 6*x*y))
# print(req5(x**2*y+4))#Xu li khong ton tai
# print(req5(x**2 + y**2))
# print(req5(x*y-x))
# print(req5(sin(x)+cos(y)))####3
# print(req5(3*x**2+2*x*y+4*y**2+x-3*y+5))
# print(req5(x**3 - (3/2) * y**4 - 3*x*y*2))
# # print(req5(req5(x**2+y**2-4*x+6*y+2)))#####33

# def req2(f, a, b, c):
#     d0=f.subs(x,a).subs(y,b).subs(z,c)
#     resultx=f.subs(y,b).subs(z,c)
#     resulty=f.subs(x,a).subs(z,c)
#     resultz=f.subs(x,a).subs(y,b)
#     print(resultx,resulty,resultz)

#     if resultx.is_real==False or resulty.is_real==False or resultz.is_real==False or d0.is_real==False:
#         return None
    
#     d2x=limit((resultx-d0 ) / (x - a),x,a)
#     d2y=limit((resulty-d0 ) / (y - b),y,b)
#     d2z=limit((resultz-d0 ) / (z - c),z,c)
#     gd=d2x*(x-a)+d2y*(y-b)+d2z*(z-c)+d0
#     if d2x.is_real==False or d2y.is_real==False or d2z.is_real==False or gd==nan or gd==zoo or gd.is_real==False :
#         return None
#     return gd

# # print(req2(x**2 + y**2 - 2*z**2 + z*log(z), 1, 1, -1))
# # print(req2(abs(x)+abs(y) +abs(z),1,1,1))
# # print(req2(x**2 + y*z - 2*z**2, 1, 0, 1))
# print(req2(ln(x),1,2,3))
# def req7(xp, yp, xs):  ## KHONG XOA
#     n=len(yp)
#     xp=np.array(xp)
#     yp=np.array(yp)
#     mxp=(sum(xp)*sum(yp)-n*sum(xp*yp))/(sum(xp)**2-n*sum(xp**2))
#     byp=(1/n)*(sum(yp)-mxp*sum(xp))
#     kqreq7=mxp*xs+byp
#     if round(kqreq7,2)==int(kqreq7):
#         return int(kqreq7)
#     else:
#         return round(kqreq7,2)
# print(req7([-2, 1, 4], [0, 2, 5], 3))
# print(req7([-2, 0, 2], [0, 2, 3], 4))



# def req8(f, eta, xi, tol): ## KHONG XOA
#     fx = diff(f,x)
#     check = False
#     try:
#       if(nsolve(diff(fx,x),x,0)):
#         check = True
#       nsolve(fx,x,0)
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

# def req8(f, eta, xi, tol):
#     dx=diff(f,x)
#     array=[xi- eta*dx.subs(x,xi)]
#     for i in range(100):
#         new=array[i] - eta*(dx.subs(x,array[i]))
#         if abs(dx.subs(x,new))<tol:
#             if round(array[i],2) == int(array[i]):
#                 return int(array[i])
#             else:
#                 return round(array[i],2)
#         array.append(new)
#     return 
# print(req8(x**2 + 2*sin(x), 0.1, -5, 1e-3))


def req1(f,g,a):## KHONG XOA
    try:
        resulta=f+g
        resulta1=resulta.subs(x,a)
        da=limit((resulta-resulta1)/(x-a),x,a)
        if da==nan or da==zoo or da.is_real==False or resulta1.is_real==False:
            tmp1 =None
        else:
            tmp1=round(da,2)
    except:
        tmp1=None

    try:
        resultb=f*g
        resultb1=resultb.subs(x,a)
        db=limit((resultb-resultb1)/(x-a),x,a)
        if db==nan or db==zoo or db.is_real==False or resultb1.is_real==False:
            tmp2 =None
        else:
            tmp2=round(db,2)
    except:
        tmp2=None

        
    try:
        resultc=f.subs(x,g)
        resultc1=resultc.subs(x,a)
        dc=limit((resultc-resultc1)/(x-a),x,a)
        if dc==nan or dc==zoo or dc.is_real==False or resultc1.is_real==False:
            tmp3 =None
        else:
            tmp3=round(dc,2)
    except:
        tmp3=None

    try:
        resultd=f/g
        resultd1=resultd.subs(x,a)
        dd=limit((resultd-resultd1)/(x-a),x,a)
        if dd==nan or dd==zoo or dd.is_real==False or resultd1.is_real==False:
            tmp4=None
        else:
            tmp4=round(dd,2)
    except:
        tmp4=None
    return (tmp1,tmp2,tmp3,tmp4)

print(req1(x**3, 2*x**5-7*x**2, 1))
print(req1(x**2,log(abs(x))*sin(x),-1))
print(req1(cos(x),log(x),-1))
print(req1(x**2 + 2*x, x**3, 1))