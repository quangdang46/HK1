'''
from sympy import*
import numpy as np
global x, y, z, t ## KHONG XOA
x, y, z, t = symbols("x, y, z, t") ## KHONG XOA 
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
'''
'''
def req3(w, f1, f2, f3, a):## KHONG XOA
    feq=w.subs(x,f1).subs(y,f2).subs(z,f3)
    dfeq=diff(feq,t).subs(t,a)
    return dfeq
'''

'''
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
      
'''   

'''
from sympy import *  # KHONG XOA
import numpy as np  # KHONG XOA

global x, y, z, t  # KHONG XOA
x, y, z, t = symbols("x, y, z, t")  # KHONG XOA


'''

'''
def req1(f, g, a):  ## KHONG XOA
    df1=df2=df3=df4=None
    df1=diff(f+g,x)
    df2=diff(f*g,x)
    df3=diff(f.subs(x,g),x)
    df4=diff(f/g,x)

    tup=(round(df1.subs(x,a),2),round(df2.subs(x,a),2),round(df3.subs(x,a),2),round(df4.subs(x,a),2))
    tups=list(tup)
    for i in range(4):
      
      if(tups[i]=="nan" or tups[i]==zoo):
        tups[i]=None

    return tuple(tups)
print(req1(1/x,x**2,0))
'''
def req6(message, x, y, z):  # KHONG XOA
    f = abs(x**2 - y**2 - z)
    result6 = ""
    i = 0
    f1 = len(message)
    for i in range (0, f1):
        result6 += chr(f ^ ord(message[i]))
    return result6
def req4(a, b, n):  ## KHONG XOA
    h=j=m=1
    sum=0
    for l in np.arange(1,n+1):
        m=m*l
    for i in np.arange(0,n+1):
        for a1 in np.arange(1,n-i+1):
            h=h*a1
        for a2 in np.arange(1,i+1):
            if(i==0):
                j=1
            j=j*a2
        sum=sum+(m/(h*j))*pow(a,n-i)*pow(b,i)
        h=j=1
    return sum

'''
from sympy import*
import numpy as np
global x,y,x,t
x,y,z,t=symbols("x,y,z,t")
def req3(w, f1, f2, f3, a): ## KHONG XOA
   w1=w.subs(x,f1)
   w2=w1.subs(y,f2)
   w3=w2.subs(z,f3)
   try:
        if(w3 == zoo or w3 == nan):
            return None 
        w4 = diff(w3,t)
        kq = w4.subs(t,a)
        if(kq == float(kq)):
            return kq 
   except:
        return None
'''
from sympy import*
import numpy as np
global x,y,z,t
x,y,z,t=symbols("x,y,z,t")
def req4(a, b, n): 
  b4= 0
  i=0
  for i in range(0,n+1,1):
    b4=b4+ (factorial(n)/(factorial(i)*factorial(n-i)))*(a**(n-i)*b**i)
    i=i+1
  return b4
print(req4(-x, 1, 2))



def req7(xp, yp, xs):  ## KHONG XOA
    n=len(xp)
    xp=np.array(xp)
    yp=np.array(yp)
    m=(sum(xp)*sum(yp)-n*sum(xp*yp))/(sum(xp)**2-n*sum(xp**2))
    b=(1/n)*(sum(yp)-m*sum(xp))
    yxc=m*xs+b
    yxc=round(yxc,2)
    if yxc == int (yxc):
       return int (yxc)
    else: 
       return (yxc)
print(req7([-2, 1, 4], [0, 2, 5], 3 )) 