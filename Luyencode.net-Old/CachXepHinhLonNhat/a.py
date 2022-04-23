n=(input())
list=list(map(int,input().split()))
dict={}
for i in list:
    if i in dict:
        dict[i]+=1
    else:
        dict[i]=1
for key in list:
    if dict[key]==1:
        del dict[key]

if len(dict)==0 or (len(dict)==4 and sum(dict.values())==4) :
    print(0)
else:
    max_dict=max(dict.keys())
    min_dict=min(dict.keys())

    print(max_dict*min_dict)