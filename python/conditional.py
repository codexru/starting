from os import system as clear
clear("clear")
# in conditionals:
print("\n###################\n Hello, i'm back\n###################\n")
x = input(" My name is: ")
print(f"\n good {x}, i'm corux\n ")
if x == "admin":
 print("motherfucker, lol, walcome sir")
 x = 0
 while x <= (10**5):
  if x == 50:
   y = input("break? Y/N: ")
   y = y.upper()
   if y == "Y":
    break
   elif x == "N":
    print("ok")
   else:
    print("you have a brain")
  print(x)
  x = x+1
