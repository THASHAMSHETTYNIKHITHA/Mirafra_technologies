ch="hi my name is nikhitha"
count=0
i=0
for i in ch:
    if (i=='a' or i=='e' or i=='i'or i=='o'or i=='u'):
           count=count+1
           print(i,"=",ch.count(i))
print("number of vowels",count)


