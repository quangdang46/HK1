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
        da1=limit((resulta-resulta1)/(x-a),x,a,'+')
        da2=limit((resulta-resulta1)/(x-a),x,a,'-')
        if da1!=da2:
            tmp1=None
        if da1==nan or da1==zoo or da1.is_real==False or resulta1.is_real==False:
            tmp1 =None
        else:
            tmp1=round(float(da1),2)
    except:
        tmp1=None

    try:
        resultb=f*g
        resultb1=resultb.subs(x,a)
        db1=limit((resultb-resultb1)/(x-a),x,a,'+')
        db2=limit((resultb-resultb1)/(x-a),x,a,'-')
        if db1!=db2:
            tmp2=None
        if db1==nan or db1==zoo or db1.is_real==False or resultb1.is_real==False:
            tmp2 =None
        else:
            tmp2=round(float(db1),2)
    except:
        tmp2=None

        
    try:
        resultc=f.subs(x,g)
        resultc1=resultc.subs(x,a)
        dc1=limit((resultc-resultc1)/(x-a),x,a,'+')
        dc2=limit((resultc-resultc1)/(x-a),x,a,'-')
        if dc1!=dc2:
            tmp3=None
        if dc1==nan or dc1==zoo or dc1.is_real==False or resultc1.is_real==False:
            tmp3 =None
        else:
            tmp3=round(float(dc1),2)

    except:
        tmp3=None

    try:
        resultd=f/g
        resultd1=resultd.subs(x,a)
        dd1=limit((resultd-resultd1)/(x-a),x,a,'+')
        dd2=limit((resultd-resultd1)/(x-a),x,a,'-')
        if dd1!=dd2:
            tmp4=None
        if dd1==nan or dd1==zoo or dd1.is_real==False or resultd1.is_real==False:
            tmp4=None
        else:
            tmp4=round(float(dd1),2)
    except:
        tmp4=None
    return (tmp1,tmp2,tmp3,tmp4)


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


def req4(a,b,n):
    f=a+b
    if str(a).isdigit()==False or str(b).isdigit()==False:
        a=f.subs(x,0)
    else:
        if str(a).isdigit()==True:
            a=a
        else:
            a=b
    b=f-a
    if a==0 and b==0 and n==0:
        return None
    khaitrien=0
    for i in range(0,n+1):
        khaitrien+=float((factorial(n)/(factorial(i)*factorial(n-i))))*((a**(n-i))*(b**i))
    return khaitrien

def req5(f):  ## KHONG XOA
    fx=diff(f,x,1)
    fy=diff(f,y,1)
    fxx=diff(fx,x,1)
    fyy=diff(fy,y,1)
    fxy=diff(fx,y,1)
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

def req6(message, x, y, z):  # KHONG XOA
    kqreq6 =""
    for i in message:
        if x>=0 and x<=9 and y>=0 and y<=9 and z>=0 and z<=9:
            kqreq6 += chr(ord(i)^abs(x**2-y**2-z))
        else:
            break;
    return kqreq6

def req7(xp, yp, xs):  ## KHONG XOA
    n=len(yp)
    xp=np.array(xp)
    yp=np.array(yp)
    mxp=(sum(xp)*sum(yp)-n*sum(xp*yp))/(sum(xp)**2-n*sum(xp**2))
    byp=(1/n)*(sum(yp)-mxp*sum(xp))
    kqreq7=mxp*xs+byp
    return round(float(kqreq7),2)


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