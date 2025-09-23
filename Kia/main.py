def BinarySearch(lista: list, left: int, right: int, k: int) -> int:
    while left <= right:
        mid = (left + right) // 2
        if lista[mid] == k:
            return mid
        elif lista[mid] > k:
            right = mid - 1
        else:
            left = mid + 1
    return left * -1 - 1
