#************************************************************#
#Wap to print a right angle triangle of N numbers
num = int(input())
for row_num in range(1, num+1):
    row_out = ""
    for seq_num in range(1, row_num+1):
        row_out = row_out + str(seq_num) + " "
    print(row_out)
#************************************************************#

#************************************************************#
sum = 0
for i in range(1, 4):
    for j in range(1,4):
        if i%j != 0 :
            sum = sum + 1
print(sum)
#************************************************************#

#************************************************************#
for i in range(1, 3):
    print("Outer: "+str(i))
    for j in range(2, 3):
        print("Inner: " + str(j))
    print("Done")
#************************************************************#
    
#************************************************************#
#Wap to print a Square of N rows using numbers from 1
n = int(input())
for i in range(1, n+1):
    count = 1
    for j in range(1, n):
        # count = 1
        print(count, end=" ")
        count += 1
    print(count)
#************************************************************#

#************************************************************#
#Wap to print a Right angled triangle of N using numbers
#form 1
n = int(input())
for i in range(1, n+1):
    new_s = ""
    for j in range(1, i+1):
        new_s = new_s + str(j) + " "
    print(new_s)
#************************************************************#

#************************************************************#
#Wap to print rectangle of m rows and n columns starting from 7
m = int(input())
n = int(input())
for i in range(1, m+1):
    count = 7
    for j in range(7, (n+7)-1):
        print(count , end=" ")
        count += 1
    print(count)
#************************************************************#

#************************************************************#
#Wap to print a pyramid of N rows using numbers starting from
#s
s = int(input())
n = int(input())
# count = n-1
counting = s 
for i in range(s, n+s):
    num = ""
    count = n-1
    for j in range(s, i+1):
        spaces = " "*count
        num = num + str(j) + " "
        count -= 1 
        # counting += 1
    print(spaces+num+spaces)
#************************************************************#

#************************************************************#
#Wap to print a square of N rows using numbers from N to 1
n = int(input())
for i in range(1, n+1):
    count = n
    for j in range(1, n):
        print(count, end=" ")
        count -= 1 
    print(count)
#************************************************************#

#************************************************************#
#Wap to print a right angled triangle of N using numbers 
#starting from 1
n = int(input())
# counting = 1
for i in range(1, n+1):
    count = n-1
    num = ""
    for j in range(0,i):
        counting = j+1
        spaces = "  "*count
        num =  str(counting) + " " + num 
        count -= 1
        counting += 1
    print(spaces+num)
#************************************************************#
    
#************************************************************#
#Wap to print all the armstrong numbers from 1 to N
n = int(input())
for i in range(1, n+1):
    st = str(i)
    length = len(st)
    sum = 0
    for j in range(0, length):
        num = st[j]
        num = int(num) ** length
        sum = sum + num
    if sum == i :
        print(i)
#************************************************************#

#************************************************************#
#Wap to print all the prime numbers from 1 to N
n = int(input())

for number in range(2, n+1):
    no_of_factors = 0
    for i in range(2, number):
        if (number % i) == 0:
            no_of_factors = no_of_factors + 1

    if no_of_factors == 0:
        print(number)
#************************************************************#

#************************************************************#
#Wap to print all the prime numbers from m to n with 
#separated by a space
m = int(input())
n = int(input())
prime_numbers = ""

for number in range(m, n+1):
    if number > 1 :
        factors = 0
    else: 
        factors = 1
    for i in range(2, number):
        if (number % i) == 0:
            factors = factors + 1
    if factors == 0 :
        prime_numbers = prime_numbers + str(number) + " "
if len(prime_numbers) > 0:
    print(prime_numbers)
else: 
    print("No Prime Numbers Found")
#************************************************************#

#************************************************************#
#Wap to print a rectangle of M rows and N columns using number
#starting from 1 
m = int(input())
n = int(input())

number = 1
for rows in range(m):
    each_row = ""
    for columns in range(n):
        each_row = each_row + str(number) + " "
        number = number + 1
    print(each_row)
#************************************************************#

#************************************************************#
#Wap to print an Inverted Right Angled Triangle of N rows 
#using numbers starting from 1
n = int(input())
count = n
counting = 0
for i in range(1, n+1):
    num = ""
    for j in range(1, count+1):
        num = num + str(j) + " " 
        spaces = " "*counting
    print(num + spaces)
    count -= 1 
    counting += 1
#************************************************************#

#************************************************************#
#Wap to print the numbers in the given N numbers of rows in 
#the following half pyramid pattern.
n = int(input())
number = 1 
for rows in range(1, n+1):
    each_row = ""
    for columns in range(1, rows+1):
        each_row = each_row + str(number) + " "
        number += 1
    print(each_row)
#************************************************************#

#************************************************************#
#Wap to print to print all prime numbers from M to N in a line
m = int(input())
n = int(input())
for number in range(m, n+1):
    factors = 0
    for i in range(2, number):
        if (number%i == 0):
            factors = factors + 1
    if factors == 0 :
        print(number, end="\n")
#************************************************************#

#************************************************************#

#************************************************************#
