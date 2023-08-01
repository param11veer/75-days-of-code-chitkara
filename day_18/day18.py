# ************************************************************************************#
# Wap to print only the alphabets in the given string
word = input()
new_word = ""
# word = word.strip()
for i in word:
    if i.isalpha():
        new_word = new_word + i
print(new_word)
# ************************************************************************************#

# ************************************************************************************#
# Wap to print if all the characters in a string are digits
word = input()
all_digit = word.isdigit()
print(all_digit)
# ************************************************************************************#

# ************************************************************************************#
# Wap that prints the modified string after removing the leading and trailing spaces
string = input()
string = string.strip()
print(string)
# ************************************************************************************#

# ************************************************************************************#
# Wap to check if all the characters in the string are in uppercase
string = input()
string = string.isupper()
print(string)
# ************************************************************************************#

# ************************************************************************************#
# Wap to print dd-mm-yy into dd/mm/yy
string = input()
string = string.replace("-", "/")
print(string)
# ************************************************************************************#

# ************************************************************************************#
# Wap to print the given string after converting all the characters to lowercase
# and uppercase
string = input()
print(string.lower())
print(string.upper())
# ************************************************************************************#

# ************************************************************************************#
# Wap to print all the uppercase alphabet in the given string
string = input()
new_string = ""
for i in string:
    if i.isupper():
        new_string = new_string + i
print(new_string)
# ************************************************************************************#

# ************************************************************************************#
# Wap to check if the given string is a secured URL
string = input()
string = string.startswith("https://")
print(string)
# ************************************************************************************#

# ************************************************************************************#
# Wap to check of the given file is a python file
string = input()
string = string.endswith(".py")
print(string)
# ************************************************************************************#

# ************************************************************************************#
# Wap to check if a given string is a palindrome or not
string = input()
word = ""
length = len(string)
count = length
first_check = string[0]
second_check = string[-1]
if first_check == second_check:
    for i in string:
        count = count - 1
        word = word + string[count]
    if word == string:
        print("True")
    else:
        print("False")
else:
    print("False")

# ************************************************************************************#

# ************************************************************************************#
# Wap to find whether the given string is palindrome or not considering uppercase and
# lowercase character as equal
string = input()
new_string = string.lower()
length = len(string)
count = length
word = ""
first_word = new_string[0]
last_word = new_string[-1]
first_word = first_word.lower()
last_word = last_word.lower()
if first_word == last_word:
    for i in new_string:
        count = count - 1
        word = word + new_string[count]
    if word == new_string:
        print("True")
    else:
        print("False")
else:
    print("False")
# ************************************************************************************#

# ************************************************************************************#
# Wap to check if the given string contains at least one digit
string = input()
word = ""
count = 0
string_1 = string.isalnum()
for i in string:
    if i.isdigit():
        count = count + 1
if count >= 1:
    print("Valid Password")
else:
    print("Invalid Password")
# ************************************************************************************#

# ************************************************************************************#
# Wap to modify a string as: - Add a space before each uppercase character excluding
# the first uppercase character.
string = input()

length = len(string)
result_string = string[0]

for each_number in range(1, length):
    each_character = string[each_number]
    upper_case = each_character.upper()

    if each_character == upper_case:
        result_string = result_string + " " + each_character
    else:
        result_string = result_string + each_character

print(result_string)
# ************************************************************************************#

# ************************************************************************************#
# Wap to modify a string as: - Add a hyphen (-) before each upper-case character
# convert upper-case character into lower-case character.
string = input()
length = len(string)
result_string = string[0]
for each_number in range(1, length):
    each_character = string[each_number]
    upper_case = each_character.upper()
    if each_character == upper_case:
        result_string = result_string + "-" + each_character.lower()
    else:
        result_string = result_string + each_character
print(result_string)
# ************************************************************************************#

# ************************************************************************************#
# Wap to check if a string contains a uppercase character or not.
string = input()
count = 0
for i in string:
    if i.isupper():
        count = count + 1
if count > 0:
    print("Valid Password")
else:
    print("Invalid Password")
# ************************************************************************************#

# ************************************************************************************#
#Wap check if a string got atleast one uppercase one lowercase and one digit
string = input()
count_uppercase = 0
count_lowercase = 0
count_digit = 0
for i in string:
    if i.isupper():
        count_uppercase = count_uppercase + 1
    if i.islower():
        count_lowercase = count_lowercase + 1
    if i.isdigit():
        count_digit = count_digit + 1
if count_uppercase > 0 and count_lowercase > 0 and count_digit > 0:
    print("Valid Password")
else:
    print("Invalid Password")
# ************************************************************************************#

# ************************************************************************************#
#Wap to convert all the uppercase letters to lowercase letters and vice versa
string = input()
word = ""
for i in string :
    if i.isupper():
        word = word + i.lower()
    if i.islower():
        word = word + i.upper()
    if i == " ":
        word = word + " "
print(word)
# ************************************************************************************#

