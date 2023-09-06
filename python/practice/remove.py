s=str(input("enter any string"))
for i in range(len(s)):
    if s[i]>='a' and s[i]<='z' or s[i]>='A' and s[i]<='Z' or s[i]>='0' and s[i]<'9':
        print(s[i])
