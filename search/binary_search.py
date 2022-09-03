

def binary_search(array, target):
    min = 0
    max = len(array) - 1
    while min <= max:
        mid = (min + max) // 2
        if array[mid] == target:
            return mid
        elif target < array[mid]:
            max = mid - 1
        elif target > array[mid]:
            min = mid + 1
    return None

array = [1, 2, 13, 45, 470, 560, 561, 562]
print(binary_search(array, 562))
