import re

print("lab5_soru1_sorua_cozum1 :", end=" ")
def lab5_soru1_sorua_cozum1(a):
    l = ""
    res = []
    res1 = []
    for i in a:
        if i == "_":
            res1.append(i)
        elif i.isupper():
            res.append(i.lower())
        else:
            res.append(i)
    print(l.join(res))
lab5_soru1_sorua_cozum1('deneme_YaziMi')
print("")

print("lab5_soru1_sorua_cozum2 :", end=" ")
def lab5_soru1_sorua_cozum2(b):
    a = ""
    res = [i.lower() for i in b if i != "_"]
    print(a.join(res))
lab5_soru1_sorua_cozum2('deneme_YaziMi')
print("")

print("lab5_soru1_sorub_cozum1 :", end=" ")
def lab5_soru2_sorub_cozum1(c):
    dic = {}
    for i in list(c):
        if i%2==0:
            dic[i] = "cift"
        else:
            dic[i] = "tek"
    print(dic)

lab5_soru2_sorub_cozum1([2,5,3,6,4])
print("")

print("lab5_soru1_sorub_cozum2 :", end=" ")

def lab5_soru2_sorub_cozum2(d):
    tc = {i: "cift" if i%2==0 else "tek" for i in list(d)}
    print(tc)
lab5_soru2_sorub_cozum2([2,35,5])
print("")

print("lab5_soru2_cozum :")
def to_snake(e):

    REG1 = r'([A-Z]+)([a-z]+)([A-Z]+)([a-z]+)'
    REG2 = r'([a-z]+)([A-Z]+)([a-z]+)([A-Z]+)([a-z]+)'
    REG3 = r'([a-z]+)([A-Z]+)([a-zA-Z]+)(\d+)'
    REG4 = r'([a-z]+)(\d+)([A-Z]+)([a-z]+)'
    REG5 = r'([a-z]+)([A-Z]+)([a-z]+)(\d+)'
    REG6 = r'([A-Z]+)([A-Z]+)([A-Z]+)([a-z]+)'
    for test in list(e):
        print("Test degiskeni = {}".format(test))

        match1 = re.search(REG2, test)
        match = re.search(REG1, test)
        match2 = re.search(REG3, test)
        match3 = re.search(REG4, test)
        match4 = re.search(REG5, test)
        match5 = re.search(REG6, test)

        if match1:
            print(match1.group(1).lower() + "_{}".format(match1.group(2)).lower() + match1.group(3) + "_{}".format(match1.group(4)).lower() + match1.group(5))
            print("")
        elif match:
            print(
                match.group(1).lower() + match.group(2).lower() + "_{}".format(match.group(3)).lower() + match.group(4))
            print("")
        elif match2:
            print(match2.group(1).lower() + match2.group(2).lower() + match2.group(3).lower() + "_{}".format(
                match2.group(4)))
            print("")
        elif match3:
            print(match3.group(1) + "_{}".format(match3.group(2)) + "_" + match3.group(3).lower() + match3.group(4))
            print("")
        elif match4:
            print(match4.group(1) + "_{}".format(match4.group(2).lower()) + match4.group(3) + "_{}".format(
                match4.group(4)))
            print("")
        elif match5:
            print(match5.group(1).lower() + match5.group(2).lower() + "_" + match5.group(3).lower() + match5.group(4))
            print("")

to_snake(["MukemmelDegisken", "buNasilDegisken", "degisken2Ismi", "degiskenIsmi2","yilan_degisken", "yilan_2degisken", "yilan_degisken3", "SonucDegiskeni3","HTTPCevabi"])
























