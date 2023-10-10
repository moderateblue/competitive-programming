def create_phone_number(n):
    num = ""
    num += "("
    for i in range(3):
        num += str(n[i])
    num += ") "
    for i in range(3, 6):
        num += str(n[i])
    num += "-"
    for i in range(6, 10):
        num += str(n[i])
    print(num)
    return num
