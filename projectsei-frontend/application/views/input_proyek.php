<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Input Proyek Baru</title>
</head>
<body>
    <h2>Input Proyek Baru</h2>
    <form action="<?= site_url('proyek/add') ?>" method="post">
        <label for="namaProyek">Nama Proyek:</label>
        <input type="text" id="namaProyek" name="namaProyek" required><br>

        <label for="client">Client:</label>
        <input type="text" id="client" name="client" required><br>

        <label for="tglMulai">Tanggal Mulai:</label>
        <input type="date" id="tglMulai" name="tglMulai" required><br>

        <label for="tglSelesai">Tanggal Selesai:</label>
        <input type="date" id="tglSelesai" name="tglSelesai" required><br>

        <label for="pimpinanProyek">Pimpinan Proyek:</label>
        <input type="text" id="pimpinanProyek" name="pimpinanProyek" required><br>

        <label for="keterangan">Keterangan:</label>
        <textarea id="keterangan" name="keterangan"></textarea><br>

        <input type="submit" value="Submit">
    </form>
    <a href="<?= site_url('home') ?>">Kembali ke Daftar Proyek</a>
</body>
</html>
