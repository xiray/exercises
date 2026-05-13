def my_triangle(a,n):
    i=1
    x=1
    while x<=n:
        i=1
        while i<=x:
            print(a,end="")
            i+=1
        print("")
        x+=1

def my_triangle_2():
    print("""
    *
    **
    ***
    ****
    *****
    ******
    *******
    ********
    *********
    **********""")
    
def my_triangle_3():
    print("*\n**\n***\n****\n*****\n******\n******\n********\n*********\n**********")


my_triangle("*",10)
my_triangle_2()
my_triangle_3()
print("we can turn lines with \'\\n\'")
print("we can turn lines with \"\"\"xxx\"\"\"")
print("we can stop turn line with \'end=\"xxx\"\'")