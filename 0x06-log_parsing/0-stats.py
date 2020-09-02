#!/usr/bin/python3
"""Parsing the stdin and calculating"""
import sys

status_presets = ["200", "301", "400", "401", "403", "404", "405", "500"]
statuscodes = [0, 0, 0, 0, 0, 0, 0, 0]
i = 0
k = 0
l = 0
try:
    for line in sys.stdin:
        splitline = line.split()
        if len(splitline) > 2:
            if splitline[-2] in status_presets:
                l = status_presets.index(splitline[-2])
                statuscodes[l] = statuscodes[l] + 1
            i += 1
            k = k + int(splitline[-1])
        if i == 10:
            i = 0
            print("File size: {}".format(k))
            for l in range(8):
                if statuscodes[l] != 0:
                    print('{}: {}'.format(status_presets[l], statuscodes[l]))
except KeyboardInterrupt:
    pass
finally:
    print("File size: {}".format(k))
    for l in range(8):
        if statuscodes[l] != 0:
            print("{}: {}".format(status_presets[l], statuscodes[l]))
