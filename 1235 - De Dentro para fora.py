l = int(input())

while l > 0:
    l -= 1
    c = input()
    m = int(len(c)/2) - 1
    print(c[m::-1] + c[len(c)-1:m:-1])
