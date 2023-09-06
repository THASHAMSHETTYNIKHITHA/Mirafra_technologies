l1=[1,2,2,3,4]
i=1
for i in range(len(l1)):
    for j in range(i+1,len(l1)):
        if i==j:
            break
    print(i)
