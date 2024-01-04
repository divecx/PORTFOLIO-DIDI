<?php
require_once('connection.php');

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    if (isset($_POST['username']) && isset($_POST['password'])) {
        $username = mysqli_real_escape_string($connection, $_POST['username']);
        $password = mysqli_real_escape_string($connection, $_POST['password']);

        $query = mysqli_query($connection, "SELECT username, name, email FROM db_user WHERE username='$username' AND password='$password'");

        if (mysqli_num_rows($query) > 0) {
            $result = mysqli_fetch_assoc($query);
            echo json_encode($result);
            
            echo '<form action="listUser.php" method="get">
                      <button type="submit">Halaman List User</button>
                  </form>';
                  
        } else {
            echo json_encode(array('error' => 'Invalid credentials'));
        }
    } else {
        echo json_encode(array('error' => 'Missing parameters'));
    }
} else {
    echo json_encode(array('error' => 'Invalid request method'));
}
?>
