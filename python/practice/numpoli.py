s=0
x=int(input("enter any number"))
i=x
while x!=0:
    rev=x%10
    x=x//10
    s=(s*10)+rev
if(s==i):
    print("pali")
else:
    print("not pali")
    

