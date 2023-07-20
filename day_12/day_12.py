number = int(input())
sum = 0
for digit in range(1, number + 1):
    lenght = len(str(digit))
    if lenght < 10:
        sum = sum + lenght
    elif 10 <= lenght < 100:
        sum = sum + lenght
    elif 100 <= lenght < 1000:
        sum = sum + lenght

print(sum)


# Wap to print a diamond of stars
number = int(input())
count = number
counter = number
for rows in range(1, number + 1):
    count = count - 1
    spaces = " " * count
    stars = "* " * rows
    upper_half = spaces + stars
    print(upper_half)
for rows in range(1, number + 1):
    counter = counter - 1
    spaces = " " * rows
    stars = "* " * counter
    lower_half = spaces + stars
    print(lower_half)


# Wap to print a diamond of n number
number = int(input())
sum = 0
count = number
counter = number
for i in range(1, number + 1):
    print_number = str(i)
    count = count - 1
    spaces = " " * count
    num = (print_number + " ") * i
    upper_half = spaces + num
    print(upper_half)
for i in range(1, number + 1):
    counter = counter - 1
    print_number = str(counter)
    spaces = " " * i
    num = (print_number + " ") * counter
    lower_half = spaces + num
    print(lower_half)


# Wap to print an inverted right angle triangle
number = int(input())
sum = 0
count = number
for rows in range(1, number + 1):
    spaces = "  " * sum
    print(spaces + ("* " * count))
    count = count - 1
    sum = sum + 1



# Wap to print a (W) of stars
number = int(input())
sum = 0
count = number
counter = 0
counting = number
for rows in range(1, number+1):
    if (rows == 1):
        print("* "*((2*number)-1))
    else:
        counting = counting - 1
        count = count - 1
        sum = sum + 1
        spaces = " "*sum
        stars = "* "*count
        spaces_1 = " "*((sum*2)-2)
        stars_1 = "* "*counting
        figure = spaces + stars + spaces_1 + stars_1
        print(figure)
        



# Wap to print sum of n terms in the given series 
X = int(input())
number = int(input())
sum = 0
sum_1 = 0
count = 3
counter = 1
for digits in range(1, number+1):
    if(counter != count):
        term = X**counter
        sum = sum + term
    # counter = counter + 2
    if(counter == count):
        term_1 = -(X**counter)
        sum_1 = sum_1 + term_1
        count = count + 4
    counter = counter + 2
print(sum + sum_1)



# Wap to print the count of factors of N
number = int(input())
count = 0
counter = 0
for i in range(1, number+1):
    counter = counter + 1
    if(number%i == 0):
        count = count + 1
    if(counter >= number):
        if(count>2):
            print("Number has more than 2 factors")
        if(count<=2):
            print("Number doesn't have more than 2 factors")
            
            
            
            
# Wap to print two right angle triangles one beneath the other
number = int(input())
count = 0
counter = number
for i in range(1, number+1):
    print("* "*i)
for i in range(1, number+1):
    print("* "*i)



