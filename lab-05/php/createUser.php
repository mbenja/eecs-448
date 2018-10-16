<?php

// connect to db
$mysql_connection = new mysqli("mysql.eecs.ku.edu", "b265s866", "dov7Naph", "b265s866");
/* check connection */
if ($mysql_connection->connect_errno) {
    printf("Connect failed: %s\n", $mysql_connection->connect_error);
    exit();
}

// get input
$user = $_POST["input_user"];
// check if input is empty
if ($user == "") {
  echo "Whoops, input some text.<br>";
  return;
}

// create query string, perform query
$query = "SELECT * FROM `Users` WHERE `user_id`='" . $user . "';";
$users = $mysql_connection->query($query);

if ($users->num_rows > 0) {
  // user exists already
  echo "User already exists.";
} else {
  // user does not exist, insert
  $query = "INSERT INTO `Users` (user_id) VALUES ('" . $user . "');";

  if ($mysql_connection->query($query) === TRUE) {
      echo "New user created.";
  } else {
      echo "Error: " . $query . "<br>" . $mysql_connection->error;
  }
}

// close connection
$mysql_connection->close();

?>
