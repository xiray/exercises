from random import randint
health,score=3,0
score_for_health=0
while health>0:
  safe=randint(1,3)
  print("which door will you choose")
  choose=input('>')
  if choose==safe:
    print("you choose the right door")
    score+=5
    score_for_health+=5
  else:
    print("you choose the wrong door")
    health-=1
  if score_for_health>=20:
    score_for_health-=20
    health+=1
    print(f"you have {health} lives and {score} points")

print(f"you die")
print(f"you get {score} points")