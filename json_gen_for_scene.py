#-*- coding: utf-8 -*-
import json
import codecs
import sys

file = codecs.open(sys.argv[1], "r", "utf-8")

dict = []

title = ""

def utfstr(str):
    return json.dumps(str, ensure_ascii=False).encode('utf8')

while 1:
    line = file.readline()
    if not line:
	break
    line = line.replace("\n","")
    if "---" in line:
        title = line.replace("---", "")
    else:
        sub_title = line.replace("/ ", "\n")
        it = {"title":title, "sub_title":sub_title}
        dict.append(it)

print utfstr(dict)

