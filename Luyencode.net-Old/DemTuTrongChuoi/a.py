dict_name={}
string=input().lower()
for cnt in string:
    if cnt.isalnum()==True and cnt!=' ':
        if cnt in dict_name:
            dict_name[cnt] +=1
        else:
            dict_name[cnt] =1
k = dict(sorted(dict_name.items(),key=lambda x:x[0]))
for key in k:
    print(key,k[key])
'''
s = input()
s = s.lower()

L = []
for i in s:
    if (48 <= ord(i) <= 57) or (97 <= ord(i) <= 122): #Dùng hệ mã ASCII
        if i not in L:
            L.append(i.lower())
L.sort()
for i in L:
    print(i, s.count(i))
'''