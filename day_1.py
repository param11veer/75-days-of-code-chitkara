


# Code for reversing the string

N = input()
a = len(N)
for i in N:
    a = a-1
    print(N[a])


# Code to print odd number from N to M

M = int(input())
N = int(input())
count = N
b = ""
for i in range(M, N+1):
    if (count%2==0):
        count = count - 1
    elif(count%2!=0):
        b = b + str(count) + " "
        count = count - 1
print(b)


# Code to print the greatest number among the given N inputs

N = int(input())
b = 0
for i in range(1, N+1):
    a = int(input())
    if a:
        if (a>b):
            b = a
print(b)


# Code to find the numbers divisible by 6 from range M to N and if the count of number divisible by 6 is 0 then print No Number Found

M = int(input())
N = int(input())
count = ""
a = 0
counter = 0
for i in range(M, N + 1):
    if i % 6 == 0:
        # counter = 0
        counter = counter + 1
        count = count + str(i) + " "
    if i == N:
        if counter == 0:
            print("No Numbers Found")
        elif counter > 0:
            print(count)


# Code to print a if a string has more than two vowels or not

S = input()
count = 0
lenght = len(S)
counter = 0
for i in S:
    if S:
        counter = counter + 1
        if i == "a" or i == "e" or i == "i" or i == "o" or i == "u":
            count = count + 1
    if counter >= (lenght):
        if count > 2:
            print("String has more than two vowels")
        elif count <= 2:
            print("String doesn't have more than two vowels")


# Code to print the smallest among N numbers


number_of_inputs = int(input())
first_input = int(input())
smallest_number = first_input
for i in range(number_of_inputs - 1):
    number = int(input())
    if number < smallest_number:
        smallest_number = number
print(smallest_number)


#numbers divisible by 9 in a given range

M = int(input())
N = int(input())
count = 0
b = ""
for i in range(M, N+1):
    if(i%9==0):
        count = count + 1
        b = b + str(i) + " "
    if(i==N):
        if(count>0):
            print(b)
        if(count == 0):
            print("No Numbers found")