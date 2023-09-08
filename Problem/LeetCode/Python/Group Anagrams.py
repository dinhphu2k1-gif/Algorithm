from collections import defaultdict
strs = ["eat","tea","tan","ate","nat","bat"]

arr = defaultdict(list)
for str in strs:
    c = sorted(str)
    c = "".join(c)
    arr[c].append(str)

print(arr.values())