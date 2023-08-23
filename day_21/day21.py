#*********************************************************#
#Wap to print the letters of the word in N rows as an 
#inverted Right Angled Triangle
w = input()
length = len(w)
count = length
for i in range(1,length+1):
    print(w[:count])
    count -= 1 
#*********************************************************#

#*********************************************************#
#Wap to print an Inverted Right Angled triangle of N rows 
#using stars (*)
n = int(input())
limit = (2*n)-1
count = 0
for i in range(1, n+1):
    spaces = "  "*count
    stars = "* "*limit
    print(spaces+stars)
    limit -= 2
    count += 2
#*********************************************************#

#*********************************************************#
#Wap to print new string by appending characters from s1 
#first and then from s2 alternately.
s1 = input()
s2 = input()
length = len(s1)
append_string = ""
for i in range(0,length):
    if i%2 == 0 :
        append_string = append_string + s1[i]
    else :
        append_string = append_string + s2[i]
print(append_string)
#*********************************************************#

#*********************************************************#
#Wap to print sum of even numbers from 1 to N
n = int(input())
count = 0
for i in range(1, n+1):
    if i%2==0:
        count += i
print(count)
#*********************************************************#

#*********************************************************#
#Wap to print sum of all odd numbers from 1 to N
n = int(input())
count = 0
for i in range(1, n+1):
    if i%2!=0:
        count += i
print(count)
#*********************************************************#

#*********************************************************#
#Wap to check if the given number is composite or not
n = int(input())
factor = 0
for i in range(1, n+1):
    if n%i == 0 :
        factor += 1
if factor > 2 :
    print("True")
else :
    print("False")
#*********************************************************#

#*********************************************************#
#wap to print a striped rectangular pattern of m rows and
#n columns.
m = int(input())
n = int(input())
for i in range(1, m+1):
    if i%2 != 0:
        print("+ "*n)
    else :
        print("- "*n)
#*********************************************************#

#*********************************************************#
#Wap to print a Hollow rectangle of M+2 rows and N+2 
#columns using (+),(-),(|)
m = int(input())
n = int(input())
rows = m+2
columns = n+2
for i in range(1, rows+1):
    if i == 1 :
        print("+" + ("-"*n) + "+")
    elif i == rows :
        print("+" + ("-"*n) + "+")
    else :
        print("|" + (" "*n) + "|")
#*********************************************************#

#*********************************************************#

#*********************************************************#
