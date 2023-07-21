#======================================================#
#Wap to print a hollow pyramid
number_of_rows = int(input())
sum = number_of_rows-1
count = 1
# count = number_of_rows
for i in range(1, number_of_rows+1):
    if i == 1 :
        print(" "*(number_of_rows-1) + "*")
    elif i == number_of_rows :
        print("* "*number_of_rows)
    else :
        sum = sum-1
        spaces = " "*sum 
        space_in_between = " "*count
        count = count + 2
        print(spaces + "*" + space_in_between + "*")
#======================================================#

#======================================================#
#Wap to pint and inverted hollow right angle triangle
#with plus(+) and hash(#).
number_of_rows = int(input())
count = number_of_rows - 3
for i in range(1, number_of_rows+1):
    if i == 1 :
        print("# "*number_of_rows)
    elif i == number_of_rows:
        print("+ "*1)
    else :
        print("+ " + (("  ")*count) + "+ " )
        count = count - 1
#======================================================#

#======================================================#
#Wap to print a pyramid on y-axis with n number
number = int(input())
sum = 1
count = 0
spacing = number-2
counting = number-1
for i in range(1, number+1):
    if i == 1 :
        print((str(i)+" "))
    else :
        converted_number = str(i)
        number_to_print = (converted_number + " ")
        spaces = "  "
        upper_half = number_to_print + ( (spaces)*count ) + number_to_print
        count = count + 1
        print(upper_half)
for i in range(1, number):
    if i == (number-1):
        print((str(sum)+" "))
    else:
        converted_number = str(counting)
        number_to_print = (converted_number + " ")
        spaces = "  "
        spacing = spacing - 1
        counting = counting - 1
        lower_half = number_to_print + ( (spaces)*spacing ) + number_to_print
        print(lower_half)
#======================================================#

#======================================================#
#Wap to print a hollow right angle triangle
number_of_rows = int(input())
count = number_of_rows - 3
for i in range(1, number_of_rows+1):
    if i == 1:
        print("* "*number_of_rows)
    elif i == number_of_rows :
        print("* "*1)
    else:
        stars = "* "
        spaces = "  "
        triangle = stars + ( spaces*count ) + stars
        count = count - 1
        print(triangle)
#======================================================#

#======================================================#
#Wap to print a hollow right angle triangle whose
#hypotenuse is left facing
number_of_rows = int(input())
count = number_of_rows - 2
counting = 0
for i in range(1, number_of_rows+1):
    if i == 1 :
        spc = "  "*(number_of_rows-1)
        star = "* "*1
        print(spc+star)
    elif i == number_of_rows:
        print("* "*number_of_rows)
    else :
        spaces = "  "*count
        stars = "* "
        space_in_between = "  "*counting
        counting = counting + 1
        count = count - 1
        print(spaces + stars + space_in_between + stars)
#======================================================#

#======================================================#
#Wap to print a hollow inverted right angle triangle
number_of_rows = int(input())
sum = 1
counting = number_of_rows-3
for i in range(1, number_of_rows+1):
    if i == 1 :
        print("* "*number_of_rows)
    elif i == number_of_rows :
        print( "  "*(number_of_rows-1) + ("* "*1))
    else :
        space = "  "*sum
        star = "* "
        space_in_between = "  "*counting
        triangle = space + star + space_in_between + star
        sum = sum + 1
        counting = counting - 1
        print(triangle)
#======================================================#

#======================================================#
#wap to print a hollow inverted pyramid
n = int(input())
for row in range(1, n+1):
    i = n - (row-1)
    left_spaces = " " * (n - i)
    if (i > 2) and (i < n):
        hollow_spaces = "  " * (i-2)
        stars = "* " + hollow_spaces + "* "
        print(left_spaces + stars)
    else:
        stars = "* " * i
        print(left_spaces + stars)
#======================================================#