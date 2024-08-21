def my_number(x,/):
	print(x)
my_number(x=3)	
# it will give you error


def my_number(*,x):
	print(x)
my_number(3)	
# it will give you error