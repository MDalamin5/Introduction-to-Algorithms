def IsPalindrom(palStr):
    if palStr == '' or len(palStr) == 1:
        return True
    else:
        return IsPalindrom(palStr[1:-1]) and palStr[0] == palStr[len(palStr)-1]
    
print(IsPalindrom('level'))