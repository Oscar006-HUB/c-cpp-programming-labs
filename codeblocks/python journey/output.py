# HISTORY
# was created in 1991 by Guido van Rossum to make programming easy to learn and use.
#python is stored in .py
# In PYTHON the output function is know as print("")
print("Hello World")
#The use of semi-colons in python can be used but to write multiple statements but this is used rarely because it makes it hard to read.
print("Hello"); print("How are you?"); print("Bye bye!")
# In checking the version of the editor you run
#We 
import sys
print(sys.version)

''''Category,Functions
I/O & Interaction,"print(), input(), open(), help()"
Math,"abs(), round(), sum(), min(), max(), pow()"
Type Conversion,"int(), str(), float(), list(), dict(), set(), bool()"
Sequence/Iterables,"len(), range(), enumerate(), zip(), sorted(), reversed()"
Metadata/Logic,"type(), id(), dir(), any(), all(), isinstance()"
''''
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
a = b = c = "Orange"
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