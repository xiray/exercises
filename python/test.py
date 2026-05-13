shengfen = input()
zimu = input()
haoma = input()
last_number = None

if shengfen != "330000" or zimu != "A":
    print("You can't drive on the road on weekday")
    exit(0)

i = len(haoma) - 1
while i >= 0:
    if haoma[i] in "0123456789":
        last_number = int(haoma[i])
        break
    i -= 1

if last_number is None:
    last_number = 0

if last_number in [1, 9]:
    print("You can't drive on the road on Monday")
elif last_number in [2, 8]:
    print("You can't drive on the road on Tuesday")
elif last_number in [3, 7]:
    print("You can't drive on the road on Wednesday")
elif last_number in [4, 6]:
    print("You can't drive on the road on Thursday")
elif last_number in [5, 0]:
    print("You can't drive on the road on Friday")
    