<?php
require_once('connection.php');

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $input = json_decode(file_get_contents('php://input'), true);

    if (isset($input['username']) && isset($input['password'])) {
        $username = mysqli_real_escape_string($connection, $input['username']);
        $password = mysqli_real_escape_string($connection, $input['password']);

        $query = mysqli_query($connection, "SELECT username, name, email FROM db_user WHERE username='$username' AND password='$password'");

        if (mysqli_num_rows($query) > 0) {
            $result = mysqli_fetch_assoc($query);
            echo json_encode($result);
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
