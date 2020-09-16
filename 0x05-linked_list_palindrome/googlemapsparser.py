#!/usr/bin/python3
from bs4 import BeautifulSoup
import sys
import requests
import re
from ast import literal_eval
url = "https://www.google.com/maps?cid={}".format(sys.argv[1])
resp = requests.get(url)
soup = BeautifulSoup(resp.text, features="html.parser")
name = len(soup.find_all("span"))
print(name)
