# ===========================================================#
# Wap to print a hollow right angle triangle
N = int(input())

for i in range(0, N):
    if i == 0:  # part- 1 logic
        print("  " * (N - 1) + "*")

    elif i == N - 1:  # part- 3 logic
        print("* " * N)

    else:  # part- 2 logic
        left_spaces = "  " * (N - i - 1)

        hollow_spaces = "  " * (i - 1)

        print(left_spaces + "* " + hollow_spaces + "*")
# ==============================================================#

# ==============================================================#
# Wap to print a square of n rows using stars on the borders
# and 0 inside it.
number = int(input())
for i in range(1, number + 1):
    if i == 1:
        print("* " * number)
    elif i == number:
        print("* " * number)
    else:
        print("* " + (("0 ") * (number - 2)) + "* ")
# ==============================================================#

# ==============================================================#
# Wap to print a square of M rows and N columns using
# stars on the border and and 0 inside it
M = int(input())
N = int(input())
for i in range(1, M + 1):
    if i == 1:
        print("* " * N)
    elif i == M:
        print("* " * N)
    else:
        print("* " + (("0 ") * (N - 2)) + "* ")
# ==============================================================#

# ==============================================================#
# Wap to print a right-angle triangle with dots(.) on the border
# and zeros(0) inside it.
number_of_rows = int(input())
sum = 0
for i in range(1, number_of_rows + 1):
    # sum = sum + 1
    if i == 1:
        print(". " * i)
    elif i == 2:
        print(". " * i)
    elif i == number_of_rows:
        print(". " * number_of_rows)
    else:
        sum = sum + 1
        print(". " + ("0 " * sum) + ". ")
        # sum = sum + 1
# ==============================================================#

# ==============================================================#
# Wap to print a hollow square of n rows
number_of_rows = int(input())
for i in range(1, number_of_rows + 1):
    if i == 1:
        print("* " * number_of_rows)
    elif i == number_of_rows:
        print("* " * number_of_rows)
    else:
        print("* " + (("  ") * (number_of_rows - 2)) + "* ")
# ==============================================================#

# ==============================================================#
# Wap to print a hollow rectangle with M rows and n columns
M = int(input())
N = int(input())
for i in range(1, M + 1):
    if i == 1:
        print("* " * N)
    elif i == M:
        print("* " * N)
    else:
        print("* " + (("  ") * (N - 2)) + "* ")
# ==============================================================#

# ==============================================================#
# Wap to print a hollow triangle
number_of_rows = int(input())
sum = 0
for i in range(1, number_of_rows + 1):
    if i == 1:
        print("* " * i)
    elif i == number_of_rows:
        print("* " * number_of_rows)
    else:
        print("* " + (("  ") * (sum)) + "* ")
        sum = sum + 1
# ==============================================================#

# ==============================================================#
#wap to print inverted hollow triangle with (_),(|),(/)
number_of_rows = int(input())
sum = number_of_rows+1
for i in range(1, number_of_rows+2):
    if i == 1 :
        print("_"*(number_of_rows+1))
    else :
        sum = sum - 2
        print("|" + ((" ")*(sum)) + "/")
        sum = sum + 1
# ==============================================================#
