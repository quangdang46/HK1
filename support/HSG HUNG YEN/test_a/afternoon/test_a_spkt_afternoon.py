SV = []


def nhap():
    while True:
        n = int(input("Nhap so luong sinh vien: "))
        if n > 0:
            break
        else:
            print("So luong phai duong. Hay nhap lai!")

    for _ in range(n):
        while True:
            masv = input("Nhap vao ma sinh vien: ")

            if masv != "":
                break
            else:
                print("Ma sinh vien phai khac rong!")

        while True:
            tensv = input("Nhap vao ten sinh vien: ")

            if tensv != "":
                break
            else:
                print("Ten sinh vien phai khac rong!")

        while True:
            toan = float(input("Nhap vao diem toan cua sinh vien: "))

            if 0 <= toan <= 10:
                break
            else:
                print("Diem toan phai nam trong doan 0 den 10!")

        while True:
            ngoaingu = float(input("Nhap vao diem ngoai ngu cua sinh vien: "))

            if 0 <= ngoaingu <= 10:
                break
            else:
                print("Diem ngoai ngu phai nam trong doan 0 den 10!")

        SV.append([masv, tensv, toan, ngoaingu])


def tbc(toan, ngoaingu):
    return round((toan + ngoaingu) / 2, 1)


def kt_thi_lai(toan, ngoaingu):
    if toan < 5 or ngoaingu < 5:
        return "Thi lai"
    return "Khong thi lai"


def hien_thi():
    s = "{}\t{}\t{}\t{}"

    print(s.format("Ma sinh vien", "Ten sinh vien", "Diem TB", "Xep loai"))

    for sv in SV:
        tb = tbc(sv[2], sv[3])
        xl = kt_thi_lai(sv[2], sv[3])
        print(s.format(sv[0], sv[1], tb, xl))


def hien_thi_thi_lai(thi_lai="Thi lai"):
    s = "{}\t{}\t{}\t{}"

    print(s.format("Ma sinh vien", "Ten sinh vien", "Diem TB", "Xep loai"))
    dem = 0

    for sv in SV:
        tb = tbc(sv[2], sv[3])
        xl = kt_thi_lai(sv[2], sv[3])
        if xl == thi_lai:
            dem += 1
            print(s.format(sv[0], sv[1], tb, xl))

    if dem > 0:
        print("Co {} sinh vien phai thi lai.".format(dem))


def ghi_file():
    f = open("SinhVien.txt", 'w')

    L = []
    s = "{}\t{}\t{}\t{}"

    for sv in SV:
        tb = tbc(sv[2], sv[3])
        xl = kt_thi_lai(sv[2], sv[3])
        L.append(s.format(sv[0], sv[1], tb, xl))

    f.write('\n'.join(L))
    f.close()


nhap()
hien_thi()
hien_thi_thi_lai()
ghi_file()
