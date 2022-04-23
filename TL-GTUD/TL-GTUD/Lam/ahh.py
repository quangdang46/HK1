from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA   



def req1(f,g,a):## KHONG XOA
    if str(f).isdigit()==True:
        f=0*x+f
    if str(g).isdigit()==True:
        g=0*x+g

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

print('câu 1:')
print(req1(x**3, 2*x**5-7*x**2, 1))
print(req1(x**2,log(abs(x))*sin(x),-1))
print(req1(cos(x),log(x),-1))
print(req1(x**2 + 2*x, x**3, 1))
print (req1(x**2 + 2*x, x**3, 1))
print (req1(x**3, 2*x**5-7*x**2, 1))
print (req1(1/x**2,x*x,0))
print (req1(1,1,1))
print (req1(1/tan(x),log(x),2))


# def req5(f):  ## KHONG XOA
#     res=1e-9
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
#         try:
#             diemdung=linsolve((fx,fy),(x,y),dict=True)
#         except:
#             diemdung=solve((fx,fy),(x,y),dict=True)
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
#                     if a==int(a): a=int(a)
#                     if b==int(b): b=int(b)
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
#                     # elif denta==0:
#                     #     a+=res
#                     #     b+=res
#                     #     fxxa=fxx.subs(x,a).subs(y,b)


#     return (nhonhat,lonnhat,yenngua)

# print('câu 5:')
# print(req5(x+y-x*exp(y)))
# print(req5(x + y))
# print(req5(3*y**2 - 2*y**3 -3*x**2 + 6*x*y))
# print(req5(x**2*y+4))#Xu li khong ton tai
# print(req5(x**2 + y**2))
# print(req5(x*y-x))
# print(req5(sin(x)+cos(y)))####3
# print(req5(3*x**2+2*x*y+4*y**2+x-3*y+5))
# print(req5(x**2+y**2-4*x+6*y+2))#####33
# print(req5(x**3 - (3/2) * y**4 - 3*x*y*2))
# print (req5(x*y + 4))
# print (req5(3*y**2 - 2*y**3 -3*x**2 + 6*x*y))
