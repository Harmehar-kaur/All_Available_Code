# data is divided into categories integer and strings namely some. strings are enclosed in double
# quotes. comments are used to increase the readability of the code, add some references to the code.
# There are two differrent types of comments: single line and multiple line comment. for single line
# use # for multiple use three single quotes to start and end the block of code to be commented.
# Variables: unlike in java,c and c++ variables are not associated with any data type in python.
# The variable is stated as 'a'. a variable name cannot start with a digit and cannot have any
# special characters. a variable cannot be a key word. python is a free and open source language.
# printing a string or something to run a cell keyboard shortcut is shift+enter go to next cell
# as well ctrl+enter is used for runnign the cell simply
# named as class1&2 and class3 in notes provided
#                                               ********** MAIN CODE **************
#                                         ************ CONTAINS ONE CODE ***************** 

print("Harmehar Kaur code run")
a = 3  # integer
print(type(a))
b = 3
c = 5
print(a)
print(b)
print(c)
a = 4.567  # float
print(type(a))
print(a)
a = 'r'  # string [character in c,c++]
b = 'hi'
c = "hi"
print(type(a))
print(type(b))
print(type(c))
print(a)
print(b)
print(c)
a = True
# needs to be in this format not all caps or lower case it should be capitalised.
b = False
print(type(a))
print(type(b))
# input()
e = input("enter text: ")
print("the data type of the entered data is:", e)
print(type(e))
# integer input
a = int(input("Enter 1st number :"))
b = int(input("Enter 2nd number :"))
print("the sum is:", a+b)
print("the difference is:", a-b)
print("the product is", a*b)
print("the quotient is", a/b)  # quotient
print("the remainder is:", a % b)  # remainder
# floor division - gives the integer part of the quotient
print("the floor division is:", a//b)
print("is a less that b:", a < b)
print("is a greater that b:", a > b)
print("is a greater that or equal to b:", a >= b)
print("is a less that or equal to b:", a <= b)
print("equating operator ", a == b)  # equating the variables
print("a and b are not equal:", a != b)
# change the datatype from string to integer (typecasting)
# raw string:removes the special meaning of any keywords inside the string and prints the
# string as it is (ignores any errors) while formatted string
print('C:\program files\adobe\adobe photoshop\b ook\total_books\new folder')
# raw string
print(r'C:\program files\adobe\adobe photoshop\book\total_books\new folder')
# ESCAPE SEQUENCES: \n - new line , \t - tab space, \b - backspace, \a - emoji (?)
# FORMATTED STRINGS - refer to the value present inside the variable
a = int(input("Enter 1st number :"))
b = int(input("Enter 2nd number :"))
print(f"Addition of {a} and {b} is :", a+b)
print(f"Subtraction of {a} and {b} is :", a-b)
print(f"Multiplication of {a} and {b} is :", a*b)
print(f"Division of {a} and {b} is :", a/b)
print(f"Modulus of {a} and {b} is :", a % b)
print(f"Floor Division of {a} and {b} is :", a//b)
print(f"{a} power {b} is :", a**b)
print(f"Square of {a} is ", a**2)  # square
print(f"Square root of {a} is ", a**(1/2))  # square_root
# conditionals
a = 5
if a < 10:
    print("a is less than 10")

h = int(input("Enter a number "))
if a < 10:
    print("number is less than 10")
if a > 10:
    print("number is greater than 10")
if a == 10:
    print("number is 10")
    # Even or odd number
a = int(input("Enter the number :"))

if a % 2 == 0:
    print("Even number!")
if a % 2 != 0:
    print("Odd number!")
    # Even or odd number
a = int(input("Enter the number :"))

if a % 2 == 0:
    print("Even number!")
else:
    print("Odd number!")

    # Even or odd number
a = int(input("Enter the number :"))

if a % 2 != 0:
    print("Odd number!")
else:
    print("Even number!")
print("\n Harmehar Kaur AI Batch2")
print("\n The class titled class 1 and 2 are completed")

