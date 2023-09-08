def reverse_func(string):
	a=""
	for i in string:
		a=i+a
	print(a)


string=input("enter any string")
reverse_func(string)
