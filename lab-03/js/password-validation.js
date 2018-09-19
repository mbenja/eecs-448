/**
  * Declaration of modal manager instance
*/
const modal_manager = new ModalManager();

/**
  * Call for password form modal to be presented
*/
modal_manager.operationPasswordForm();

/**
  * Validates password entry to spec
  * Passwords must match
  * Passwords must be at least eight characters long
  * Presents error modal if bad entry
  * Presents success modal if good entry
*/
function validatePasswords() {
  // hide error messages on modal
  document.getElementById('password_bad_match').style.display = "none";
  document.getElementById('password_bad_length').style.display = "none";
  // get entry
  const password = document.getElementById('input_password').value;
  const password_confirmed = document.getElementById('input_confirm_password').value;

  // bool for good or bad entry
  var is_good_entry = true;

  // check to see if passwords match
  if (password != password_confirmed) {
    is_good_entry = false;
    // show bad match on modal
    document.getElementById('password_bad_match').style.display = "block";
  }
  // check for length requirement
  if (password.length < 8) {
    is_good_entry = false;
    // show bad length on modal
    document.getElementById('password_bad_length').style.display = "block";
  }
  // call for bad password modal
  if (!is_good_entry) {
    modal_manager.manageBadPassword('show');
  } else {
    // good password
    modal_manager.manageGoodPassword('show');
  }
}
