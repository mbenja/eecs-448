<?php

// connect to db
$mysql_connection = new mysqli("mysql.eecs.ku.edu", "b265s866", "dov7Naph", "b265s866");
/* check connection */
if ($mysql_connection->connect_errno) {
    printf("Connect failed: %s\n", $mysql_connection->connect_error);
    exit();
}

// create query string, perform query
$query = "SELECT * FROM `Posts`;";
$posts = $mysql_connection->query($query);

// for deleted posts
$deleted_posts = array();

// iterate through posts
while($row = $posts->fetch_assoc()) {
  // gets next post to be deleted
  $delete = $_POST[$row["post_id"]];
  // deletes
  $query = "DELETE FROM `Posts` WHERE post_id=" . $delete;
  if ($mysql_connection->query($query) === TRUE) {
      // adds to array of deleted posts
      array_push($deleted_posts, $row["post_id"]);
  } else {
      echo "Error: " . $query . "<br>" . $mysql_connection->error;
  }
}

// show confirmation
echo "The following posts were deleted:<br><br>";
for($i = 0; $i < count($deleted_posts); $i++) {
    echo $deleted_posts[$i];
    echo "<br>";
}

// close connection
$mysql_connection->close();

?>
