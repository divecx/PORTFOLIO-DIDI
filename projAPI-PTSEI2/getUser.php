<?php
require_once('connection.php');

if ($_SERVER['REQUEST_METHOD'] === 'GET') {
    $query = mysqli_query($connection, "SELECT userid, username, name, email FROM db_user");

    $result = array();
    while ($row = mysqli_fetch_array($query)) {
        array_push($result, array(
            'userid' => $row['userid'],
            'username' => $row['username'],
            'name' => $row['name'],
            'email' => $row['email']
        ));
    }

    echo json_encode($result);
} else {
    echo json_encode(array('error' => 'Invalid request method'));
}
?>
