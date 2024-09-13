def retrieve_items_from_dungeon(l):
    retrieved_items = 0
    for i in range(len(l)):
        if l[i] == 1:
            retrieved_items += 1
            l = [1 - state for state in l] 
    return retrieved_items

N = int(input("Enter the number of dungeons: "))
l = list(map(int, input("Enter the state of the dungeons (space-separated): ").split()))

print(retrieve_items_from_dungeon(l))