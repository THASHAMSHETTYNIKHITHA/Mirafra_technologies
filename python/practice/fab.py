#x=int(input("enter num"))
a=0
b=1
print(a)
print(b)
while 1:
    c=a+b
    a=b
    b=c
    if c > 50:
        break
    print(c)
