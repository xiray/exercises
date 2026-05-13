from sys import argv
from os.path import exists          #exists can check a file is true

script,from_file,to_file = argv
print(f"copy from {from_file} to {to_file}")

in_file = open(from_file)
i_n = in_file.read()

print(f"the input file is {len(i_n)} letters long")

print(f"do we have the output file {to_file}")
print(exists(to_file))

print(f"let's copy {from_file} to {to_file}")
print("if don't want do that,type ctrl-c")
print("if you want that,hit return")
input()

out_file = open(to_file,"w")
out_file.write(i_n)

print("done")
out_file.close()