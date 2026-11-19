# HISTORY
# was created in 1991 by Guido van Rossum to make programming easy to learn and use.
#python is stored in .py
# In PYTHON the output function is know as print("")
print("Hello World")
#The use of semi-colons in python can be used but to write multiple statements but this is used rarely because it makes it hard to read.
print("Hello"); print("How are you?"); print("Bye bye!")

#FUNCTIONS
'''Category,Functions
I/O & Interaction,"print(), input(), open(), help()"
Math,"abs(), round(), sum(), min(), max(), pow()"
Type Conversion,"int(), str(), float(), list(), dict(), set(), bool()"
Sequence/Iterables,"len(), range(), enumerate(), zip(), sorted(), reversed()"
Metadata/Logic,"type(), id(), dir(), any(), all(), isinstance()"
'''
#input 
let= input("type a word !")
print(let)
x = 12
y = "wealth"
print(12)
print(y)
#data type of a variable,done with casting
w = int(25)
e = float(25)
t = str(25)
print(w)
print(e)
print(t)

#data type of a variable with the type() function.
print(type(x))
print(type(y))

#assign values to multiple variables in one line:
p, u, r = "Orange", "Banana", "Cherry"
print(p)
print(u)
print(r)

# same value to multiple variables in one line
a = b = c = "Tea"
print(a)
print(b)
print(c)
# using the def variable 
# the use of () means:This is the "Ingredients List." (Empty in your case, meaning no outside ingredients needed).
k = "awesome"

def myfunc():
  print("Python is " + k)

myfunc()
'''In Python, the global keyword is a "permission slip." It allows a function to reach out and actually modify a variable that exists in the main script (the global scope).'''
x = "awesome"
'''def is a Creator: It builds a new "room" (a function) and gives it a name. It defines a set of actions to be saved for later.'''
def myfunc():
  global o
  o = "fantastic"

myfunc()

print("Python is " + o)


#DATA TYPES
'''Text Type:	str
Numeric Types:	int, float, complex
Sequence Types:	list, tuple, range
Mapping Type:	dict
Set Types:	set, frozenset
Boolean Type:	bool
Binary Types:	bytes, bytearray, memoryview
None Type:	NoneType '''
s= 12
y= 13
print(s+y)
print(s-y)
print(s/y)
print(s*y)

#string arrays
a = "Hello, World!"
  print(a[1])
  print(a[-1])


#list
thislist = ["mango", "coke", "melon"]
print(thislist)

#length
SUR_Y= ("WHO IS THIS")
print(len(SUR_Y))
#checking strings
hello=("water was found in the drum ")
print("drum" in hello)
#loops
n=888
z= 200
if n>z:
  print("n is greater than z")
else:
  
  print("z is greater than n")
  
