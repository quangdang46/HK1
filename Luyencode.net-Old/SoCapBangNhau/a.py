n = int(input())
a = list(map(int,input().split()))
a.sort()
a.append(-1)
res = 0 
cnt = 1
for i in range(1,n+1) :
    if(a[i] != a[i-1]) :
        res += cnt*(cnt-1)//2
        cnt = 1
    else :
        cnt += 1
print(res)