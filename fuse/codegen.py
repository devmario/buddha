#-*- coding: utf-8 -*-

import glob

# 절하기 resource 추가
print "\n"
kid_list = glob.glob("res/img/kid*")
index = 0
for i in kid_list:
    print "<FileImageSource ux:Key=\"kid" + str(index) + "\" File=\"" + i + "\"/>"
    index = index + 1    
print "\n"

#사운드 추가
snd_list = glob.glob("res/snd/*")
for i in snd_list:
    print "bundleDict.Add(\""+i+"\", import global::Uno.BundleFile(\""+i+"\"));"
print "\n"

# 108 image source
print "\n"
h_list = glob.glob("res/img/h/*")
index = 0
for i in h_list:
    print "<FileImageSource ux:Key=\"h" + str(index) + "\" File=\"" + i + "\"/>"
    index = index + 1    
print "\n"


    
# 절하기 설명
print "\n"
desc = [
    "마음을 차분하게 가라앉히고 두 손을 가슴에 모으며 바르게 섭니다. 이것을 합장이라 합니다.",
    "합장을 한 채 인사를 하듯 천천히 허리를 숙였다 세웁니다. 이것을 반배라하는데 절을시작할때와 끝날 때에는 항상 반배를 합니다.",
    "두손을 가슴에 모은 채 허리를 살짝 굽히면서 무릎을 꿇으며 앉습니다. 자세가 흐트러지면 넘어질 수 있으니 천천히 중심을 잡으며 앉습니다.",
    "엉덩이와 발 뒤꿈치가 맞닿을 때쯤 상체를 앞으로 숙이면서 오른손을 바닥에 내려놓습니다. 발은 자연스럽게 오른발이 왼발 위로 올라가게 합니다. 오른손과 나란히 왼손을 내려놓으며 이마가 바닥에 닿을 정도로 숙입니다. 이처럼 이마, 양쪽 팔꿈치와 무릎이 모두 바닥에 닿은 것을 오체투지라 합니다.",
    "양쪽 팔꿈치를 바닥에 댄 채 두 손바닥이 하늘을 향하도록 뒤집으면서 양쪽 귀옆으로 살짝 들어올립니다. 이것은 나 자신을 낮추고 세상 모든 존재를 지극한 마음으로 정성을 다해 존중하겠다는 다짐입니다.",
    "다시 두 손을 바닥을 향해 뒤집어 머리 옆으로 가지런히 내려놓으며 오체투지 자세를 취합니다.",
    "고개와 허리를 곧은 자세로 들면서 왼손과 오른손을 차례로 가슴 쪽으로 모읍니다. 이렇게 하면 합장하며 앉은 자세가 됩니다.",
    "포게 놓았던 양 발을 가지런히 풀면서 엉덩이를 살짝 들어올리며 일어납니다. 절을 시작할 때의 자세처럼 양쪽발은 가지런히 모으고 두 손은 가슴쪽으로 모아 바르게 섭니다. 이 자세에서 무릎을 굽히며 다시 절하는 동작을 반복합니다. 108번째 절을 마쳤을 때엔 반 배를 하며 절 수행을 마무리합니다."]
jsObservable = ""
jsModule = ""
jsFunction = ""
index = 0
for i in desc:
    textName = "animDesc" + str(index)
    varName = "animText" + str(index)
    text = i
    print "<Text ux:Name=\""+textName+"\" TextWrapping=\"Wrap\" Alignment=\"Center\" FontSize=\"26\" TextColor=\"#3d3d3d\" Value=\""+text+"\" Visibility=\"Hidden\" />"
    print "<WhileTrue Value=\"{"+varName+"}\">"
    print "\t<Change "+textName+".Visibility=\"Visible\"/>"
    print "</WhileTrue>"
    jsObservable = jsObservable + "\n" + "var " + varName + " = Observable(false);"
    jsFunction = jsFunction + "\n" + varName + ".value = index == " + str(index) + ";"
    jsModule = jsModule + "\n" + varName + ": " + varName + "," 
    index = index + 1
print jsObservable
print jsFunction
print jsModule
print "\n"
