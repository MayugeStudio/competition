S = input()
ip = 0
length = len(S)
pair = []
while ip < length:
    if S[ip] == '#':
        pair.append(ip+1)

        if len(pair) == 2:
            print(str(pair[0]) + "," + str(pair[1]))
            pair.clear()
    ip += 1

