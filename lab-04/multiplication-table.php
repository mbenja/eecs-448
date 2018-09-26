<?php

echo "<table>";

for ($i = 0; $i <= 100; $i++) {
  echo "<tr>";
  for ($j = 0; $j <= 100; $j++) {
    if ($i == 0 && $j == 0) {
      echo "<td/>";
    } elseif ($i == 0) {
      echo "<td>" . $j . "<td/>";
    } elseif ($j == 0) {
      echo "<td>" . $i . "<td/>";
    } else {
      echo "<td>" . ($i * $j) . "<td/>";
    }
  }
  echo "<tr/>";
}

echo "<table/>";

?>
