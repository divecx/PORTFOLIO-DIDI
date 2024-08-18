<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Edit Lokasi</title>
</head>
<body>
    <h2>Edit Lokasi</h2>
    <?php if ($lokasi): ?>
    <form action="<?= site_url('home/update_lokasi') ?>" method="post">
        <input type="hidden" name="id" value="<?= htmlspecialchars($lokasi['id']) ?>">

        <label for="namaLokasi">Nama Lokasi:</label>
        <input type="text" id="namaLokasi" name="namaLokasi" value="<?= htmlspecialchars($lokasi['namaLokasi']) ?>" required><br>

        <label for="negara">Negara:</label>
        <input type="text" id="negara" name="negara" value="<?= htmlspecialchars($lokasi['negara']) ?>" required><br>

        <label for="provinsi">Provinsi:</label>
        <input type="text" id="provinsi" name="provinsi" value="<?= htmlspecialchars($lokasi['provinsi']) ?>" required><br>

        <label for="kota">Kota:</label>
        <input type="text" id="kota" name="kota" value="<?= htmlspecialchars($lokasi['kota']) ?>" required><br>

        <input type="submit" value="Update">
    </form>
    <?php else: ?>
        <p>Data lokasi tidak ditemukan.</p>
    <?php endif; ?>
</body>
</html>
