# named as class4 in the  notes provided 
# elif is the short form of else if in python lower() is the function used in CODE 3 changes 
# the input string to lower case to avoid the case sensitivity of the input given by the user.upper()
# can be used for upper case scenerio. In CODE 3 all the if statements are run if the not in regard 
# with if the earlier one is satisfied or not. 
# CODE 5 uses sequences (store multiple values) and 
# variables (store a single value). there are different types of sequences in python: 
# 1. strings 
# 2. lists [b in CODE 5]
# 3. tuples 
# 4. sets
# 5. dictionaries 
# List:-
# 1.most versatile datatype/sequence 
# 2.elements are separated by commas
# 3.enclosed within square brackets
# 4.accept elements from different datatypes
# 5.lists allow repetition of elements 
# 6.supports indexing and slicing 
# 7.a-b is not accepted for the list.
# 8.sort()is used to sort the given list or anything given. reverse argument is passed through sort to
# 9.operand in descending order. [here a]
#                                               ********** MAIN CODE **************
#                                         ************ CONTAINS FIVE CODE ***************** 
#With only if statements [CODE 1]
from audioop import reverse


a = int(input("Enter 1st number : "))
b = int(input("Enter 2nd number : "))
c = int(input("Enter 3rd number : "))
if a > b and a > c:
  print(f"a is largest ({a})")
if b > a and b > c:
  print(f"b is largest ({b})")
if c > a and c > b:
  print(f"c is largest ({c})")
#with if..elif..else statements [CODE 2]  
a = int(input("Enter the 1st number: "))
b = int(input("Enter the 2nd number: "))
c = int(input("Enter the 3rd number: "))
if (a >= b) and (a >= c):
    print(f"The largest of the three numbers is:{a}")
elif (b >= a) and (b >= c):
    print(f"The largest of the three numbers is:{b}")
else:
    print(f"The largest of the three numbers is:{c} ")
# printing the season [CODE 3]
a = input("Enter the season:")
a = a.lower()
if a == "summer":
  print("Summer season!")
if a == "winter":
  print("Winter season!")
if a == "autumn":
  print("Autumn season!")
if a == "spring":
  print("Spring season!")    
#with the use of if..elif..else[CODE 4]
a = input("Enter the season :")
a = a.lower()
if a == "summer":
  print("Summer season!")
elif a == "winter":
  print("Winter season!")
elif a == "autumn":
  print("Autumn season!")
elif a == "snow":
  print("snow season!")
elif a == "spring":
  print("Spring season!")
else:
  print("Invalid Input")
# sequences [CODE 5]
a = [50,70,32,56,80,21,1] #a is a variable 
b = [10,20,30,40,"HRS"] # b is list 
print(a)
print(b)
print(f"The datatype of b is:{type(b)}")
print(a+b)# contatenation of the two given sequences 
a.sort()
print(a)
a.sort(reverse=True)
print(a)
print(b[3])
print("Harmehar Kaur AI Batch2")
print("\n The class titled class 3 is completed")