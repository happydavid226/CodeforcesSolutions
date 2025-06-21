def find_y(x):
    y = x & -x
    if(y == x):
        return -1
    return y

t = int(input())
for i in range (t):
    x = int(input())
    print(find_y(x))
    print("\n")
