l=[10,4,3,3,10]
def sort_list(l):
    for i in range(len(l)):
        for j in range(i+1,len(l)):
            if l[i]>l[j]:
                l[i],l[j]=l[j],l[i]
    return l

b=sort_list(l)
print(b)
