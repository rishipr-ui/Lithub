inp_list=[1,5 ,2 ,8]
b=int(input())
n=len(inp_list)
for i in range(n):
    for j in range(0, n-i-1):
        if inp_list[j] > inp_list[j+1]:
            temp = inp_list[j]
            inp_list[j] = inp_list[j+1]
            inp_list[j+1] = temp
print(inp_list)
index = -1
for i in range(n):
    if inp_list[i] == b:
        index=i
print(index)