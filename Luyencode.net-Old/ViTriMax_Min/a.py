n=int(input())
list=list(map(int,input().split()))
print(min(list),list.index(min(list))+1,max(list),list.index(max(list))+1)