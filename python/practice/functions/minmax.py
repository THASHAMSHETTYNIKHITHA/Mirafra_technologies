#x=int(input("enter numbers"))
x=[2,3,1,4,5,10]
def min_fun(big,small):
    for i in x:
        if i>big:
            big=i
        elif i<small:
            small=i
    print("biggest num=",big)
    print("smallest num=",small)


big=x[0]
small=x[0]
min_fun(big,small)
#print(a)


