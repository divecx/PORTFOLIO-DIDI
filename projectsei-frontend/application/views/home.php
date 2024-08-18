<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Project Management</title>
</head>
<body>
    <h1>Daftar Proyek</h1>
    <table border="1">
        <tr>
            <th>ID</th>
            <th>Nama Proyek</th>
            <th>Client</th>
            <th>Tanggal Mulai</th>
            <th>Tanggal Selesai</th>
            <th>Pimpinan Proyek</th>
            <th>Keterangan</th>
            <th>Action</th>
        </tr>
        <?php foreach($proyek as $p): ?>
        <tr>
            <td><?= $p['id'] ?></td>
            <td><?= $p['namaProyek'] ?></td>
            <td><?= $p['client'] ?></td>
            <td><?= $p['tglMulai'] ?></td>
            <td><?= $p['tglSelesai'] ?></td>
            <td><?= $p['pimpinanProyek'] ?></td>
            <td><?= $p['keterangan'] ?></td>
            <td>
                <a href="<?= site_url('home/edit_proyek/'.$p['id']) ?>">Edit</a>
                <a href="<?= site_url('home/delete_proyek/'.$p['id']) ?>">Delete</a>
            </td>
        </tr>
        <?php endforeach; ?>
    </table>

    <h1>Daftar Lokasi</h1>
    <table border="1">
        <tr>
            <th>ID</th>
            <th>Nama Lokasi</th>
            <th>Negara</th>
            <th>Provinsi</th>
            <th>Kota</th>
            <th>Action</th>
        </tr>
        <?php foreach($lokasi as $l): ?>
        <tr>
            <td><?= $l['id'] ?></td>
            <td><?= $l['namaLokasi'] ?></td>
            <td><?= $l['negara'] ?></td>
            <td><?= $l['provinsi'] ?></td>
            <td><?= $l['kota'] ?></td>
            <td>
                <a href="<?= site_url('home/edit_lokasi/'.$l['id']) ?>">Edit</a>
                <a href="<?= site_url('home/delete_lokasi/'.$l['id']) ?>">Delete</a>
            </td>
        </tr>
        <?php endforeach; ?>
    </table>

    <h2><a href="<?= site_url('home/input_proyek') ?>">Tambah Proyek</a></h2>
    <h2><a href="<?= site_url('home/input_lokasi') ?>">Tambah Lokasi</a></h2>
</body>
</html>
