n=int(input("num"))
a=0
b=1
print(a)
print(b)
if n<=0:
    print(a)
if n==1:
    print(b)
else:
    for i in range(1,n):
        c=a+b
        print(c)
        a,b=b,c  
