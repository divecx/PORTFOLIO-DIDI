<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Edit Proyek</title>
</head>
<body>
    <h2>Edit Proyek</h2>
    <form action="<?= site_url('home/update_proyek') ?>" method="post">
        <input type="hidden" name="id" value="<?= $proyek['id'] ?>">

        <label for="namaProyek">Nama Proyek:</label>
        <input type="text" id="namaProyek" name="namaProyek" value="<?= $proyek['namaProyek'] ?>" required><br>

        <label for="client">Client:</label>
        <input type="text" id="client" name="client" value="<?= $proyek['client'] ?>" required><br>

        <label for="tglMulai">Tanggal Mulai:</label>
        <input type="date" id="tglMulai" name="tglMulai" value="<?= $proyek['tglMulai'] ?>" required><br>

        <label for="tglSelesai">Tanggal Selesai:</label>
        <input type="date" id="tglSelesai" name="tglSelesai" value="<?= $proyek['tglSelesai'] ?>" required><br>

        <label for="pimpinanProyek">Pimpinan Proyek:</label>
        <input type="text" id="pimpinanProyek" name="pimpinanProyek" value="<?= $proyek['pimpinanProyek'] ?>" required><br>

        <label for="keterangan">Keterangan:</label>
        <textarea id="keterangan" name="keterangan"><?= $proyek['keterangan'] ?></textarea><br>

        <input type="submit" value="Update">
    </form>
</body>
</html>
