#Rendi Aigo Brandon#
#23343082#

from collections import deque, defaultdict

def bfs(graf, sumber, tujuan, jalur):
    """Fungsi untuk mencari jalur augmentasi menggunakan BFS"""
    dikunjungi = set()
    antrian = deque([sumber])
    jalur[sumber] = None

    while antrian:
        simpul = antrian.popleft()
        dikunjungi.add(simpul)

        for tetangga, kapasitas in graf[simpul].items():
            if tetangga not in dikunjungi and kapasitas > 0:
                jalur[tetangga] = simpul
                if tetangga == tujuan:
                    return True
                antrian.append(tetangga)
    return False

def ford_fulkerson(graf, sumber, tujuan):
    """Fungsi utama untuk menghitung aliran maksimum menggunakan algoritma Ford-Fulkerson"""
    aliran_maksimum = 0
    graf_residual = {u: {v: kapasitas for v, kapasitas in tetangga.items()} for u, tetangga in graf.items()}

    jalur = {}
    while bfs(graf_residual, sumber, tujuan, jalur):
        aliran_jalur = float('Inf')
        simpul = tujuan
        while simpul != sumber:
            aliran_jalur = min(aliran_jalur, graf_residual[jalur[simpul]][simpul])
            simpul = jalur[simpul]

        simpul = tujuan
        while simpul != sumber:
            u = jalur[simpul]
            graf_residual[u][simpul] -= aliran_jalur
            if simpul not in graf_residual:
                graf_residual[simpul] = {}
            if u not in graf_residual[simpul]:
                graf_residual[simpul][u] = 0
            graf_residual[simpul][u] += aliran_jalur
            simpul = jalur[simpul]

        aliran_maksimum += aliran_jalur

    return aliran_maksimum

def input_graf():
    """Fungsi untuk menerima input graf dari pengguna"""
    graf = defaultdict(dict)
    print("Masukkan sisi-sisi graf dalam format 'simpul1 simpul2 kapasitas'. Ketik 'selesai' untuk mengakhiri input.")
    while True:
        data = input("Masukkan sisi (atau 'selesai' untuk selesai): ")
        if data.lower() == 'selesai':
            break
        try:
            simpul1, simpul2, kapasitas = data.split()
            kapasitas = int(kapasitas)
            graf[simpul1][simpul2] = kapasitas
        except ValueError:
            print("Input tidak valid. Pastikan formatnya 'simpul1 simpul2 kapasitas'.")

    return graf

if __name__ == "__main__":
    print("Algoritma Ford-Fulkerson untuk Mencari Aliran Maksimum")
    graf = input_graf()
    sumber = input("Masukkan simpul sumber: ")
    tujuan = input("Masukkan simpul tujuan: ")

    aliran_maksimum = ford_fulkerson(graf, sumber, tujuan)
    print(f"Aliran maksimum dari '{sumber}' ke '{tujuan}' adalah {aliran_maksimum}")
