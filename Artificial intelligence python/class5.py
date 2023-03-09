# DICTIONARY - 
# key value pair 
# represented by flower brackets/curly brackets {}
# separated by commas, key value pair is separated by colon(:)   key:value
# syntax ->a = {key:value,key:value,key:value}
# mutable (we can add or remove elements from a dictionary)
# does not support indexing 
# keys in dictionary need not be a number always, can be text also
# LOOPS:-
# 1. runs a block of code repeatedly until the specified condition is met (one time if loop is executed, we call it as an iterat 
# 2. while, for, do while:NOT THERE, for each:NOT THERE, if-else, break STATEMENTS, continue STATEMENT, 
# nested, switch: NOT THERE IN PYHTON, goto ,pass 
# 3. a+=1 used for increment 
# 4. increment - (post increment, pre increment)
# 5. decrement - (post decrement, pre decrement)   
# 6. a++ :python does not have this in its syntax
#                                               ********** MAIN CODE **************
#                                         ************ CONTAINS 7 CODE *****************
# CODE 1
#EMPTY DICTIONARY 
# d = {}
print("\n CODE 1 OUTPUT")
d = dict()
type(d)
# CODE 2
print("\n CODE 2 OUTPUT")
data = {1:"python",2:"java",3:"c++"}
print("\n")
print(data)
print("\n")
print(type(data))
# to access elements from a dictionary using a key 
print("\n")
print(data[1])
print("\n")
print(data.get(2,"Key not found"))   #Return the value for key if key is in the dictionary, else it will return default statement.  
print("\n")
print(data.get(5,"Key not found"))
# CODE 3
print("\n CODE 3 OUTPUT")
cse = {1:"AAA",2:"BBB",3:"CCC",4:"DDD"} #example 
print("\n")
print(cse)
# to add elements into a dictionary 
cse[5] = "EEE"
print("\n")
print(cse)
del cse[3] # to delete a key:value pair from a dictionary
print("\n")
print(cse)
cse.clear() #clears all the key:value pairs from the dictionary
# CODE 4
print("\n CODE 4 OUTPUT")
clg1 = {'cse':['AAA','BBB','CCC','DDD','EEE'],'ise':('aa','bb','cc','dd','ee')}#key contains a list it can be a tuple or a set as well
print("\n")
print(clg1)
# CODE 5
print("\n CODE 5 OUTPUT")
dict11 = {"state":["Karntaka","UP","Maharashtra"],"country":"India", "city":["New Delhi","Mumbai","Chennai","Kolkata"]}
print("\n")
print(dict11)
# CODE 6
print("\n CODE 6 OUTPUT")
editors = {'localhost':'jupyter notebook',
           'offline':['IDLE','Pycharm','Spyder','VSCode','Sublime'],
           'online':['Google Colaboratory','kaggle notebook']
           }
print("\n")
print(editors)
# CODE 7 [WHILE LOOP]
print("\n CODE 7 OUTPUT")
print("\n CODE 7 loop 1 OUTPUT")
a = 0  #initialization 
while a <= 10:  #condition 
  print("\n")
  print(a)      #statement 
  a = a + 1     #updation (increment or decrement)
print("\n CODE 7 loop 2 OUTPUT")  
a = 0   
while a <= 10:   
  print("\n")
  print(a)       
  a=a+1 #increment 
  # a+=1  also works alright for increment  
print("\n CODE 7 post increment OUTPUT")
#post increment - print the statements first, then increment the value of a 
a = 0   
while a <= 10:   
  print("\n")
  print(a)       
  a=a+1 #post increment
print("\n CODE 7 pre increment OUTPUT")
  #pre increment - increment first, then print the statement
a = 0   
while a <= 10:   
  a=a+1 #increment 
  print("\n")
  print(a) #print after increment       
print("\n Harmehar Kaur AI Batch2")
print("\n The class titled class 5 is completed")