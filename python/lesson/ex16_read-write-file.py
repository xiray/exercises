#close 关闭文件，≈保存
#read  读取文件内容
#readline 读取一行
#truncate 清空文件
#write（“a”) 写入a
#seek(0) 移动至开头

from sys import argv
script,filename=argv

print(f"we are going to erasen {filename}")
print("if don't want do that,type ctrl-c")
print("if you want that,hit return")
input("?")

print("opening the file ...")
target = open(filename,"w")         #"w" means write

print("truncating the file")
target.truncate()                   #target means file,truncate means delete all

print("tell me 3 lines")

line1=input("line1")
line2=input("line2")
line3=input("line3")

target.write(line1)
target.write('\n')
target.write(line2)
target.write('\n')
target.write(line3)
target.write('\n')

print("finally we close it")
target.close()