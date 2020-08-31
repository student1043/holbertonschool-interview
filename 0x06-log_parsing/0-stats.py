#!/usr/bin/python3
"""Parsing the stdin and calculating"""
import sys
data = sys.stdin.readlines()
statuscodes = []
presets = [200, 301, 400, 401, 403, 404, 405, 500]
i = 0
l = 0
k = 0
sumof = 0
for i in range(len(data)):
    for line in data:
        sumof += int(line.split('1.1"')[1].split(" ")[2])
        statuscodes.append(int(line.split('1.1"')[1].split(" ")[1]))
        k += 1
    try:
        if k == 10:
            print("File size:", sumof)
            for l in range(len(presets)):
                if presets[l] in statuscodes:
                    print("{}: {}".format(presets[l], statuscodes.count(presets[l])))
            k = 0
            statuscodes.clear()
    except (KeyboardInterrupt, SystemExit):
        pass
