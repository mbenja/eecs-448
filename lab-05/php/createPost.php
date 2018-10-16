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
$post_text = $_POST["input_post"];
// check if input is empty
if ($user == "" || $post_text == "") {
  echo "Whoops, input some text.<br>";
  return;
}

// create query string, perform query
$query = "SELECT * FROM `Users` WHERE `user_id`='" . $user . "';";
$users = $mysql_connection->query($query);

if ($users->num_rows > 0) {
  // user exists, insert
  $query = "INSERT INTO `Posts`(`post_id`, `content`, `author_id`) VALUES ('default','" . $post_text . "','" . $user ."');";

  if ($mysql_connection->query($query) === TRUE) {
      echo "Post submitted.<br>";
  } else {
      echo "Error: " . $query . "<br>" . $mysql_connection->error;
  }
} else {
  // user does not exist, do not insert
  echo "The specified user does not exist. The post was not submitted.";
}

// close connection
$mysql_connection->close();

?>
