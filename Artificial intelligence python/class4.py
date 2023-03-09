# named as class5&6 in the notes provided 
# a=[ 1, 2 , 3 , 4 , 5 , 6 , 7 , 8 ]
#     0  1   2   3   4   5   6   7 indexing
#    -8 -7  -6  -5  -4  -3  -2  -1 negative indexing not commonly used. used when trying to extract
# the last few elements of a high order list with many elements. 
# slicing is getting an output for a selected range or single element.
# line 25 prints the elements till one less than the upper limit of the index provided,i.e., a[x:y] 
# elements from index x to y-1 are printed or selected or used.
# slicing- getting a small part of the original list using indexing slicing always goes from left 
# to right in python   
#operations on a list 
# 1. append():adds an element to the last index position 
# 2. insert():adds the element according to the index  
# 3. remove():Remove only first occurrence of element.
# 4. pop():delete elements according to index, we use pop()
# 5. sort():sorting is done by using Capital letters first(A-Z), lowercase next (a-z) and numerals 
# follow thereafter. 
# 6. reverse():reverses the list
# 7. index():prints the index of the first occurence elements
# 8. extend():extending a list 
# 9. clear():deletes all the elements from the list 
# 10.count():count of the number of times the argument is repeated in the list  
# 11.del: delete a range of elements according to slicing. del fruits[2:4] in code 1 below 
# TUPLES:- 
# 1.represented in paranthesis() 
# 2.separated by commas
# 3.allows repetition of elements
# 4.allows elements of different datatypes
# 5.immutable (cannot add or remove elements once created from a tuple)
# 6.give higher security to the elements[advantage over lists as no one can make a direct chg to it] 
# 7.support indexing and slicing
# 8.example - a = (1,2,3,4,5)
# tuples are immutable so the following functions don't work for the code and generate an error:-
# a.append(5)
# a.insert(2,8)
# a.remove(6)
# a.pop(0)
# SETS:- 
# represented in curly brackets 
# separated by commas 
# does not support indexing or slicing (unordered)
# does not allow repetition of elements 
# sorting is always only in the ascending order (by default it is sorted everytime)
# allow elements of different datatypes
# mutable ( changes can be done (set.add() and set.discard()))
# example - a = {1,5,6,7,8,9}
#                                               ********** MAIN CODE **************
#                                         ************ CONTAINS THREE CODE *****************
# CODE 1 [LIST]
a=[ 1, 2 , 3 , 4 , 5 , 6 , 7 , 8 ]
print(f"\n The entered list is:{a}")
print(f"\n The required range of list is:{a[3:7]}")# 3 in inclusive, 7:exclusive. 
print(f"\n The required range of list is:{a[-5:-1]}")
print(f"\n The required range of list is:{a[4:]}")# to take it till the end of the list.or consider
#  everything after the given index
print(f"\n The required range of list is:{a[0:-5]}")
print(f"\n The required range of list is:{a[-5:0]}")
print(f"\n The required range of list is:{a[-7:5]}")
fruits = ["apple","orange","grapes","banana"]
print(fruits)
fruits.sort()
fruits.append("Orange")
print(f"\n Now the list is after appending:{fruits}")
fruits.append("Apple")
print(f"\n Now the list is after appending:{fruits}")
print(fruits.index('Apple'))
print(fruits.count('apple'))
fruits.reverse()
print(f"\n Now the list is after reversing:{fruits}")
fruits.append("mango")
print(f"\n Now the list is after appending:{fruits}")
fruits.insert(2,"kiwi")
print(f"\n Now the list is after inserting:{fruits}")
fruits.remove("apple")
print(f"\n Now the list is after removing:{fruits}")
fruits.pop(5)
print(f"\n Now the list is after popping:{fruits}")
fruits.clear()
fruits = ["lemon","kiwi","lychee","cherry","berries"]
veggies = ["potato","tomato","onions","ginger","carrot"]
print(fruits+veggies)
fruits.extend(veggies)
print(f"\n Now the list is after extending:{fruits}")
# CODE 2[TUPLE]
a = (1,4,5,6,8,2,3)
b = (5,6,7,8,9,1,3)
print(a)
print(f"\n Type of the above data is:{type(a)}")
print(f"\n The sliced {type(a)} is :{a[1:4]}")
print(f"\n The sum of the elements a[0] and b[1] is:{a[0]+b[1]}")
print(f"\n The concatenation of the two strings is:{a+b}")
print(len(a)) #prints the number of elements in a list/tuple
print(f"\n The minimum element of the {type(a)} is: {min(a)}") #minimum element
print(f"\n The maximum element of the {type(a)} is:{max(a)}")#maximum element
print(f"\n The sum of all the element of the {type(a)} is:{sum(a)}")#sum of all the items of an iterable. 
print(f"\n The element 8 is repeated the following times in the tuple:{a.count(8)}")# prints how many times 8 is repeated in the tuple a
# CODE 3[SET]
a = {5,5,2,2,1,8,9,9,4,5}
print(f"\n The set is: {a}")
a.add(9)
a.add(10)
print(f"\n The updated set is: {a}")
a.remove(9)
print(f"\n The updated set is: {a}")
a.discard(4)
print(f"\n The updated set is: {a}")
a.add(6)
print(f"\n The updated set is: {a}")
b = {4,5,11,6,3,9,0}
print(f"\n The union of the two sets is:{a | b}") #all elements from a and b is union,union of a set
print(f"\n The intersection of the two sets is:{a & b}") #common elements from a and b
print(f"\n The difference of the two sets is:{a - b}") # difference in a set :a - (a intersection b) {1, 2, 5, 6, 8, 10} - {5, 6}
#symmetric differnce:union of uncommon elements, (a union b) - (a intersection b) ,{0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11} - {5, 6}
print(f"\n The symmetric difference of the two sets is:{a ^ b}")
new_set = b.copy()
print(new_set)
b.clear()
print(b)
# how to define empty lists,empty tuples,empty sets, empty dictionaries
# EMPTY LIST 
# a = []
a = list()
print(a)
print(type(a))
#EMPTY TUPLE 
# b = ()
b = tuple()
print(type(b))
#EMPTY SET 
# c = {} #not an empty set, it is a dictionary 
c = set()
print(type(c))
#EMPTY DICTIONARY 
# d = {}
d = dict()
print(type(d))
print("\n Harmehar Kaur AI Batch2")
print("\n The class titled class 4 is completed")

