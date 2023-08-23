#**********************************************************#
#Wap to print a Hollow Square of N rows and N columns 
n = int(input())
count = n-2
new_m = str(n)
for i in range(1, n+1):
    if i == 1 :
        for i in range(1, n+1):
            print(i, end=" ")
        print()
    elif i == n :
        for i in range(1, n+1):
            print(i, end=" ")
        print()
    else :
        # for i in range(2, n):
        print("1 " + ("  "*count) +  (new_m + " "))
#**********************************************************#

#**********************************************************#
n = int(input())
count = 1 
counting = 0
for i in range(1, n+1):
    if i == 1 :
        print("1")
    elif i == n :
        for i in range(1, n+1):
            print(i, end=" ")
        print()
    else :
        spaces = "  "*counting
        count += 1 
        print("1 "+spaces+str(count))
        counting += 1 
#**********************************************************#

#**********************************************************#
#Wap to print a Hollow Rectangle of M rows and N columns 
#using numbers starting form 7
m = int(input())
n = int(input())
limit = 7+(n-1)
limit_new = str(limit)
count = n-2
for i in range(1, m+1):
    if i == 1 :
        for i in range(7, limit+1):
            print(i, end=" ")
        print()
    elif i == m :
        for i in range(7, limit+1):
            print(i, end=" ")
        print()
    else :
        spaces = "  "*count
        print("7 " + spaces + limit_new)
#**********************************************************#

#**********************************************************#
#Wap to print a Hollow Pyramid of N rows using number frm 5
n = int(input())
count = 6
left_spaces = n-1
middle_spaces = 1
limit = 5+n
for i in range(1, n+1):
    # left_spaces = n-1
    # middle_spaces = 1
    if i == 1 :
        spaces = " "*left_spaces
        print(spaces + "5 ")
    elif i == n :
        for i in range(5, limit):
            print(i, end=" ")
        print()
    else :
        left_spaces -= 1
        print(left_spaces*" " + "5" + (" "*middle_spaces) + str(count))
        middle_spaces += 2
        # left_spaces -= 1 
        count += 1 
#**********************************************************#

#**********************************************************#
#Wap to print a Hollow square of N rows and columns using 
#numbers starting from N in descending order
n = int(input())
descending_order = n
count = n-2
num = str(n)
for i in range(1, n+1):
    if i == 1:
        for i in range(1, n+1):
            print(descending_order, end=" ")
            descending_order -= 1 
        print()
    elif i == n :
        descending_order = n
        for i in range(1, n+1):
            print(descending_order, end=" ")
            descending_order -= 1 
        print()
    else :
        middle_spaces = "  "*count
        print((num + " ") + middle_spaces + "1 ")
#**********************************************************#

#**********************************************************#
#Wap to print a Hollow right angle triangle of N rows using
#numbers starting from 1 .
n = int(input())
left_spaces = n-1
count = n 
counting = 1 
middle_space = 0 
for i in range(1, n+1):
    if i == 1 :
        print("  "*left_spaces + "1 ")
    elif i == n :
        for i in range(1, n+1):
            print(count, end=" ")
            count -= 1 
        print()
    else :
        left_spaces -= 1 
        counting += 1 
        spaces = "  "*left_spaces
        middle_spaces = "  "*middle_space 
        print(spaces + (str(counting) + " ") + middle_spaces + "1 ")
        middle_space += 1 
#**********************************************************#

#**********************************************************#
#Wap to print a hollow rectangle of M rows and N columns
#using numbers starting from 1 
m = int(input())
n = int(input())
number = (m-1)*n + 1 
count = n+1 
# counting = count + (n-1)
for i in range(1, m+1):
    # for j in range(1, n+1):
        if i == 1 :
            for i in range(1, n+1):
                print(i, end=" ")
            print()
        elif i == m :
            for i in range(1, n+1):
                print(number, end=" ")
                number += 1 
            print()
        else :
            counting = count + (n-1)
            print((str(count)+" ") + "  "*(n-2) + (str(counting)+" "))
            count = counting + 1 
#**********************************************************#

#**********************************************************#
#Wap to print an Inverted hollow pyramid of N rows using
#numbers starting from S
n = int(input())
s = int(input())
first_line = s 
count = 1 
counting = (2*n-1)-4
for i in range(1, n+1):
    if i == 1 :
        for i in range(1, n+1):
            print(first_line, end=" ")
            first_line += 1 
        print()
    elif i == n :
        print(" "*(n-1) + str(s))
    else :
        left_spaces = " "*count
        middle_spaces = " "*counting
        first_line -= 2 
        print(left_spaces + (str(s)+"") + middle_spaces + (str(first_line)))
        counting -= 2 
        first_line += 1 
        count += 1
#**********************************************************#

#**********************************************************#
#Wap to print inverted full pyramid pattern of n rows
n = int(input())
count_of_numbers = 1
count = 1 
counting = (2*n-1)-5
for i in range(1, n+1):
    if i == 1 :
        for i in range(1, n+1):
            print(count_of_numbers, end=" ")
            count_of_numbers += 1 
        print()
    elif i == n :
        print(" "*(n-1) + "1")
    else :
        left_spaces = " "*count
        middle_spaces = " "*counting
        count_of_numbers -= 2 
        print(left_spaces + "1 " + middle_spaces + str(count_of_numbers) )
        count_of_numbers += 1 
        count += 1 
        counting -= 2
#**********************************************************#

#**********************************************************#
#Wap to print the hollow inverted half pyramid of n rows
n = int(input())
count_of_number = 1
space = n-3
for i in range(1, n+1):
    if i == 1 :
        for i in range(1, n+1):
            print(count_of_number, end=" ")
            count_of_number += 1 
        print()
    elif i == n :
        print("1 ")
    else :
        middle_space = "  "*space
        count_of_number -= 2 
        print("1 " + middle_space + (str(count_of_number)+" ") )
        count_of_number += 1 
        space -= 1 
#**********************************************************#

#**********************************************************#
#Wap to print the hollow full pyramid pattern of n rows
n = int(input())
star = "* "
left_spaces = (n-1)
middle_spaces = 0
for i in range(1, n+1):
    if i == 1 :
        print(" "*left_spaces + star)
    elif i == n :
        print(star*n)
    else :
        left_spaces -= 1 
        space = " "*left_spaces
        space_1 = " "*middle_spaces
        print(space + star + space_1 + star)
        middle_spaces += 2 
#**********************************************************#

#**********************************************************#
#Wap to print hollow full pyramid of n rows
n = int(input())
star = "* "
left_spaces = (n-1)
middle_spaces = 0
for i in range(1, n+1):
    if i == 1 :
        print(" "*left_spaces + star)
    elif i == n :
        print(star*n)
    else :
        left_spaces -= 1 
        space = " "*left_spaces
        space_1 = " "*middle_spaces
        print(space + star + space_1 + star)
        middle_spaces += 2 
#**********************************************************#

