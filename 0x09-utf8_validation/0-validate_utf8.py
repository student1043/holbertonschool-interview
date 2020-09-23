#!/usr/bin/python3
"""
UTF-8 Validation Code
"""
def validUTF8(data):
    """
    ValidUTF8 Function
    """
    k = 0
    while k < len(data):
        lead = data[k]
        if 0 <= lead < 128:
            k += 1
        elif 128 <= lead < 192:
            return False
        elif 192 <= lead < 224:
            if k+1 < len(data) and 128 <= data[k+1] < 192:
                k += 2
            else:
                return False
        elif 224 <= lead < 240:
            if k+2 < len(data) and 128 <= data[k+1] < 192 and 128 <= data[k+2] < 192:
                k += 3
            else:
                return False
        elif 240 <= lead < 248:
            if k+3 < len(data) and 128 <= data[k+1] < 192 and 128 <= data[k+2] < 192 and 128 <= data[k+3] < 192:
                k += 4
            else:
                return False
        elif 248 <= lead <= 255:
            return False
        else:
            return True
    return True
