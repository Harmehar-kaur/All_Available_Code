#create a new file 
f1 = open("demo.txt","w")  #write mode (to create a file)
print(f1)
# UTF-8 is a variable-width character encoding used for electronic communication
f1 = open("demo.txt","a")  #append or add data to the file 
f1.write("Welcome to google colaboratory! \n")
f1.write("Have fun learning Python!")
f1 = open("demo.txt","r") # read mode to read the file created 
print(f1.read()) 
# linspace returns equally spaced numbers among the given interval 