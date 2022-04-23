n=int(input())
list=list(map(int,input().split()))
dict={}
for i in list:
    if i in dict:
        dict[i]+=1
    else:
        dict[i]=1
print(len(dict))
for i in dict:
    print(i,dict[i])
