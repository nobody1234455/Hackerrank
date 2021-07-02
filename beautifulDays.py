
def beautifulDays(i, j, k):
    # Write your code here
    count = 0
    for i in range(i, j + 1):
        inverse = str(i)
        inverse = inverse[::-1]
        int_inverse = int(inverse)
        if abs(int_inverse - i) % k == 0:
            count += 1
    return count


print(beautifulDays(20, 23, 6))
