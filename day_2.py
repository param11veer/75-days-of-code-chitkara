#Code to print pyramid of n rows with numbers
N = int(input())
count = 0
for i in range(1, N+1):
    spaces = "  " * (N-count-1)
    number = (str(i) + " ") * ((2*count)+1) 
    count = count + 1
    print(spaces + number)
    
    
    
# Print an inverted right angle triangle with n numbers
N = int(input())
sum = 0
count = 0
counter = N
for i in range(1, N+1):
    print( ( (" "*count) + (str(counter)*counter ) ) )
    counter = counter - 1
    count = count + 1



#Print an inverted 
N = int(input())
count = 0
counter = N
sum = 0
for i in range(1, N+1):
    print( ( ("  "*count) ) + ( (str(counter) + " ")*counter) )
    counter = counter - 1
    count = count + 1
    



#Print inverted pyramid for n number of rows
number_of_rows = int(input())
for row in range(number_of_rows):
    spaces = " " * row
    stars = "*" * (2 * (number_of_rows - row) - 1)
    each_row = spaces + stars
    print(each_row)
    
    
    

#print a M with stars for n number of rows
no_of_rows = int(input())

for each_number in range(1, no_of_rows + 1):
    first_triangle_stars = "* " * each_number
    first_triangle_spaces = "  " * (no_of_rows - each_number)

    first_triangle = first_triangle_stars + first_triangle_spaces
  
    second_triangle_spaces = "  " * (no_of_rows - each_number)
    second_triangle_stars = "* " * each_number




#Code to print a pyramid of n numbers on the y axis
number = int(input())
count = number
for rows in range(1, number+1):
    numbers = (str(rows)+" ")*(rows)
    print(numbers)
for rows in range(1, number+1):
    count = count - 1
    numbers = ((str(count)+" ")*(number-rows))
    print(numbers)
    
    
    
    
#Print a pyramid of 2*N-1 rows using + and #
number = int(input())
count = number
for rows in range(1, number+1):
    spaces = "  "*(number-rows)
    ha_sh = ("+ "*(rows-1)+ "# "*1)
    print(spaces+ha_sh)
for rows in range(1, number):
    spaces = "  "*(rows)
    ha_sh = ("+ "*(number - rows - 1)+ "# "*1)
    print(spaces+ha_sh)
    
    
    
#print a pyramid of *
number = int(input())
count = number
for row in range(1, number+1):
    count = count - 1
    space = " " * count
    stars = "* "*row
    pyramid = space + stars
    print(pyramid)





# write a code to print butterfly through stars
number = int(input())

for each_number in range(1, number + 1):
    stars = "* " * each_number
    spaces = "  " * (2 * (number - each_number))
    each_row = stars + spaces + stars
    print(each_row)
    
for each_number in range(1, number):
    stars = "* " * (number - each_number)
    spaces = "  " * (2 * each_number)
    each_row = stars + spaces + stars
    print(each_row)
    
    
    


#Print pyramid of numbers
number = int(input())
count = number
for rows in range(1, number+1):
    count = count - 1
    spaces = " " * count
    numbers = ((str(rows) + " ") * rows)
    pyramid = spaces + numbers
    print(pyramid)
    
    
    
#print and inverted pyramid with first row as + and other rows as *
number = int(input())
count = number
for row in range(1, number+1):
    if (count == number):
        print("+ "*count)
        count = count - 1
    spaces = " "*row
    star = "* "*count
    count = count - 1
    print(spaces+star)





#print inveretd * pyramid
number = int(input())
count = number
for rows in range(number):
    spaces = " "*rows
    stars = "* " * count
    count = count - 1
    # spaces = " "*rows
    pyramid = spaces + stars
    print(pyramid)