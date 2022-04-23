def req3(w, f1, f2, f3, a):  # KHONG XOA
    #Tinh toan
    k1 = w.subs(x, f1)
    k2 = k1.subs(y, f2)
    k3 = k2.subs(z, f3)
    try:##(Ham xu ly cac loi cua he thong)
        result3=limit((k3-k3.subs(t,a))/(t-a),t,a)
        #Xu ly so ao, truong hop khong tinh duoc hoac khong ton tai
        if result3 == nan or result3 == zoo or not result3.is_real:
            return None
        else:
            return float(result3)
    except:
        return None