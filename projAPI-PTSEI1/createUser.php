<?php

    require_once('connection.php');

    if ($_SERVER['REQUEST_METHOD'] === 'POST') {
        $input = json_decode(file_get_contents('php://input'), true);

        if (isset($input['username']) && isset($input['password']) && isset($input['name']) && isset($input['email'])) {
            $username = mysqli_real_escape_string($connection, $input['username']);
            $password = mysqli_real_escape_string($connection, $input['password']);
            $name = mysqli_real_escape_string($connection, $input['name']);
            $email = mysqli_real_escape_string($connection, $input['email']);

            $query = mysqli_query($connection, "INSERT INTO db_user (username, password, name, email) VALUES ('$username', '$password', '$name', '$email')");

            if ($query) {
                $userid = mysqli_insert_id($connection);
                echo json_encode(array('userid' => $userid));
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
