import array

# n = 3
# count = 0
# for i in range(0, n):  # 0 => 2
#     pattern = n
#     j = 0
#     while j < n*2 - 1:  # 0 => 3*2 - 1
#         if j < n:
#             if count >= 1:
#                 for k in range(0, count+1):  # 0 =>
#                     print(pattern - k, end=' ')
#                 pattern = pattern - k
#             else:
#                 print(pattern, end=' ')
#         else:
#             if count >= 1:
#                 for k in range(count, 0, -1):  # 0 =>
#                     print(pattern - k, end=' ')
#                 pattern = pattern - k
#             else:
#                 print(pattern, end=' ')
#         j += 1
#     count += 1
#     print("\n")

n = 3
start = 0
end = n*2 - 1
arr = [[]*n](*n)
count = 0
pattern = n
while count < n:
    for i in range(0, n):
        for j in range(0, n):
            if (i == end or j == end or i == start or j == start):
                arr[i][j] = pattern
    count += 1

for r in arr:
    print(r)
