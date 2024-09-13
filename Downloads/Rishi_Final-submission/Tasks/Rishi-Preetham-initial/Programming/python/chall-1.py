a=input()
b=len(a)
reverse=""
string_count =a
for i in range(b):
    count =0
    for j in range(b):
        if a[i] == a[j]:
            count+=1
    print (a[i]+" : " +str(count))
for i in range(1,b+1):
    reverse += a[b-i]
print("Reversed String :- " + str(reverse))
