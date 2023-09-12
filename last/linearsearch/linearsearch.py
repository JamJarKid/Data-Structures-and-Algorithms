def linearsearch(needle: int, haystack: list):
    for i in range(len(haystack)):
        if haystack[i] == needle:
            return True

    
    return False

if __name__ == "__main__":
    assert linearsearch(needle=4, haystack=[1,3,4]) == True
    assert linearsearch(needle=6, haystack=[1,3,4]) == False
    
