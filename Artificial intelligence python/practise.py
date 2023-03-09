# print("Welcome to Python", SEP='&')
# print("Welcome","to","Python", sep="$")
# Print("Welcome","to","Python", sep="#")
# a=0
# b=0
# print(type(A))
# none 
# sum
# salary 
# a += b
# a, b, c = 120, 34, 56
# a_b_c = 1200
# a, b = 2300, 4500, 6700

# s="CBSE Examination 2023"
# s=s.split()
# print(s)
# print("#".join(s))
# print(s)

# for x in range (2,5) :
#     if x % 2 == 0:
#        print(x) 

# a=[34,'nation']
# for x in range (len(a)):
#     print (a[x],end='\n')
#     if (type(a[x]) == str):
#         print(a[x][::-1])

# T=(101,110,120,["Anil","Kumar","Delhi"],110019)
# print(T[-1])
# print(T[:2])
# print(T[3][-3])

# N = int(input("Enter The Number of Terms to Be Printed: "))
# for i in range(1,N):   # start,stop,step[step is basically the increment thingy]
#   print(i)

# import random #Statement-1
# def Gen_num():
#   num= random.random() #Statement-2
#   print(num)
# def Gen_OTP():
#   n= random.randint(10000,99999) #Statement-3
#   print("Your OTP is", n)
# Gen_num()
# Gen_OTP() 

# L=[101,"Laptop",68975.45,4,8900]
# print(L[-6::-1])
# print(L[::-2])
# L.append(1000)
# print(L)
# L[2]+=1000
# print(L[2])

a= str(input("Enter The String:"))
count1=0 #count of digits 
count2=0 #count of alphabets
count3=0  #count of vowels
for i in a:
    if(i.isdigit()):
        count1+=1
    elif(i.isalpha()):
        count2+=1
        i=i.lower()
        if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u'):
            count3+=1
print(f"The number of digits is {count1}, alphabets is {count2} and vowels is {count3}")