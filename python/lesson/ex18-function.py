def print_2(*args):
    arg1,arg2=args
    print(f"the first if {arg1},the second is {arg2}")

def print_2_again(arg1,arg2):
    print(f"the first if {arg1},the second is {arg2}")

def print_1(arg1):
    print(f"the first {arg1}")

def print_no():
    print("none")

print_2("ray","smart")
print_2_again("mickey","mouse")
print_1("111")
print_no()