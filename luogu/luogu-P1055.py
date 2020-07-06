id = input()
id_parts = id.split('-')
key = int(id_parts[-1])
#print(key)
right_key = 0
num_key = id.replace('-','')
for i in range(9):
    right_key += int(num_key[i]) * (i+1)
right_key = right_key % 11
if key == right_key:
    print("Right")
else :
    print(id[:-1]+str(right_key))
