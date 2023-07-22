# ======================================================#
# Wap to print a hollow diamond
n = int(input())
left_spaces_count = n - 1
left_spaces = " " * left_spaces_count
first_row = left_spaces + "*"
print(first_row)

middle_spaces_count = -1
for i in range(2, n + 1):
    left_spaces_count = n - i
    left_spaces = " " * left_spaces_count

    middle_spaces_count = middle_spaces_count + 2
    middle_spaces = " " * middle_spaces_count

    row = left_spaces + "*" + middle_spaces + "*"
    print(row)

for i in range(1, n - 1):
    left_spaces_count = i
    left_spaces = " " * left_spaces_count

    middle_spaces_count = middle_spaces_count - 2
    middle_spaces = " " * middle_spaces_count

    row = left_spaces + "*" + middle_spaces + "*"
    print(row)

left_spaces_count = n - 1
left_spaces = " " * left_spaces_count
last_row = left_spaces + "*"
print(last_row)

# ======================================================#

# ======================================================#
# Wap to print an inverted hollow pyramid using numbers
n = int(input())
count = -1
counting = n - 1
l_number = n - 1
for i in range(1, n + 1):
    if i == 1:
        left_spaces_count = n - 1
        left_spaces = "  " * left_spaces_count
        number = left_spaces + (str(i) + " ")
        print(number)
    else:
        counting = counting - 1
        left_spaces = "  " * counting
        count = count + 1
        middle_space = "  " * count
        row = left_spaces + (str(i) + " ") + middle_space + (str(i) + " ")
        print(row)

for i in range(1, n - 1):
    left_spaces_count = i
    left_spaces = "  " * left_spaces_count
    count = count - 1
    middle_space = "  " * count
    lower_number = l_number
    row = (
        left_spaces
        + (str(lower_number) + " ")
        + middle_space
        + (str(lower_number) + " ")
    )
    l_number = l_number - 1
    print(row)
if n > 1:
    left_spaces_count = n - 1
    left_spaces = "  " * left_spaces_count
    last_number = n - (n - 1)
    last_row = left_spaces + (str(last_number) + " ")
    print(last_row)

# ======================================================#

# ======================================================#
#Wap to print and inverted right angle triangle with +,*
n = int(input())
count = 0
counting = n - 3
for i in range(1, n + 1):
    if i == 1:
        first_row = "+ " * n
        print(first_row)
    elif i == n:
        left_spaces_count = n - 1
        left_spaces = "  " * left_spaces_count
        last_row = left_spaces + "* "
        print(last_row)
    else:
        count = count + 1
        left_spaces = "  " * count
        middle_spaces = "  " * counting
        counting = counting - 1
        lower_half = left_spaces + "* " + middle_spaces + "* "
        print(lower_half)
# ======================================================#

# ======================================================#

# ======================================================#

