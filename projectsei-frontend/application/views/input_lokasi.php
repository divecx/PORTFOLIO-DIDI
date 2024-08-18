<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Input Lokasi Baru</title>
</head>
<body>
    <h2>Input Lokasi Baru</h2>
    <form action="<?= site_url('lokasi/add') ?>" method="post">
        <label for="namaLokasi">Nama Lokasi:</label>
        <input type="text" id="namaLokasi" name="namaLokasi" required><br>

        <label for="negara">Negara:</label>
        <input type="text" id="negara" name="negara" required><br>

        <label for="provinsi">Provinsi:</label>
        <input type="text" id="provinsi" name="provinsi" required><br>

        <label for="kota">Kota:</label>
        <input type="text" id="kota" name="kota" required><br>

        <input type="submit" value="Submit">
    </form>
    <a href="<?= site_url('home') ?>">Kembali ke Daftar Lokasi</a>
</body>
</html>
