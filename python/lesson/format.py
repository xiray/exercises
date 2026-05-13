name="ray"
age=12
a="boy"
human=True
formatter="{}{}{}{}"
print(formatter.format(1,2,3,4))
print(formatter.format(name,age,a,human))
print(formatter.format(formatter,formatter,formatter,(formatter.format(1,2,3,4))))