# ****************************************************#
s = input()
len_of_s = len(s)
for index in range(1, len_of_s + 1):
    print(s[:index])
# ****************************************************#

# ****************************************************#
#Shuffled string
s = input()
len_of_s = len(s)
shuffled_s = ""
for i in range(len_of_s):
    index = int(input())
    shuffled_s = shuffled_s + s[index]
print(shuffled_s)
# ****************************************************#

# ****************************************************#
n = int(input())
factors = 0
for i in range(2, n):
    if (n % i == 0):
        factors += 1
if factors == 0:
    print("Prime Number")
else :
    print("Not a Prime Number")
# ****************************************************#

# ****************************************************#
string = input()
count_uppercase = 0
count_lowercase = 0
count_digit = 0
for i in string:
    if i.isupper():
        count_uppercase = count_uppercase + 1
    if i.islower():
        count_lowercase = count_lowercase + 1
    if i.isdigit():
        count_digit = count_digit + 1
if count_uppercase > 0 and count_lowercase > 0 and count_digit > 0:
    print("Valid Password")
else:
    print("Invalid Password")
# ****************************************************#

# ****************************************************#
# Wap to print the character of the string present at
#each index of the given n indices
s = input()
length = len(s)
shuffled_s = ""
for index in range(1, length+1):
    num = int(input())
    print(s[num])
# ****************************************************#

# ****************************************************#
#Wap that prints the letters of the word on N lines 
s = input()
length = len(s)
for i in range(1, length+1):
    shuffled_s = s[:i]
    print(shuffled_s)
# ****************************************************#

# ****************************************************#
#Wap to print a square of N rows and N columns
num = int(input())
new_num = ""
for i in range(0, num):
    str_num = str(i)
    str_num = (str_num + " ")*num
    print(str_num)
# ****************************************************#

# ****************************************************#
#shuffled string
s = input()
length = len(s)
shuffled_s = ""
for index in range(0, length):
    num = int(input())
    shuffled_s = shuffled_s + s[num]
print(shuffled_s)
# ****************************************************#

# ****************************************************#
#Wap to print a square of n rows and n columns starting 
#form s
s = int(input())
n = int(input())
# count = s
for i in range(n):
    count = s
    for j in range(1,n):
        print(count, end=" ")
        count += 1 
    print(count)
# ****************************************************#

# ****************************************************#
#Wap to find the count of 0's in N
n = int(input())
new_n = str(n)
number_count = new_n.count("0")
if number_count>3 :
    print("Count of zeroes is greater than three")
else :
    print("Count of zeroes is not greater than three")
# ****************************************************#

# ********************************************************#
#Wap to count the number of even digits in N
n = int(input())
new_n = str(n)
count = 0
for i in new_n:
    num = int(i)
    if num%2==0:
        count += 1
if count > 2 :
    print("Count of even digits is greater than two")
else :
    print("Count of even digits is not greater than two")
# ********************************************************#

# ********************************************************#
#Wap to check if the given number is prime or not
n = int(input())
count = 0
for i in range(2,n):
    if(n%i==0):
        count += 1
if count > 0 :
    print("Not a Prime Number")
else :
    print("Prime Number")
# ********************************************************#

# ********************************************************#
#Wap to print a Right angled triangle of N rows using 
#stars (*)
n = int(input())
count = 1 
for i in range(1, n+1):
    print("* "*count)
    count += 2 
# ********************************************************#

# ********************************************************#
#Wap to print an inverted right angle triangle
n = int(input())
count = n 
for i in range(1,n+1):
    print("* "*count)
    count -= 1 
    
# ********************************************************#

# ********************************************************#
#Wap to print a Hollow Square of N+2 rows using + , - , |
n = int(input())
count = n
print("+ " + ("- "*n) + "+ ")
for i in range(1, n+1):
    print("| " + ("  "*count) + "| ")
print("+ " + ("- "*n) + "+ ")
# ********************************************************#

# ********************************************************#
#Wap to modify a string as add (-) before every uppercase 
#word excluding the first one and then convert the whole
#string into lowercase 
s = input()
new_s = ""
for i in s :
    if i.isupper():
        new_s = new_s + "-" + i
    else :
        new_s = new_s + i 
new_s = new_s.lower()
if new_s[0] == "-":
    new_s = new_s.strip("-")
    print(new_s)
else :
    print(new_s)
# ********************************************************#

# ********************************************************#
#Wap to print numbers from 1 to N in each column forming
#a square pattern of N rows and N columns
n = int(input())
count = n
for i in range(1, n+1):
    print((str(i) + " ")*count)
# ********************************************************#

# ********************************************************#
#Wap to print numbers from 1 to n in each row forming a 
#rectangular pattern of M rows and n columns
n = int(input())
m = int(input())
for i in range(1, n+1):
    count = 1
    for j in range(1, m):
        print(count, end=" ")
        count += 1
    print(count)
# ********************************************************#

# ********************************************************#
#Wap to print a pyramid of N rows using a star (*)
n = int(input())
k = n
for i in range(1, n+1):
    k = k - 1
    spaces = " " * k
    stars = "* " * i
    print(spaces+stars)
# ********************************************************#












