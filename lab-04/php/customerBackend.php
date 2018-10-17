<?php

// determine type of shipping
if ($_POST["check_shipping"] == 0) {
  $shipping_type = "Free 7 day";
} else if ($_POST["check_shipping"] == 50) {
  $shipping_type = "Overnight";
} else {
  $shipping_type = "Three day";
}

echo '
<!-- Bootstrap CSS -->
<link rel="stylesheet" href="https://unpkg.com/bootstrap-material-design@4.1.1/dist/css/bootstrap-material-design.min.css" integrity="sha384-wXznGJNEXNG1NFsbm0ugrLFMQPWswR3lds2VeinahP8N0zJw9VWSopbjv2x7WCvX" crossorigin="anonymous">
<!-- Font Family -->
<link href="https://fonts.googleapis.com/css?family=Ubuntu+Mono" rel="stylesheet">
<!-- Custom CSS -->
<link rel="stylesheet" href="../styles/style_customer_backend.css">';

// open body
echo "<body>";

// open modal
echo '<div class="modal" id="modal_receipt" tabindex="-1" role="dialog">
      <div class="modal-dialog" role="document">
      <div class="modal-content">';

// modal header
echo '<div class="modal-header">';
echo '<div class="jumbotron"><h1 class="display-4">Welcome ' . $_POST["input_email"] . '</h1><p class="lead">Your password is: ' . $_POST["input_password"] ."</p></div>";
echo '</div>';

// modal body
echo '<div class="modal-body">';

echo '<table id="table_receipt" cellpadding="10"';
echo "<tr><td></td>";
echo "<th>Quantity</th><th>Cost Per Item</th><th>Sub Total</th>";
echo "</tr><tr>";
echo "<td><strong>Bananas</strong></td><td>" . $_POST["input_bananas"] . "</td><td>$1.50</td><td>$" . ($_POST["input_bananas"] * 1.5) . "</td>";
echo "</tr><tr>";
echo "<td><strong>Apples</strong></td><td>" . $_POST["input_apples"] . "</td><td>$1.00</td><td>$" . ($_POST["input_apples"] * 1.0) . "</td>";
echo "</tr><tr>";
echo "<td><strong>Oranges</strong></td><td>" . $_POST["input_oranges"] . "</td><td>$0.75</td><td>$" . ($_POST["input_oranges"] * 0.75) . "</td>";
echo "</tr><tr>";
echo "<td><strong>Shipping</strong></td><td colspan='2'>" . $shipping_type . "</td><td>$" . $_POST["check_shipping"] . "</td>";
echo "</tr><tr>";
echo "<td colspan='2'><strong>Total Cost</strong><td><td><strong>$" . (($_POST["input_bananas"] * 1.5) + ($_POST["input_apples"] * 1.0) + ($_POST["input_oranges"] * 0.75) + $_POST["check_shipping"]) . "</td>";
echo "</tr>";

echo '</table>';
echo '</div>';

// close modal
echo "</div></div></div>";

// close body
echo "</body>";

// includes
echo '<!-- jQuery first, then Popper.js, SnackbarJS, then Bootstrap JS -->
<script src="https://code.jquery.com/jquery-3.3.1.min.js"></script>
<script src="https://unpkg.com/popper.js@1.12.6/dist/umd/popper.js" integrity="sha384-fA23ZRQ3G/J53mElWqVJEGJzU0sTs+SvzG8fXVWP+kJQ1lwFAOkcUOysnlKJC33U" crossorigin="anonymous"></script>
<!-- SnackbarJS plugin -->
<script src="https://cdn.rawgit.com/FezVrasta/snackbarjs/1.1.0/dist/snackbar.min.js"></script>
<script src="https://unpkg.com/bootstrap-material-design@4.1.1/dist/js/bootstrap-material-design.js" integrity="sha384-CauSuKpEqAFajSpkdjv3z9t8E7RlpJ1UP0lKM/+NdtSarroVKu069AlsRPKkFBz9" crossorigin="anonymous"></script>
';

// present modal
echo "<script>$('#modal_receipt').modal('show');</script>";

 ?>
