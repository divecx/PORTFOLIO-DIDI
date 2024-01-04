<?php
require_once('connection.php');

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    if (isset($_POST['username']) && isset($_POST['password']) && isset($_POST['name']) && isset($_POST['email'])) {
        $username = mysqli_real_escape_string($connection, $_POST['username']);
        $password = mysqli_real_escape_string($connection, $_POST['password']);
        $name = mysqli_real_escape_string($connection, $_POST['name']);
        $email = mysqli_real_escape_string($connection, $_POST['email']);

        $query = mysqli_query($connection, "INSERT INTO db_user (username, password, name, email) VALUES ('$username', '$password', '$name', '$email')");

        if ($query) {
            $userid = mysqli_insert_id($connection);
            echo json_encode(array('userid' => $userid));

            echo '<form action="listUser.php" method="get">
                      <button type="submit">Halaman List User</button>
                  </form>';
        } else {
            echo json_encode(array('error' => 'Failed to create user'));
        }
    } else {
        echo json_encode(array('error' => 'Missing parameters'));
    }
} else {
    echo json_encode(array('error' => 'Invalid request method'));
}
?>
