from sys import argv
script, filename=argv
txt = open (filename)

print(f"here's your file{filename}")
print(txt.read())

print("enter your file name")
file_2 = input(">")
txt_2 = open(file_2)
print(txt_2.read())