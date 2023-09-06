s="hiimnikhifromwarangal"
s1="ni"
pos=0
count=0
for i in range(len(s)):
    index=s.find(s1,pos)
    if index==-1:
        break
    count=count+1
    pos=index+len(s1)
print(count)
