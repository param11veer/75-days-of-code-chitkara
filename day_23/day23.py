# ************************************************************#
# Wap to print a square of N rows using numbers starting
# from 1
n = int(input())
number = 1
for i in range(1, n + 1):
    each_row = ""
    for j in range(1, n + 1):
        each_row = each_row + str(number) + " "
        number = number + 1
    print(each_row)
# ************************************************************#

# ************************************************************#
# Wap to print a right angled triangle of N rows using numbers
# starting from s
s = int(input())
n = int(input())
number = s
for i in range(1, n + 1):
    each_rows = ""
    s += 1
    for j in range(number, s):
        each_rows = each_rows + str(number) + " "
        number += 1
        s += 1
    print(each_rows)
# ************************************************************#

# ************************************************************#
# wap to print a Right Angled Triangle of N rows using numbers
# starting from s
s = int(input())
n = int(input())
number = s
for i in range(1, n + 1):
    each_row = ""
    s += 2
    for j in range(number, s):
        each_row = each_row + str(number) + " "
        number += 1
        s += 1
    print(each_row)
# ************************************************************#

# ************************************************************#
# Wap to print rectangle of m rows and n columns containing
# numbers starting from K in descending order. K = m*n
m = int(input())
n = int(input())
k = m * n
for i in range(1, m + 1):
    each_row = ""
    for j in range(1, n + 1):
        each_row = each_row + str(k) + " "
        k -= 1
    print(each_row)
# ************************************************************#

# ************************************************************#
# Wap to print an Inverted Right Angled Triangle of N rows
# using numbers starting from K in descending order where k =
# factorial of the given number n
n = int(input())
sum = 0
count = 0
counting = n
for i in range(1, n + 1):
    sum = sum + i
k = sum
for i in range(1, n + 1):
    each_row = ""
    for j in range(1, counting + 1):
        each_row = each_row + str(k) + " "
        spaces = "  " * count
        k -= 1
    print(spaces + each_row)
    count += 1
    counting -= 1
# ************************************************************#

# ************************************************************#
# Wap to print a right angled triangle of N rows using numbers
# starting from K+S-1 and ending with S
s = int(input())
n = int(input())
sum = 0
count = n - 1
for i in range(1, n + 1):
    sum = sum + i
k = sum
k = (k + s) - 1
for i in range(1, n + 1):
    each_row = ""
    for j in range(1, i + 1):
        each_row = each_row + str(k) + " "
        spaces = "  " * count
        k -= 1
    print(each_row + spaces)
    count -= 1
# ************************************************************#

# ************************************************************#
# Wap to print a right angled triangle - 6th type
n = int(input())

for row in range(1, n + 1):
    each_row = ""

    for column in range(1, row + 1):
        each_row = each_row + str(column) + " "

    for column in range(1, row):
        each_row = each_row + str(column) + " "

    print(each_row)
# ************************************************************#

# ************************************************************#
# Wap to print the pairs whose sum is n where i < j
n = int(input())
pairs = 0
for i in range(1, n + 1):
    for j in range(1, n + 1):
        if (i + j) == n and i < j:
            pairs += 1
print(pairs)
# ************************************************************#

# ************************************************************#
# Wap to print the triplets whose sum is n where a<b<c
n = int(input())
pairs = 0
for a in range(1, n + 1):
    for b in range(1, n + 1):
        for c in range(1, n + 1):
            if (a + b + c == n) and (a < b < c):
                pairs += 1
print(pairs)
# ************************************************************#
