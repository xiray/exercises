from random import randint
while(True):
    change=0
    TF=False
    number=randint(1,100)
    while(not TF):
        guess=int(input("Please enter your number"))
        change+=1

        if guess<number:
            print("too small😱\n")
        if guess>number:
            print("too big🥵\n")
        if guess==number:
            TF=True

    print(f"you guess the right number😀")
    print(f"you use {change} changes\n\n")