from typing import TypeVar, Iterable
import math

T = TypeVar('T')

def binary_search(arr: Iterable[T], target: T, length: int) -> int:
    low = 0
    high = length - 1

    while low <= high:
        mid = math.floor(low + (high-low)/2)
        
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return -1

if __name__ == "__main__":
   assert(binary_search([0,1,2,3,4,5,6,7], 7, 8) == 7) 
   assert(binary_search([0,1,2,3,4,5,6,7], -1, 8) == -1) 



