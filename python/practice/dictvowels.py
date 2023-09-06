s="MIRAFRA technologies"
d={}
vow="AEIOUaeiou"
for i in s:
    if i in vow:
        if i in d:
            print(i)
            d[i]=d[i]+1
        else:
            d[i]=1
print(d)
