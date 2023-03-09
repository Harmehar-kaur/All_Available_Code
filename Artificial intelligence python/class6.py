# LOOPS also continued 
# 'end' OPERATOR IS USED TO AVOID THE DEFAULT JUMOING TO THE NEXT LINE IN PYTHON
# time.sleep(): gives the delay in each iteration in simple words if 1 is passed through it the iterations are displayed with a delay 
# of 1 sec.
# FUNCTIONS - reusable pieces of code which runs multiple times but only when it is called 
# in built functions  - print(),input(),max(),sum(),min(),pow(),
# user defined functions - 

# def functionname(parameters):[function definition]
  # statements/expressions
  # statements/expressions

# functionname(values) {function call} 
#                                               ********** MAIN CODE **************
#                                         ************ CONTAINS 2 CLASSES *****************

# CODE 1
# while loop 
print("WHILE Loop 1")
i = 0  #initiating 
while i <= 10:# condition
  print(i) #statement 
  i = i + 1 #increment
# while loop 
print("WHILE Loop 2")
i = 0 
while i <= 10:
  print(i)
  i = i + 2
# post-decrement 
print("WHILE Loop 3 post decrement")
a = 30 # doesn't work if the condition stated is less than equal to[<=]
while a >= 0:
  print(a)
  a = a - 2
# pre-decrement 
print("WHILE Loop 4 PRE-DECREMENT")
a = 30
while a >= 0: #if the condition is true, enter the loop 
  a = a - 2
  print(a)
print("WHILE Loop 5 HOW TO USE MORE THAN ONE VARIABLE IN A WHILE LOOP") 
# THE CODE GETS THE TABLE OF THE NUMBER ENTERED BY THE USER  
n = int(input("Enter the number :"))
i = 1    # 1 to 10
while i <= 20:
  print(f"{n} x {i} =",n*i)
  i = i + 1
# nested while loop 
print("WHILE Loop 6 NESTED LOOP")
a = 1 
while a<=5:
  print("Python",end = " ")
  b = 1
  while b<=1:
    print("trainings",end = " ")
    b = b + 1
  a = a + 1
# Star pattern 
print("WHILE Loop 7 STAR PATTERN")
i = 0 
while i <= 5:
  print(i*"* ")
  i = i + 1
# Star pattern
print("WHILE Loop 8 STAR PATTERN 2")
import time 
i = 0 
while i <= 5:
  print(i*"* ")
  i = i + 1
  time.sleep(1)  #delay of 1 second
import time 
i = 5 
while i >= 0:
  print(i*"* ")
  i = i - 1
  time.sleep(1)  #delay of 1 second
#break statement - interrupts the execution / terminates the loop even though the condition of the while loop is still true
print("WHILE Loop 9 BREAK STATEMENT")
i = 0 
while i <= 10:
  print(i)
  if i == 4:
    break
  i = i + 1
# continue statement - skips the current iteration and moves to the next iteration
print("WHILE Loop 10 CONTINUE STATEMENT")
a = 0
while a < 10:
  a = a + 1
  if a == 5:
    continue
  print(a)
# FOR LOOP 
print("FOR LOOP: Loop 11")
for i in range(0,10,1):   # start,stop,step[step is basically the increment thingy]
  print(i)
for i in range(0,10):   # start,stop
  print(i)
for i in range(10):   # stop
  print(i)
for i in range(0,10):   # stop
  print(i,end = " ")
for i in range(20,11,-1):
  print(i)
#iteration through strings
var1 = "python"
for i in var1:
  print(i) 
#iteration through lists
var1 = ["python","programming","language","on","Google Colab"]
for i in var1:
  print(i) 
#iteration through tuples
var1 = ("python","programming","language","on","Google Colab")
for i in var1:
  print(i) 
# Iteration through set
var1 = {"python","programming","language","on","Google Colab"}
for i in var1:
  print(i) 
# Iteration through dictionary
var1 = {"python":"programming","language":"on","Google":"Google Colab"}
for i in var1:
  print(i) 
n = int(input("Enter the number :"))
i = 1
for i in range(1,11,1):
  print(f" {n} x {i} = {n*i}")
  if i == 5:
    break
# nested for loop 
# coordinates on a graph example
for x in range(0,5):
  for y in range(0,4):
    print((x,y))
# function calling and definition example code 
def my_function():            #function definition
  print("Hello World")
  print("Hello World")
my_function()   #function call
def amount():
  amnt = int(input("Enter the amount :"))
  print("The entered amount is ",amnt)
amount()
# function calling and definition
# function for addition
def add(n1,n2):
  result = n1 + n2
  print("Sum = ",n1+n2)
add(7,5)
# function for addition,subtraction,multiplication,division
def calc1(n1,n2):
  print("Sum = ",n1+n2)
  print("Difference = ",n1-n2)
  print("Product = ",n1*n2)
  print("Quotient = ",n1/n2)
calc1(7,5)
# Global and local variables 
a = 10 
def fun1():
  a = 5
  print("Local variable",a)

fun1()
print("Global variable",a)
print("\n Harmehar Kaur AI Batch2")
print("\n The class titled class 6 is completed")
print("\n Class 7 in google collab, chrome ID: Kaur[personal]")
