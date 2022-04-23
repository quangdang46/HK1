# -*- coding: utf-8 -*-
"""lab06.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/18NMmBdpKkpsr5JhAz-2fwxK9PHmk9HRC
"""

from sympy import *
import math
import numpy as np
import matplotlib.pyplot as plt

# câu 1:
print("câu a : ")
n = 6
xa = []
for i in range(n+1):
  f = 4*i + 1
  xa.append(f)
print("{}".format(xa))

print("câu b :")
n = 5
xb = []
for i in range(n+1):
  f = 3**i
  xb.append(f)
print("{}".format(xb))


print("câu c :")
n = 5
xc = []
for i in range(n+1):
  f = i**3
  xc.append(f)
print("{}".format(xc))


print("câu d :")


m = 10
xd = []
for i in range(m):
  f = fibonacci(i)
  xd.append(f)
print("{}".format(xd))

# câu 3:
print("câu a :")
fa = cos(x)
xa0 = math.pi/3
tlfa = 0
for i in range(0,7):
    dfa = diff(fa,x,i)
    tlfa = tlfa + ((dfa.subs(x,xa0))/factorial(i))*(x**i)
print("a) Chuoi taylor = {}".format(tlfa))


print("câu b :")
fb = log(x)
xb0 = 2
tlfb = 0
for i in range(1,11):
  dfb = diff(fb,x,i)
  tlfb = tlfb + ((dfb.subs(x,xb0))/factorial(i))*(x**i)
print("chuoi taylor = {}".format(tlfb))


print("câu c: ")
fc = exp(x)
xc0 = 3
tlfc = 0
for i in range(1,13):
  dfc = diff(fc,x,i)
  tlfc = tlfc  + ((dfc.subs(x,xc0))/factorial(i))*(x**i)
print("chuoi taylor = {}".format(tlfc))

# câu 4
x = symbols("x")
print("Câu a")
fa=cos(x)
fca=fa.subs(x,0)
for i in range(1,6,1):
    fta=(diff(fa,x,i).subs(x,0)/math.factorial(i))*(x)**i
    fca=fca+fta
print("{}".format(fca))

print("Câu b")

fb=exp(x)
fcb=fb.subs(x,0)
for i in range(1,12,1):
    ftb=(diff(fb,x,i).subs(x,0)/math.factorial(i))*(x)**i
    fcb=fcb+ftb
print("{}".format(fcb))

print("Câu c")

fc=1/(1-x)
fcc=fc.subs(x,0)
for i in range(1,12,1):
    ftc=(diff(fc,x,i).subs(x,0)/math.factorial(i))*(x)**i
    fcc=fcc+ftc
print("{}".format(fcc))

print("Câu d")

fd=atan(x)
fcd=fd.subs(x,0)
for i in range(1,12,1):
    ftd=(diff(fd,x,i).subs(x,0)/math.factorial(i))*(x)**i
    fcd=fcd+ftd
print("{}".format(fcd))

# câu 5:
n = symbols("n")
print("câu a : ")
fa = (4*n**2+1)/(3*n**2+2)
lima = limit(fa,n,oo)
print("lim a {}".format(lima))

print("câu b : ")
fb = sqrt(pow(n,2)+1)-n
limb = limit(fb,n,oo)
print("lim  {}".format(limb))

print("câu c : ")
fc = sqrt(2*n +sqrt(n))- sqrt(2*n+1)
limc = limit(fc,n,oo)
print("lim  {}".format(limc))

print("câu d : ")
fd = (3*5**n-2**n)/(4**n+ 2*5**n)
limd = limit(fd,n,oo)
print("lim  {}".format(limd))

print("câu e : ")
fe = (n*sin(sqrt(n)))/(n**2+n-1)
lime = limit(fe,n,oo)
print("lim  {}".format(lime))

# câu 6:
print("câu a: ")
# a) a_n = 1 - 0.2^n 
n = symbols('n')
fx = 1 - pow(0.2,n)
fa = limit (fx,n,oo)
if fa != oo:
 print ("cau6a:chuoi \hội tụ") 
else :
  print ("cau6a:chuoi phân kì")

print("câu b : ")
fx = pow(n,3)/(n**3 + 1)
fb = limit(fx,n,oo)
if fb != oo:
 print ("cau6a:chuoi \hội tụ") 
else :
  print ("cau6a:chuoi phân kì")
print("câu c : ")
fx = (3+5*n**2)/(n+n**2)
fc = limit(fx,n,oo)
if fc != oo:
 print ("cau6a:chuoi \hội tụ") 
else :
  print ("cau6a:chuoi phân kì")

print("câu d :")
# d) a_n = n^3/(n + 1) 
fx = pow(n,3)/(n + 1)
fd = limit (fx,n,oo)
if fd != oo:
 print ("cau6a:chuoi \hội tụ") 
else :
  print ("cau6a:chuoi phân kì")
print("câu e :")

fx = exp(1/n)
fe = limit (fx,n,oo)
if fe != oo:
 print ("cau6a:chuoi \hội tụ") 
else :
  print ("cau6a:chuoi phân kì")

print("câu f :")

fx = sqrt((n+1)/(9*n+1))
ff = limit (fx,n,oo)
if ff != oo:
 print ("cau6a:chuoi \hội tụ") 
else :
  print ("cau6a:chuoi phân kì")


##Câu g
print("Câu g")
n=symbols('n')
fg=(((-1)**(n+1))*n)/(n+sqrt(n))
limg=limit(fg,n,10000000)
if limg != oo:
 print ("cau6a:chuoi \hội tụ") 
else :
  print ("cau6a:chuoi phân kì")

print("câu h : ")
fx = tan((2*n*pi)/( 1+8*pi))
fh = limit(fx,n,oo)
if fh != oo:
 print ("cau6a:chuoi \hội tụ") 
else :
  print ("cau6a:chuoi phân kì")

print("câu i : ")
fx = factorial(2*n-1)/factorial(2*n+1)
fi = limit(fx,n,oo)
if fi != oo:
 print ("cau6a:chuoi \hội tụ") 
else :
  print ("cau6a:chuoi phân kì")

print("câu j : ")
fx = log(2*n**2+1)- log(n**2+1)
fj = limit(fx,n,oo)
if fj != oo:
 print ("cau6a:chuoi \hội tụ") 
else :
  print ("cau6a:chuoi phân kì")

# câu 7
# câu 1:
print("câu a : ")
n = 5
xaa = []
for i in range(n):
  f = 1-pow(0.2,i)
  xaa.append(f)
print("{}".format(xaa))


print("câu b : ")
n = 5
xbb = []
for i in range(n):
  f = (2*i)/(i**2+1)
  xbb.append(f)
print("{}".format(xbb))


print("câu c : ")
n = 5
xcc = []
for i in range(n):
  f = (-1)**(i-1)/5**i
  xcc.append(f)
print("{}".format(xcc))


print("câu d : ")
n = 5
xdd = []
for i in range(n):
  f = 1/factorial(i+1)
  xdd.append(f)
print("{}".format(xdd))

print("câu e : ")
a1 = 1
xee = []
for i in range(1,5+1):
  if i == 1:
    f = 1
    xee.append(f)
  else :
    f = 5*f - 3
    xee.append(f)
print("{}".format(xee))

print("ca 7 : ")
a1 = 2
xff = []
for i in range(1,5+1):
  if i == 1:
    f = 2
  else :
    f = f/(f+1)
    xff.append(f)
print("{}".format(xff))