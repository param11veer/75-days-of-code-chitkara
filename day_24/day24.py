#**********************************************************#
n = int(input())
count = 0
for i in range(1, n+1):
    for j in range(1, n+1):
        for k in range(1, n+1):
            if (i**2 + j**2 == k**2) and (i<j<k):
                count += 1
print(count)
#**********************************************************#

#**********************************************************#
#Wap to print an inverted right angled triangle of n rows 
#using numbers starting from K+S-1 and ending with s
#Where k = factorial of n
s = int(input())
n = int(input())
sum = 0
for i in range(1, n+1):
    sum = sum + i
k = sum
limit = n 
start_num = ((k+s)-1)
for rows in range(1, n+1):
    new = ""
    for columns in range(1, limit+1):
        new = new + str(start_num) + " "
        start_num -= 1
    print(new)
    limit -= 1 
#**********************************************************#

#**********************************************************#
#Wap to print an inverted pyramid of N rows using numbers 
#staring from 1.
n = int(input())
limit = n
count = 0
for i in range(1, n+1):
    num = ""
    for j in range(1, limit+1):
        num = num + str(j) + " "
        spaces = " "*count
    print(spaces + num)
    limit -= 1
    count += 1 
#**********************************************************#

#**********************************************************#
#Wap to print a diamond of 2*N-1 rows using numbers from 1
n = int(input())
limit = 1
count = n-1
counting = n-1
count_1 = 1
for i in range(1, n+1):
    num = ""
    for j in range(1, limit+1):
        num = num + str(j) + " "
        spaces = " "*count
    print(spaces + num)
    limit += 1
    count -= 1 
for i in range(1, n):
    num = ""
    for j in range(1, counting+1):
        num = num + str(j) + " "
        spaces = " "*count_1
    print(spaces + num)
    counting -= 1
    count_1 += 1 
#**********************************************************#

#**********************************************************#
#Wap to print all the number from 1 to n that are divisible 
#by any of 2,3,4,5,6,7,8,9,10
n = int(input())
count = 0
for i in range(1, n+1):
    if i%2!=0 and i%3!=0 and i%4!=0 and i%5!=0 and i%6!=0 and i%7!=0 and i%8!=0 and i%9!=0 and i%10!=0 :
        count += 1
print(count)
#**********************************************************#

#**********************************************************#
#Wap to print the composite numbers in the range of M to N
m = int(input())
n = int(input())
# factors = 0
for i in range(m, n+1):
    factors = 0
    for j in range(1, i+1):
        if (i%j==0) :
            factors += 1 
    if factors>2 :
        print(i)
#**********************************************************#

#**********************************************************#
#Wap to print all the Armstrong Numbers starting from m to N
m = int(input())
n = int(input())
new_m = str(m)
length = len(new_m)
count = 0
for i in range(m, n+1):
    sum = 0
    new_i = str(i)
    l = len(new_i)
    for j in new_i:
        sum = sum + int(j)**l
    if sum == i :
        count += 1
        print(i, end=" ")
if count==0:
    print("-1")
#**********************************************************#

#**********************************************************#
n=int(input())
k=int(input())
num=k*(k+1)//2
limit = (n-1)+num
for i in range(1,k+1):
    # temp=num-i
    for j in range(1,i+1):
        print(limit, end= " ")
        limit -= 1 
    print()
#**********************************************************#

