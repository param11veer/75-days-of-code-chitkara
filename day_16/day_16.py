# ==================================================================================#
# Wap to print two right angle triangles using n number
# of rows
n = int(input())
space = (n * 2) - 2
count = 0
# counting = (n*2) - 1
for i in range(1, n + 1):
    if i == n:
        last_row = "* " * (n * 2)
        print(last_row)
    elif i == 1:
        # space = space - 1
        spaces = "  " * space
        row = "* " + spaces + "* "
        print(row)
    else:
        space = space - 2
        spaces = "  " * space
        in_between_spaces = "  " * count
        star = "* "
        first_half = star + in_between_spaces + star
        second_half = spaces + star + in_between_spaces + star
        count = count + 1
        print(first_half + second_half)
# ==================================================================================#

# ==================================================================================#
# Wap to print a hollow butterfly
n = int(input())
star = "* "
counting = (2 * n) - 2
count = 0
for i in range(1, n + 1):
    if i == 1:
        space = "  " * ((2 * n) - 2)
        print(star + space + star)
    else:
        counting = counting - 2
        spaces = "  " * count
        middle_spaces = "  " * counting
        count = count + 1
        print(star + spaces + star + middle_spaces + star + spaces + star)
count = count - 1
for i in range(1, n + 1):
    if i == n:
        space = "  " * ((2 * n) - 2)
        print(star + space + star)
    else:
        spaces = "  " * count
        middle_spaces = "  " * counting
        counting = counting + 2
        count = count - 1
        print(star + spaces + star + middle_spaces + star + spaces + star)
# ==================================================================================#

# ==================================================================================#
# Wap to print the number of perfect squares between
# a and b
a = int(input())
b = int(input())
count = 0
c = int
for i in range(a, b + 1):
    if i**0.5 == int(i**0.5):
        count = count + 1
print(count)
# ==================================================================================#

# ==================================================================================#
#Wap to print right angle triangular pattern of n rows
n = int(input())
count = n-1
star = "* "
for i in range(1, n+1):
    spaces = "  "*count
    rows = spaces + (star*i)
    count = count - 1
    print(rows)
# ==================================================================================#


# ==================================================================================#
#Wap to print a pyramid and an inverted hollow pyramid
#on (2*n)-1 rows
n = int(input())
star = "* "
stars = "*"
left_spaces_count = n - 1
count = ((2 * n) - 1) - 4
for i in range(1, n + 1):
    left_spaces = " " * left_spaces_count
    row = left_spaces + (star * i)
    left_spaces_count = left_spaces_count - 1
    print(row)
left_spaces_count = 0
for i in range(1, n):
    if i == (n - 1):
        space = " " * (n - 1)
        print(space + star)
    else:
        left_spaces_count = left_spaces_count + 1
        left_spaces = " " * left_spaces_count
        middle_spaces = " " * count
        row = left_spaces + stars + middle_spaces + stars + left_spaces
        count = count - 2
        print(row)
# ==================================================================================#

