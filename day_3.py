#print a diamond of satrs
number = int(input())
count = number
counter = number
for rows in range(1, number+1):
    count = count - 1
    spaces = " "*count
    stars = "* "*rows
    upper_half = spaces + stars
    print(upper_half)
for rows in range(1, number+1):
    counter = counter - 1
    spaces = " "*rows
    stars = "* "*counter
    lower_half = spaces + stars
    print(lower_half)
    
    
#Print a pattern of M through stars
number = int(input())
count = number
for i in range(1, number+1):
    count = count - 1
    first_spaces = " "*count
    first_star = "* "*i
    second_spaces = 2*first_spaces
    second_star = "* "*i
    pattern = first_spaces + first_star + second_spaces + second_star
    print(pattern)