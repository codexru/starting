print("hello world")

calculator = 2 + 2
print(calculator)



# type of data

# str
string = "Text or string"
print(type(string))

# int
integer = 3  # 3, 2, 1, -1, -2
print(type(integer))

# float
float = 3.14 # 3.14, -2.5
print(type(float))

# bool True/False
boolean = True # False
print(type(boolean))

# list
list = [1, 2, 3]
print(type(list))

# tuple
tuples = (1, 2, 3)
print(type(tuples))

# set
sets = {1, 2, 3}
print(type(sets))

# dict
dictionaries = {"clave": "valor"}
print(type(dictionaries))


#   ========================
#     Only data comprober
#   ========================

# Your data type is
from ast import literal_eval as detect
def vrga(x) :
 try:
  y = detect(x)
  return y
 except:
  return x
x = input("Your data type:")
m = type(vrga(x)).__name__
print(f"Type of data is: {m}")
