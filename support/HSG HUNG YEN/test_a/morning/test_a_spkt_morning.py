GV = []


def nhap():
    while True:
        n = int(input("Nhap so luong giao vien: "))
        if n > 0:
            break
    else:
        print("So luong phai lon hon 0 hay nhap lai!")

    for _ in range(n):
        while True:
            ma_gv = input("Nhap vao ma giao vien: ")
            if ma_gv != "":
                break
            else:
                print("ma giao vien phai khac rong")

        while True:
            ten_gv = input("Nhap vao ten giao vien: ")
            if ten_gv != "":
                break
            else:
                print("ten giao vien phai khac rong")

        while True:
            mh = int(input("Nhap so luong mon hoc: "))
            if mh > 0:
                break
            else:
                print("So luong mon hoc lon hon 0 hay nhap lai!")

        MH = []

        for _ in range(mh):
            while True:
                ten_mh = input("Nhap vao ten ten mon hoc: ")
                if ten_mh != "":
                    break
                else:
                    print("ten mon hoc phai khac rong")

            while True:
                so_tc_lt = int(input("Nhap vao so tin chi ly thuyet: "))
                if so_tc_lt > 0:
                    break
                else:
                    print("so tin chi ly thuyet phai duong")

            while True:
                so_tc_th = int(input("Nhap vao so tin chi thuc hanh: "))
                if so_tc_th > 0:
                    break
                else:
                    print("so tin chi thuc hanh phai duong")

            MH.append([ten_mh, so_tc_lt, so_tc_th])

        GV.append([ma_gv, ten_gv, MH])


def tong_so_tin_chi(tc_lt, tc_th):
    return tc_lt + tc_th


def gio_chuan(tc_lt, tc_th):
    return tc_lt * 15 + tc_th * 60 * 0.6


def hien_thi():
    for gv in GV:
        print("{}\t{}".format(gv[0], gv[1]))
        print("{}\t{}\t{}\t{}".format("Mon hoc", "So TC ly thuyet", "So TC thuc hanh", "Gio chuan"))
        for mh in gv[2]:
            gc = gio_chuan(mh[1], mh[2])
            print("{}\t{}\t{}\t{}".format(mh[0], mh[1], mh[2], gc))


def ghi_file():
    f = open("giao_vien.txt", 'w')
    output = ""

    for gv in GV:
        output += "{}\t{}\n".format(gv[0], gv[1])
        for mh in gv[2]:
            gc = gio_chuan(mh[1], mh[2])
            output += "{}\t{}\t{}\t{}\n".format(mh[0], mh[1], mh[2], gc)

    f.write(output)
    f.close()


nhap()
hien_thi()

tong_gc = 0

for gv in GV:
    for mh in gv[2]:
        gc = gio_chuan(mh[1], mh[2])
        tong_gc += gc
print("Tong so gio chuan:", tong_gc)

ghi_file()
