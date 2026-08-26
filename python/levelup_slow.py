# Data management that includes input, string, and number (both decimals and integers)
print("Hi user")

# input, that command used to enter data
name = input("What's your name: ")
age = input("What's your age: ")
# important: input, The type of data that comes out will always be a string or str
print(type(name), type(age))
print(f"Hi {name}, my name is corux. Your age is: {age}")
age = int(age)
# this is a conditional
# if age >= 18:
#  print("good you are older")
# else:
#  print("good you not have 18 years old.")
"""
example
in
manager
"""
sum = 2 + 2
print(sum)
sum_dec = 2.2 + 2.1
print(sum_dec)
