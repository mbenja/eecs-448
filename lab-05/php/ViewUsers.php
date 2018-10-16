<?php

// connect to db
$mysql_connection = new mysqli("mysql.eecs.ku.edu", "b265s866", "dov7Naph", "b265s866");
/* check connection */
if ($mysql_connection->connect_errno) {
    printf("Connect failed: %s\n", $mysql_connection->connect_error);
    exit();
}


// create query string, perform query
$query = "SELECT * FROM `Users`;";
$users = $mysql_connection->query($query);

// open table tag
echo "<table>";

// iterate through users
$count = 1;
while($row = $users->fetch_assoc()) {
  echo "<tr><td><strong>" . $count . "</strong></td>";
  echo "<td>" . $row["user_id"] . "</td>";
  echo "</tr>";
  $count++;
}

// close table tag
echo "</table>";

// close connection
$mysql_connection->close();

?>
