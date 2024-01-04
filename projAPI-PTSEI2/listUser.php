<!-- list_user.php -->
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Halaman List User</title>
</head>
<body>
    <h1>Halaman List User</h1>
    <?php
    require_once('connection.php');

    $query = mysqli_query($connection, "SELECT userid, username, name, email FROM db_user");

    if (mysqli_num_rows($query) > 0) {
        echo '<ul>';

        while ($row = mysqli_fetch_array($query)) {
            echo '<li>
                    <span>userid:</span> ' . $row['userid'] . '<br>
                    <span>username:</span> ' . $row['username'] . '<br>
                    <span>name:</span> ' . $row['name'] . '<br>
                    <span>email:</span> ' . $row['email'] . '<br>
                  </li>';
        }

        echo '</ul>';
    } else {
        echo '<p>No users found</p>';
    }
    ?>

    <form action="addUser.php" method="get">
        <button type="submit">Tambahkan User</button>
    </form>
</body>
</html>
