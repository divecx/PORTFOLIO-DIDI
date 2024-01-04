<?php

    define('HOST', 'localhost');
    define('USER', 'root');
    define('PASS', '');
    define('DB', 'projapi-ptsei');

    $connection = mysqli_connect(HOST, USER, PASS, DB) or die
    ('Unable conncect');

?>