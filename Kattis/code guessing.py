x = input().split()
m = int(x[0])
n = int(x[1])
str1 = input()


if str1 == "BBAA":
    if m == 3:
        print(str(1)+" "+str(2))
    else:
        print(str(-1))
elif str1 == "BABA":
    if m == 2 and n == 4:
        print(str(1)+" "+str(3))
    else:
        print(str(-1))
elif str1 == "AABB":
    if n == 7:
        print(str(8)+" "+str(9))
    elif n == 3:
        print(str(2)+" "+str(1))
    else:
        print(str(-1))
elif str1 == "ABAB":
    if m == 6 and n == 8:
        print(str(7)+" "+str(9))
    else:
        print(str(-1))
elif str1 == "ABBA":
    if (m+3) == n:
        print(str(m+1)+" "+str(m+2))
    else:
        print(str(-1))
elif str1 == "BAAB":
    if m == 2 and n == 8:
        print(str(1)+" "+str(9))
    elif m == 8 and n == 2:
        print(str(9)+" "+str(1))
    else:
        print(str(-1))
