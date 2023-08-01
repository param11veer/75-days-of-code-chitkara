#*********************************************************#
#Wap to check if the string is palindrome or not
string = input()
new_string = string.lower()
word = ""
length = len(string)
count = length
for i in new_string :
    count = count - 1
    word = word + new_string[count]
if word == new_string :
    print("Palindrome")
else :
    print("Not a Palindrome")
#*********************************************************#

#*********************************************************#
#Wap to find whether a string is palindrome or not given
#that upper-case, lower-case are treated same and ignore 
#spaces and quotes
string = input()
new_string = string.lower()
new_string = new_string.replace(" ","")
new_string = new_string.replace("'","")
word = ""
length = len(new_string)
count = length
for i in new_string :
    count = count - 1
    word = word + new_string[count]
if word == new_string :
    print("True")
else :
    print("False")
#*********************************************************#

#*********************************************************#
#Wap to remove all the vowels in the given sentence
string = input()
new_string = string
new_string = new_string.replace("A","")
new_string = new_string.replace("E","")
new_string = new_string.replace("I","")
new_string = new_string.replace("O","")
new_string = new_string.replace("U","")
new_string = new_string.replace("a","")
new_string = new_string.replace("e","")
new_string = new_string.replace("i","")
new_string = new_string.replace("o","")
new_string = new_string.replace("u","")
print(new_string)
#*********************************************************#

#*********************************************************#
#Given two string s1 and s2 Wap to check if s2 is at the 
#beginning of s1 or at the end 
string_1 = input()
string_2 = input()
if string_1.startswith(string_2):
    print("True")
elif string_1.endswith(string_2):
    print("True")
else :
    print("False")
#*********************************************************#

#*********************************************************#
#wap to check if the given C is lowercase letter or 
#uppercase letter or special character
c = input()

if c.isdigit():
    print("Digit")
elif c.isalpha():
    if c.upper():
        print("Uppercase Letter")
    else :
        print("Lowercase Letter")
else :
    print("Special Character")
#*********************************************************#





