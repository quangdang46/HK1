from sympy import * ## KHONG XOA
import numpy as np ## KHONG XOA 
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA   


def req5(f):  ## KHONG XOA  cau hoi: phan so nen xuat ra dang nao ???
    MN = []
    MX = []
    SD = []
    fx = diff(f,x)
    fy = diff(f,y)
    fxx = diff(fx,x)
    fyy = diff(fy,y)
    fxy = diff(fx,y)
    """
    sp.solve() ko the xu li he 1 no hoac vo no
    sp.linsolove() ko the xu li he nhiu no
    """
    try: ### loai bo abs(x)
        try: 
            M = list(linsolve([fx,fy],x,y)) ###xu li he 1 no hoac vo no
        except:
            M = list(solve((fx,fy),x,y)) ###xu li he nhieu no
    except:
        return MN,MX,SD
    for i in M:
        (a,b) = i
        if(a.is_real != True or b.is_real != True): ###xu li so ao, vo so no 
            continue
        
        ### lam tron so nguyen
        if(a == int(a)):
            a = int(a)
        if(b == int(b)):
            b = int(b)
        i = (a,b)
        
        D = fxx.subs([(x,a),(y,b)])*fyy.subs([(x,a),(y,b)]) - (fxy.subs([(x,a),(y,b)]))**2 

        if(D > 0 and fxx.subs([(x,a),(y,b)]) > 0):
            MN.append(i)
        elif(D > 0 and fxx.subs([(x,a),(y,b)]) < 0):
            MX.append(i)
        elif(D < 0):
            SD.append(i) 
        elif(D == 0):
            tol = 1e-3
            fk = (x - a)**2 + (y - b)**2 - tol**2
            min = 0
            max = 0
            
            ### check cuc tri theo li thuyet
            x1 = [a,a,a - tol,a + tol]
            y1 = [b - tol,b + tol,b,b]

            for j in range(4):
                if(f.subs([(x,a),(y,b)]) > f.subs([(x,x1[j]),(y,y1[j])])):
                    min += 1
                elif(f.subs([(x,a),(y,b)]) < f.subs([(x,x1[j]),(y,y1[j])])):
                    max += 1
            if(min == 0):
                MN.append(i)
            elif(max == 0):
                MX.append(i)
    return MN,MX,SD
  
  
def req7(xp, yp, xs):  ## KHONG XOA
    fx,fy,fxy,fx2 = 0,0,0,0
    for i in range(0,len(xp)):
        fx += xp[i]
        fy += yp[i]
        fxy += xp[i] * yp[i]
        fx2 += xp[i]**2

    m = (fx*fy - len(xp)*fxy) / (fx**2 - len(xp)*fx2)
    b = 1/len(xp) * (fy - m*fx)
    rs = round(m*xs + b,2)
    if(rs == int(rs)):
        return int(rs)
    else:
        return rs


def req4(a,b,n): 
    khaitrien=0
    try:
        for i in range(0,n+1):
            khaitrien+=(factorial(n)/(factorial(i)*factorial(n-i)))*((a**(n-i))*(b**i))
        return khaitrien
    except:
        return None

# def req7(xp, yp, xs):  # KHONG XOA
#     n = len(xp)
#     fx = 0
#     fy = 0
#     fxy = 0
#     fx2 = 0
#     for i in range(0, n):
#         fx = fx + xp[i]
#         fy = fy + yp[i]
#         fxy = fxy + (xp[i] * yp[i])
#         fx2 = fx2 + xp[i]**2
#     m = (fx*fy - n*fxy) / (fx**2 - n*fx2)
#     b = 1/n * (fy - m*fx)
#     result7 = m*xs + b
#     #Lam tron
#     result7 = round(result7, 2)
#     if(result7 == int(result7)):
#         return int(result7)
#     else:
#         return result7

# print(req7([-2, 0, 2], [0, 2, 3], 4))