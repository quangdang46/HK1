DS_KHACH_THUE = []


def nhap():
    while True:
        n = int(input("Nhap so luong khach thue: "))
        if n > 0:
            break
        else:
            print("So luong phai lon hon 0 hay nhap lai!")

    for _ in range(n):
        while True:
            ten_kt = input("Nhap vao ten khach thue: ")
            if ten_kt != "":
                break
            else:
                print("ten khach thue phai khac rong")

        while True:
            so_ngay_thue = int(input("Nhap vao so ngay thue: "))

            if so_ngay_thue > 0:
                break
            else:
                print("so ngay thue phai lon hon 0")

        while True:
            loai_phong = input("Nhap vao loai phong: ")

            if loai_phong == 'A' or loai_phong == 'B' or loai_phong == 'C':
                break
            else:
                print("loai phong chi co the nhan A, B, C")

        DS_KHACH_THUE.append([ten_kt, so_ngay_thue, loai_phong])


def tinh_gia_khuyen_mai(so_ngay_thue, loai_phong):
    gia_thue = 0
    if loai_phong == 'A':
        gia_thue = 200000

    if loai_phong == 'B':
        gia_thue = 150000

    if loai_phong == 'C':
        gia_thue = 130000

    if so_ngay_thue > 5:
        gia_thue *= 0.9

    return gia_thue


def tinh_tien_thue_phong(so_ngay_thue, loai_phong):
    return so_ngay_thue * tinh_gia_khuyen_mai(so_ngay_thue, loai_phong)


def hien_thi():
    print("{}\t{}\t{}\t{}".format("Ten khach hang", "So ngay thue", "Loai phong", "Tien thue"))
    for khach in DS_KHACH_THUE:
        tien_thue = tinh_tien_thue_phong(khach[1], khach[2])
        print("{}\t{}\t{}\t{}".format(khach[0], khach[1], khach[2], tien_thue))


def tong_tien_thue():
    tong_tien = 0

    for khach in DS_KHACH_THUE:
        tien_thue = tinh_tien_thue_phong(khach[1], khach[2])
        tong_tien += tien_thue

    return tong_tien


def ghi_file():
    f = open("khach_thue.txt", 'w')
    output = ""

    for khach in DS_KHACH_THUE:
        tien_thue = tinh_tien_thue_phong(khach[1], khach[2])
        output += "{}\t{}\t{}\t{}\n".format(khach[0], khach[1], khach[2], tien_thue)

    f.write(output)
    f.close()


nhap()
hien_thi()
print("Tong so tien thue cho nha nghi:", tong_tien_thue())
ghi_file()
