from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t")
# def req8(f, eta, xi, tol): ## KHONG XOA
#     fx = diff(f,x)
#     fx = lambdify(x,fx,"numpy")
#     xo = [xi - eta*fx(xi)]
#     for i in range (100):
#         new = xo[i] - eta*fx(xo[i])
#         if (abs(fx(xo[i])) < tol):
#             if(round(xo[i],2) == int(xo[i])):
#                 return int(xo[i])
#             else:
#                 return round(xo[i],2)
        
#         xo.append(new)
#     return 
# print(req8(x**2 + 2*sin(x), 0.1, -5, 1e-3))
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
            tmp1=round(float(da),2)
    except:
        tmp1=None

    try:
        resultb=f*g
        resultb1=resultb.subs(x,a)
        db=limit((resultb-resultb1)/(x-a),x,a)
        if db==nan or db==zoo or db.is_real==False or resultb1.is_real==False:
            tmp2 =None
        else:
            tmp2=round(float(db),2)

    except:
        tmp2=None

        
    try:
        resultc=f.subs(x,g)
        resultc1=resultc.subs(x,a)
        dc=limit((resultc-resultc1)/(x-a),x,a)
        if dc==nan or dc==zoo or dc.is_real==False or resultc1.is_real==False:
            tmp3 =None
        else:
            tmp3=round(float(dc),2)

    except:
        tmp3=None

    try:
        resultd=f/g
        resultd1=resultd.subs(x,a)
        dd=limit((resultd-resultd1)/(x-a),x,a)
        if dd==nan or dd==zoo or dd.is_real==False or resultd1.is_real==False:
            tmp4=None
        else:
            tmp4=round(float(dd),2)
    except:
        tmp4=None
    return (tmp1,tmp2,tmp3,tmp4)

# # print('câu 1:')
# print(req1(x**3, 2*x**5-7*x**2, 1))
# print(req1(x**2,log(abs(x))*sin(x),-1))
# print(req1(cos(x),log(x),-1))
# print(req1(x**2 + 2*x, x**3, 1))
# print (req1(x**2 + 2*x, x**3, 1))
# print (req1(x**3, 2*x**5-7*x**2, 1))
# print (req1(1/x**2,x*x,0))
# print (req1(1,1,1))
# print (req1(1/tan(x),log(x),2))



def req2(f, a, b, c):
    d0=f.subs(x,a).subs(y,b).subs(z,c)
    resultx=f.subs(y,b).subs(z,c)
    resulty=f.subs(x,a).subs(z,c)
    resultz=f.subs(x,a).subs(y,b)

    if resultx.is_real==False or resulty.is_real==False or resultz.is_real==False or d0.is_real==False:
        return None
    
    d2x1=limit((resultx-d0 ) / (x - a),x,a,'+')
    d2x2=limit((resultx-d0 ) / (x - a),x,a,'-')
    d2y1=limit((resulty-d0 ) / (y - b),y,b,'+')
    d2y2=limit((resulty-d0 ) / (y - b),y,b,'-')
    d2z1=limit((resultz-d0 ) / (z - c),z,c,'+')
    d2z2=limit((resultz-d0 ) / (z - c),z,c,'-')
    if d2x1!=d2x2 or d2y1!=d2y2 or d2z1!=d2z2:
        return None

    if d2x1.is_real==False or d2y1.is_real==False or d2z1.is_real==False:
        return None
    gd=float(d2x1)*(x-a)+float(d2y1)*(y-b)+float(d2z1)*(z-c)+float(d0)
    if gd==nan or gd==zoo or gd.is_real==False:
        return None
    return gd




def req4(a,b,n):
    if a==0 and b==0 and n==0:
        return None
    khaitrien=0
    for i in range(0,n+1):
        khaitrien+=float((factorial(n)/(factorial(i)*factorial(n-i))))*((a**(n-i))*(b**i))
    return khaitrien


def req10(w, f1, f2, f3, a):## KHONG XOA
    feq3=w.subs(x,f1).subs(y,f2).subs(z,f3)
    result=feq3.subs(t,a)
    if feq3.is_real==False or result.is_real==False:
        return None
    dfeq1=limit((feq3-result) / (t-a),t,a,'+')
    dfeq2=limit((feq3-result) / (t-a),t,a,'-')
    if dfeq1!=dfeq2 or dfeq1.is_real==False or dfeq2.is_real==False:
        return None
    else:
        return float(dfeq1)
    

    try:
        if result==nan or result==zoo or result.is_real==False:
            return None
        elif result==float(result):
            return result
    except:
        feq3=w.subs(x,f1).subs(y,f2).subs(z,f3)
        if limit((feq3-feq3.subs(t,a))/(t-a),t,a,'+')==limit((feq3-feq3.subs(t,a))/(t-a),t,a,'-'):
            return float(limit((feq3-feq3.subs(t,a))/(t-a),t,a,'-'))
        return None


def req8(f, eta, xi, tol): ## KHONG XOA
    #   1/x ,0.1, 0 ,  1e-3
    fx = diff(f,x,1)
    check = False
    try:
        if(nsolve(diff(fx,x),x,0)):
            check = True
        nsolve(fx,x,0)
    except:
        if(check==True):
            rs = nsolve(diff(fx,x),x,0)
            fx = lambdify(x,fx,"numpy")
            if(abs(fx(rs)) >  tol):
                return None
    fx = lambdify(x,fx,"numpy")
    xo = [xi]
    for i in range (10000):
        try:
            new = xo[i] - eta*fx(xo[i])
            tmp=fx(xo[i])
        except:
            return None
        if (abs(tmp) < tol):
            if xo[i]==zoo or xo[i]==nan or simplify(xo[i]).is_real==False:
                return None
            else:
                return round(float(xo[i]),2)
        xo.append(new)
    return

# def req3(w, f1, f2, f3, a):  # KHONG XOA
#     #Tinh toan
#     k1 = w.subs(x, f1)
#     k2 = k1.subs(y, f2)
#     k3 = k2.subs(z, f3)
#     print(k3)
#     try:##(Ham xu ly cac loi cua he thong)
#         result3=limit((k3-k3.subs(t,a))/(t-a),t,a)
#         #Xu ly so ao, truong hop khong tinh duoc hoac khong ton tai
#         if result3 == nan or result3 == zoo or result3.is_real==False:
#             return None
#         else:
#             return float(result3)
#     except:
#         return None

# def req3(w, f1, f2, f3, a):  # KHONG XOA
#     #Tinh toan
#     k1 = w.subs(x, f1)
#     k2 = k1.subs(y, f2)
#     k3 = k2.subs(z, f3)
#     dfk = diff(k3, t, 1)
#     try:##(Ham xu ly cac loi cua he thong)
#         result3 = dfk.subs(t, a)
#         #Xu ly so ao, truong hop khong tinh duoc hoac khong ton tai
#         if result3 == nan or result3 == zoo or not result3.is_real:
#             return None
#         else:
#             return float(result3)
#     except:
#         return None


def req3(w, f1, f2, f3, a):## KHONG XOA
    feq=w.subs(x,f1).subs(y,f2).subs(z,f3)
    # print(feq)
    if feq.is_complex:
        if feq.is_real==True:
            return 0
        return None
    elif feq==zoo or feq==nan:
        return None

    try:
        dfeq=diff(feq,t,1).subs(t,a)
        if dfeq==nan or dfeq==zoo or dfeq.is_real==False:
            return None
        else:
            return float(dfeq)
    except:
        result=feq.subs(t,a)
        if result==nan or result==zoo or result.is_real==False:
            return None
        else:
            dfeq1=limit((feq-result) / (t-a),t,a,'+')
            dfeq2=limit((feq-result) / (t-a),t,a,'-')
            if dfeq1!=dfeq2:
                return None
            if dfeq1 == nan or dfeq1 == zoo or dfeq1.is_real==False:
                return None
            return float(dfeq1)






print('câu 3:')
print(req3(sqrt(x),-1,-1,-1,-1))
print(req3(log(x)+sqrt(x - 2), -1, sin(t), t, -1))
print(req3(x / (y - 1), -1, 1, t, -1))
print(req3(x*y + z, cos(t), sin(t), t, 0))
print(req3(x**2 + y**2, cos(t), sin(t), t, 0))
print(req3(x*y + z, cos(t), sin(t), t, 0))
print (req3(x**2 + y**2, cos(t), sin(t), t, 0))
print (req3(1/(x*y*z),pow(tan(t),-1),cos(t),t,0))