# ==================================================================================#
# Wap to print n number of seconds into Days, hours, minutes, seconds
def convert_seconds(seconds):
    # Calculate days, hours, minutes, and seconds
    days = seconds // (60 * 60 * 24)
    seconds %= 60 * 60 * 24
    hours = seconds // (60 * 60)
    seconds %= 60 * 60
    minutes = seconds // 60
    seconds %= 60

    # Print only the non-zero values
    time = ""
    if days > 0:
        time += f"{days} days "
    if hours > 0:
        time += f"{hours} hours "
    if minutes > 0:
        time += f"{minutes} minutes "
    if seconds > 0:
        time += f"{seconds} seconds"

    print(time.strip())  # Remove extra whitespace from the output


# Test the function
seconds = int(input("Enter the number of seconds: "))
convert_seconds(seconds)
# ==================================================================================#


# ==================================================================================#
# Wap the max. of 4 numbers
def find_greatest(num1, num2, num3, num4):
    greatest = max(num1, num2, num3, num4)
    return greatest


if _name_ == "_main_":
    try:
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        num3 = float(input("Enter the third number: "))
        num4 = float(input("Enter the fourth number: "))

        greatest_value = find_greatest(num1, num2, num3, num4)
        print("The greatest value among the four numbers is:", greatest_value)

    except ValueError:
        print("Invalid input. Please enter valid numbers.")
# ==================================================================================#

# ==================================================================================#
# Easy way of writing the above code
num1 = int(input())
num2 = int(input())
num3 = int(input())
num4 = int(input())

greatest_number = max(num1, num2, num3, num4)
print(greatest_number)
# ==================================================================================#

# ==================================================================================#
#Wap to print the factorial of a number
number = int(input())
factorial = 1
for i in range (1, number+1):
    factorial *=i
print(factorial)
# ==================================================================================#

# ==================================================================================#
#Wap to print an right angle hollow triangle made up of / and |
n = int(input())
count = n-1
forward_slash = "/"
pipe = "|"
counting = 0
for i in range(1, n+1):
    if i == n :
        row = forward_slash + ("_"(n-1) + pipe)
        print(row)
    else :
        left_spaces = " "*count
        middle_spaces = " "*counting
        counting = counting + 1
        count = count - 1
        row = left_spaces + forward_slash + middle_spaces + pipe
        print(row)
# ==================================================================================#


